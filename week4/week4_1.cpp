#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (size_t i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        for (int x = 1; x < i; x++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}