#include <iostream>
using namespace std;

int main()
{

    int pro=1,start=0;
    char num[4];
    cout << "Input number ";
    cin >> num;
    while(pro!=0)
    {   
        char A = num[0];
        char B = num[1];
        char C = num[2];
        int a = A - '0';
        int b = B - '0';
        int c = C - '0';
        pro = a*b*c;
        cout << a << "." << b << "." << c << " = " << pro <<"\n";
        c=pro%10;
        b=(pro%100-c)/10;
        a=(pro-b-c)/100;
        num[0] = '0' + a;
        num[1] = '0' + b;
        num[2] = '0' + c;
        
    }

}