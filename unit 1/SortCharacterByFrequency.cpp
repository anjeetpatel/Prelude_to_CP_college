#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
string frequencySort(string s)
{
    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
    }
    vector<pair<int, char>> v;
    for (auto x : mp)
    {
        v.push_back({x.second, x.first});
    }
    sort(v.begin(), v.end(), greater<pair<int, char>>());
    string ans = "";
    for (auto x : v)
    {
        for (int i = 0; i < x.first; i++)
        {
            ans += x.second;
        }
    }
    return ans;
}
int main()
{
    string s;
    cin >> s;
    cout << frequencySort(s);
    return 0;
}
