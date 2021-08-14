#include <iostream>
#include <string.h>
using namespace std;
int main() 
{
    int num=0;
    char a[999999];
    cin >> a;
    for (int i = 0; i < strlen(a); i++)
    {
        if(isdigit(a[i])==1)
        {
            int digit = a[i]-'0';
            num=num*10+digit;
        }
        else
        {
            if (num==0)
            {
                cout << a[i];
            }
            else
            {
                for (int j = 0; j < num; j++)
            {
                cout << a[i];
            }
            }
            
        }
    }
    
}