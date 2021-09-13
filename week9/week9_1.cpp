#include <iostream>
#include <string>
using namespace std;

string charToMorse(char16_t letter)
{
    switch (letter)
    {
    case 'a':
    case 'A':
        return ".-";
        break;
    case 'b':
    case 'B':
        return "-...";
        break;
    case 'c':
    case 'C':
        return "-.-.";
        break;
    case 'd':
    case 'D':
        return "-..";
        break;
    case 'e':
    case 'E':
        return ".";
        break;
    case 'f':
    case 'F':
        return "..-.";
        break;
    case 'g':
    case 'G':
        return "--.";
        break;
    case 'h':
    case 'H':
        return "....";
        break;
    case 'i':
    case 'I':
        return "..";
        break;
    case 'j':
    case 'J':
        return ".---";
        break;
    case 'k':
    case 'K':
        return "-.-";
        break;
    case 'l':
    case 'L':
        return ".-..";
        break;
    case 'm':
    case 'M':
        return "--";
        break;
    case 'n':
    case 'N':
        return "-.";
        break;
    case 'o':
    case 'O':
        return "---";
        break;
    case 'p':
    case 'P':
        return ".--.";
        break;
    case 'q':
    case 'Q':
        return "--.-";
        break;
    case 'r':
    case 'R':
        return ".-.";
        break;
    case 's':
    case 'S':
        return "...";
        break;
    case 't':
    case 'T':
        return "-";
        break;
    case 'u':
    case 'U':
        return "..-";
        break;
    case 'v':
    case 'V':
        return "...-";
        break;
    case 'w':
    case 'W':
        return ".--";
        break;
    case 'x':
    case 'X':
        return "-..-";
        break;
    case 'y':
    case 'Y':
        return "-.--";
        break;
    case 'z':
    case 'Z':
        return "--..";
        break;
    default:
        return " ";
        break;
    }
}
int main()
{
    string a;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        cout << charToMorse(a[i]);
    }
}