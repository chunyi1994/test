#ifndef 260_SINGLE_NUMBER_III_H
#define 260_SINGLE_NUMBER_III_H
#include <set>
#include <vector>
using namespace std;
class Solution260 {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> ret;
        set<int> myset;
        for(size_t i = 0; i < nums.size(); i++){
            set<int>::iterator iter = myset.find(nums[i]);
            if(iter != myset.end()){
                myset.erase(iter);
            }else{
                 myset.insert(nums[i]);
            }

        }

       set<int>::iterator iter = myset.begin();
       ret.push_back(*iter);
       iter++;
       ret.push_back(*iter);

        return ret;
    }
};

#endif // 260_SINGLE_NUMBER_III_H

