#ifndef _3_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H
#define _3_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H
#include <string>
#include <algorithm>
#include <set>
#include <iostream>

using namespace std;
class solution{
public:
    int lengthOfLongestSubstring(string s){
        int max_len = 0;
        if(s.size() == 1){
            return 1;
        }
        for(int i = 0; i < s.length() - 1; i++){
           set<char> char_set;
           char_set.insert(s[i]);
           int len = 1;
           for(int j = i + 1; j < s.length(); j++){
                if(char_set.count(s[j])){
                    break;
                }else{
                    char_set.insert(s[j]);
                    len = max(len, j - i + 1);
                }
           }

           max_len = max(len, max_len);
        }
        return max_len;
    }
};

#endif // 3_LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS_H

