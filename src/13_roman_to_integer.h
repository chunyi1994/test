#ifndef 13_ROMAN_TO_INTEGER
#define 13_ROMAN_TO_INTEGER
#include <string>
using namespace std;
//没做出来
class Solution13 {
public:
    int romanToInt(string s) {
        int ret = 0;
        for(int i = s.length() - 1; i >=0; i-- ){
            int value = s[i] - '0';
            ret = ret * 10 + value;
        }
        return ret;
    }
};
#endif // 13_ROMAN_TO_INTEGER

