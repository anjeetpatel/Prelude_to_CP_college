//cpp code for checking occurences in a string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    char x;
    cin >> x;
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == x)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}