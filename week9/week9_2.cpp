#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string a[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};

int main()
{
    string b;
    cin >> b;
    for (int i = 0; i < b.size(); i++)
    {
        cout <<a[toupper(b[i])-'A'];
    }
}