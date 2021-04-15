#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{
    double a, b, c, d, x1, x2;
    std::cout << "The template is Ax2+Bx+C=0" << "\n";
    cout << "Enter a\n";
    cin >> a;
    cout << "Enter b\n";
    cin >> b;
    cout << "Enter c\n";
    cin >> c;

    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = ((-b) + sqrt(d)) / (2 * a);
        x2 = ((-b) - sqrt(d)) / (2 * a);
        cout << "The roots are:  " << endl;
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (d == 0)
    {
        x1 = -(b / (2 * a));
        cout << "There's only one root in this quadratic equatation and it's the: " << "\t";
        cout << "x1 = x2 = " << x1 << "\n";
    }
    if (d < 0) // Условие при дискриминанте меньше нуля
        cout << "D < 0, There're no roots in this quadratic equatation" << endl;
    return 0;
}