#include <string>
using namespace std;
class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for(int i = 0; i<s.size(); i++){
            res^=s[i];
        }
        for(int i = 0; i<t.size(); i++){
            res^=t[i];
        }
        return static_cast<char>(res);
    }
};