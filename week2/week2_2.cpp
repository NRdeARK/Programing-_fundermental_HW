#include <iostream>
using namespace std;
int main()
{
    double a,max,min;
    cin >> a;
    max=a;
    min=a;
    for (int i = 0; i < 2; i++)
    {
        cin >> a;
        if (a>max)
        {
            max=a;
        }
        if (a<min)
        {
            min=a;
        }
    }
    cout<<max+min;
}

