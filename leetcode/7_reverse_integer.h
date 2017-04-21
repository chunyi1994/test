#ifndef 7_REVERSE_INTEGER
#define 7_REVERSE_INTEGER
#include <sstream>
#include <algorithm>
template <class T>
std::string toString(T t) {
    std::stringstream ss;
    ss<<t;
    return ss.str();
}

template <class T>
long long toLong(T& t) {
    long long result = 0;
    std::stringstream ss;
    ss<<t;
    ss>>result;
    return result;
}

class Solution {
public:
    int reverse(int x) {

        std::string str = toString(x);
        if (x > 0) {
            auto iter_begin = str.begin();
            std::reverse(iter_begin, str.end());
        } else {
            auto iter_begin = str.begin();
            ++iter_begin;
            std::reverse(iter_begin, str.end());
        }
        long long result = toLong(str);
        if (result >= 2147483647 || -2147483647 >= result) {

            return 0;
        }

        return (int)result;
    }
};

#endif // 7_REVERSE_INTEGER

