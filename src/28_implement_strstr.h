#ifndef _28_IMPLEMENT_STRSTR
#define _28_IMPLEMENT_STRSTR
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        if(needle.size() > haystack.size())
        {
            return -1;
        }

        for(size_t i = 0; i <= haystack.size() - needle.size(); i++)
        {
            if(needle == haystack.substr(i, needle.size()))
            {
                return i;
            }
        }

        return -1;
    }
};
#endif // 28_IMPLEMENT_STRSTR

