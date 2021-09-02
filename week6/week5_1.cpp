#include <iostream>
using namespace std;

double det3_3(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9);
double det2_2(double a1, double a2, double a3, double a4);
void inverse(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9);

int main()
{
    double a1, a2, a3;
    double a4, a5, a6;
    double a7, a8, a9;

    double b1, b2, b3;
    double b4, b5, b6;
    double b7, b8, b9;
    cout << "A\n";
    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9;
    cout << "\n";
    cout << "B\n";
    cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7 >> b8 >> b9;
    cout << "\n";

    //detA
    cout << "DET A\n";
    cout << det3_3(a1, a2, a3, a4, a5, a6, a7, a8, a9) << "\n\n";
    //detB
    cout << "DET B\n";
    cout << det3_3(b1, b2, b3, b4, b5, b6, b7, b8, b9) << "\n\n";
    //A+B
    cout << "A+B\n";
    cout << a1 + b1 << " " << a2 + b2 << " " << a3 + b3 << "\n"
         << a4 + b4 << " " << a5 + b5 << " " << a6 + b6 << "\n"
         << a7 + b7 << " " << a8 + b8 << " " << a9 + b9 << "\n\n";
    //A-B
    cout << "A-B\n";
    cout << a1 - b1 << " " << a2 - b2 << " " << a3 - b3 << "\n"
         << a4 - b4 << " " << a5 - b5 << " " << a6 - b6 << "\n"
         << a7 - b7 << " " << a8 - b8 << " " << a9 - b9 << "\n\n";

    inverse(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    inverse(b1, b2, b3, b4, b5, b6, b7, b8, b9);
}

double det3_3(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9)
{
    return (a1 * a5 * a9) + (a2 * a6 * a7) + (a3 * a4 * a8)  - (a1 * a6 * a8) - (a2 * a4 * a9)- (a3 * a5 * a7);
}
double det2_2(double a1, double a2, double a3, double a4)
{
    return (a1 * a4 - a2 * a3);
}
void inverse(double a1, double a2, double a3, double a4, double a5, double a6, double a7, double a8, double a9)
{
    double d = 1 / det3_3(a1, a2, a3, a4, a5, a6, a7, a8, a9);
    cout << d * det2_2(a5, a6, a8, a9) << "\t" << d * det2_2(a3, a2, a9, a8) << "\t" << d * det2_2(a2, a3, a5, a6) << "\n"
         << d * det2_2(a6, a4, a9, a7) << "\t" << d * det2_2(a1, a3, a7, a9) << "\t" << d * det2_2(a3, a1, a6, a4) << "\n"
         << d * det2_2(a4, a5, a7, a8) << "\t" << d * det2_2(a2, a1, a8, a7) << "\t" << d * det2_2(a1, a2, a4, a5) << "\n\n";
}