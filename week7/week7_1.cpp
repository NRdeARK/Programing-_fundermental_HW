#include <iostream>
using namespace std;
int main() 
{
    int a;
    int b;
    cout << "a :";
    cin >> a;
    cout << "b :";
    cin >> b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "a :" << a << endl;
    cout << "b :" << b << endl; 
}