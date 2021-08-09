#include <iostream>
using namespace std;

int sum_min_max(int times,double min,double max)
{
    double a;
    cin >> a;
    if(min!=min)
    {
     min=a;
     max=a;   
    }
    if (a<min)
    {
        min=a;
    }
    if (a>max)
    {
        max=a;
    }
    if (times==1)
    {
        cout<<min+max;
    }
    else
    {
        sum_min_max(times-1,min,max);
    }
    
}
int main()
{   
    double b=179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.0000000000000000;
    sum_min_max(3,b,-b);
}
