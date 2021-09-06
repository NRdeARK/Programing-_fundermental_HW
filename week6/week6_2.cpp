#include <iostream>
using namespace std;
double a[3][3], b[3][3], deta, detb;

double det2_2(double a1, double a2, double a3, double a4);
void det3_3();

int main()
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    //a+b
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] + b[i][j] << " ";
        }
        cout << "\n";
    }
    //a-b
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] - b[i][j] << " ";
        }
        cout << "\n";
    }
    det3_3();
    //inverseA
    cout << deta << endl;
    double d = 1 / deta;
    cout << d << endl ;
    cout << d * det2_2(a[1][1], a[1][2], a[2][1], a[2][2]) << "\t" << d * det2_2(a[0][2], a[0][1], a[2][2], a[2][1]) << "\t" << d * det2_2(a[0][1], a[0][2], a[1][1], a[1][2]) << "\n"
         << d * det2_2(a[1][2], a[1][0], a[2][2], a[2][0]) << "\t" << d * det2_2(a[0][0], a[0][2], a[2][0], a[2][2]) << "\t" << d * det2_2(a[0][2], a[0][0], a[1][2], a[1][0]) << "\n"
         << d * det2_2(a[1][0], a[1][1], a[2][0], a[2][1]) << "\t" << d * det2_2(a[0][1], a[0][0], a[2][1], a[2][0]) << "\t" << d * det2_2(a[0][0], a[0][1], a[1][0], a[1][1]) << "\n\n";
    d = 1 / detb;
    cout << d << endl ;
    cout << d * det2_2(b[1][1], b[1][2], b[2][1], b[2][2]) << "\t" << d * det2_2(b[0][2], b[0][1], b[2][2], b[2][1]) << "\t" << d * det2_2(b[0][1], b[0][2], b[1][1], b[1][2]) << "\n"
         << d * det2_2(b[1][2], b[1][0], b[2][2], b[2][0]) << "\t" << d * det2_2(b[0][0], b[0][2], b[2][0], b[2][2]) << "\t" << d * det2_2(b[0][2], b[0][0], b[1][2], b[1][0]) << "\n"
         << d * det2_2(b[1][0], b[1][1], b[2][0], b[2][1]) << "\t" << d * det2_2(b[0][1], b[0][0], b[2][1], b[2][0]) << "\t" << d * det2_2(b[0][0], b[0][1], b[1][0], b[1][1]) << "\n\n";
}
double det2_2(double a1, double a2, double a3, double a4)
{
    return (a1 * a4 - a2 * a3);
}
void det3_3()
{
    float up1 = 1, up2 = 1, up3 = 1, do1 = 1, do2 = 1, do3 = 1;
    for (int i = 0; i < 3; i++)
    {
        up1 *= a[i][i];
        up2 *= a[i][(i + 1) % 3];
        up3 *= a[i][(i + 2) % 3];
        do1 *= a[2 - i][i];
        do2 *= a[2 - i][(i + 1) % 3];
        do3 *= a[2 - i][(i + 2) % 3];
    }

    deta = up1 + up2 + up3 - do1 - do2 - do3;
    cout << deta << "\n";

    up1 = 1;
    up2 = 1;
    up3 = 1;
    do1 = 1;
    do2 = 1;
    do3 = 1;
    for (int i = 0; i < 3; i++)
    {
        up1 *= b[i][i];
        up2 *= b[i][(i + 1) % 3];
        up3 *= b[i][(i + 2) % 3];
        do1 *= b[2 - i][i];
        do2 *= b[2 - i][(i + 1) % 3];
        do3 *= b[2 - i][(i + 2) % 3];
    }
    detb = up1 + up2 + up3 - do1 - do2 - do3;
    cout << detb << "\n";
}