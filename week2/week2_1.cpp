#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double a[3] ,max,min;
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    int n = sizeof(a) / sizeof(a[0]);
    sort(a, a + n);
    max=a[0];
    min=a[2];
    cout<<min+max;
}
