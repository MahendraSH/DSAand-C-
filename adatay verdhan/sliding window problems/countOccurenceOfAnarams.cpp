// countOccurenceOfAnagrams.cpp
// not found
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter the string" << endl;
    cin >> str;
    string s;
    cout << "Enter the to find the count string" << endl;
    cin >> s;
    map<char, int> checkIn;
    for (int i = 0; i < s.length(); i++)
    {
        checkIn[s[i]]++;
    }
    int rescount = 0;
    int matchcount=0;
    for (int i = 0, j = 0; i < str.length(); i++)
    {
        if(checkIn[str[i]]!=0)
        {
            // match found
            checkIn[str[i]]--;
            if(checkIn[str[i]]==0){
                matchcount++;
            }
        }


        if (i - j + 1 == s.length())
        {

            
        }
    }
    cout << rescount << endl;
}
