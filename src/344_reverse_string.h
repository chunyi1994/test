#ifndef REVERSE_STRING_344
#define REVERSE_STRING_344
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Solution344 {
public:
    string reverseString(string s) {
        for(size_t i = 0; i < s.length() / 2; i++){
            swap(s[i], s[s.length() - 1 - i]);
        }
        return s;
    }
};

#endif // REVERSE_STRING_344

