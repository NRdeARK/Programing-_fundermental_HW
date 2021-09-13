#include <iostream>
using namespace std;
#include<string.h>
int main() 
{
    char a[999];
    int shift;
    int temp;
    cin >> a;
    cin >> shift;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i]>='A'&&a[i]<='Z')
        {
            temp=(a[i]-'A'+shift)%26+'A';
            printf("%c",temp);
        }
        if(a[i]>='a'&&a[i]<='z')
        {
            temp=(a[i]-'a'+shift)%26+'a';
            printf("%c",temp);
        }
    }
       
}