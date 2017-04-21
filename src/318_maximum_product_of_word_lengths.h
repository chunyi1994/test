#ifndef 318_MAXIMUM_PRODUCT_OF_WORD_LENGTHS
#define 318_MAXIMUM_PRODUCT_OF_WORD_LENGTHS
#include <algorithm>
#include <string>
#include <iostream>
#include <iterator>
#include <vector>
#include <climits>
using namespace std;
class Combine{
public:
    bool operator()(const string&str1, const string& str2){
        //从小到大用<
        //从大到小用>
        return str1.length() > str2.length();
    }
};

class SetNum{
public:
    int operator()(string str){
        str.erase(unique(str.begin(), str.end()), str.end());
        int ret = 0;
        for(size_t i = 0; i < str.length(); i++){
            ret |=  1 << (str[i] - 'a');
        }
        return ret;
    }
};

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<int> vec(words.size());
        int ret = 0;
        transform(words.begin(), words.end(), vec.begin(), SetNum());
        for(int i = 0; i < words.size() - 1; i++){
            for(int j = i + 1; j < words.size(); j++){
                if(!(vec[i] & vec[j])){
                    ret = max(ret, words[i].length() * words[j].length());
                }
            }
        }

        return ret;
    }
};
#endif // 318_MAXIMUM_PRODUCT_OF_WORD_LENGTHS

