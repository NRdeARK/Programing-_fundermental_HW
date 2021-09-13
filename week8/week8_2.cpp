#include <iostream>
using namespace std;
#include<string>
#include<ctype.h>
int main() 
{
    string a;
    int shift;
    string b="abcdefghijklmnopqrstuvwxyz";
    string c="ABCDEFHIJKLMNOPQRSUVWXYZ";
    cin >> a;
    cin >> shift;
    for (int i = 0; i < a.size(); i++)
    {
        if (islower(a[i])&&isalpha(a[i]))
        {
            cout << b[(a[i]+shift-'a')%26];
        }
        if (isupper(a[i])&&isalpha(a[i]))
        {
            cout << c[(a[i]+shift-'A')%26];
        }
    }
}