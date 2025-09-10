#include <bits/stdc++.h>
using namespace std;


// first of all remove the trailing spaces then start from the last pos and the come forward then when you encounter the space again stop immediately plz.

class Solution {
    public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int count=0;
        while (i>=0 && s[i]==' ') 
        {
            i--;
        }
        while (i>=0 && s[i] !=' ') 
        {
           count++;
           i--;
        }
        
    }
};


int main() {
    string s;
    getline(cin,s);
    Solution sln;
    sln.lengthOfLastWord(s);
    return 0;
}