#include <iostream>
using namespace std;

int main()
{
    int num,pro,a,b,c,start=0;
    cout << "Input number";
    cin >> num;
    pro=num;
    while (pro!=0||start==0)
    {
        start++;
        c=num%10;
        b=(num%100-c)/10;
        a=(num-b-c)/100;
        pro=a*b*c;
        cout << a << "." << b << "." << c << "=" << pro << "\n" ;
        num=pro;
    }
    
}