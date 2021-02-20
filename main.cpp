#include <iostream>
#include <cmath>
struct Coeffs {
	double first;
	double second;
	double third;
};
struct Result {
	int numOfRoots;
	double firstRoot;
	double secondRoot;
};
void resultPrint(Result result) {
	switch (result.numOfRoots) {
	case 0:
		std::cout << "There're no roots in this quadratic equatation";
		return;
	case 1:
		std::cout << "There's only one root in this quadratic equatation and it's the " << result.firstRoot;
		return;
	case 2:
		std::cout << "The roots are "  << result.firstRoot << " and " << result.secondRoot;
		return;
	}
}
Result solve(Coeffs coeffs) {
	Result result;
	double a = coeffs.first;
	double b = coeffs.second;
	double c = coeffs.third;
	double discr;
	discr = b * b - 4 * a * c;
	if (discr < 0) {
		result.numOfRoots = 0;
		result.firstRoot = 0;
		result.secondRoot = 0;
	}
	if(discr == 0) {
		result.numOfRoots = 1;
		result.firstRoot = -b / 2 * a;
		result.secondRoot = 0;
	}
	if (discr > 0) {
		result.numOfRoots = 2;
		result.firstRoot = (-b + sqrt(discr)) / 2 * a;
		result.secondRoot = (-b - sqrt(discr)) / 2 * a;
	}
	return result;
}
void toUser(Coeffs* coeffs) {
	std::cout << "The template is Ax2+Bx+C=0" << "\n";
	std::cout << "Please enter 'A' 'B' and 'C'" << "\n";
	std::cout << "A: ";
	std::cin >> coeffs->first;
	std::cout << "B: ";
	std::cin >> coeffs->second;
	std::cout << "C: ";
	std::cin >> coeffs->third;
	//std::cout << "You've just entered equation: " << coeffs->first << "x2" << coeffs->second << "x"
	//	<< coeffs->first << "=0" << "\n";
	return;
}
int main(void) {
	Coeffs coeffs;
	Result result;
	toUser(&coeffs);
	result = solve(coeffs);
	resultPrint(result);
	return 0;
}