// Given a string s, sort it in decreasing order based on the frequency of the characters. The frequency of a character is the number of times it appears in the string.//Return the sorted string.If there are multiple answers, return any of them.
// Example 1:
// Input: s = "tree"
// Output: "eert"
// Example 2:
// Input: s = "cccaaa"
// Output: "aaaccc"
// Example 3:
// Input: s = "Aabb"
// Output: "bbAa"
// Example 4:
// Input: s = "loveleetcode"
// Output: "eeeeoovdll"
// Constraints:
// 1 <= s.length <= 5 * 105
// s consists of printable ASCII characters.
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
