#include <iostream>
#include <algorithm>
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
        if (a<max)
        {
            min=a;
        }
    }
    cout<<min+max;
}
