#ifndef 136_SINGLE_NUMBER_H
#define 136_SINGLE_NUMBER_H
#include <vector>
class Solution136 {
public:
    int singleNumber(vector<int>& nums) {
        int ret = 0;
        for(size_t i = 0; i < nums.size(); i++){
            ret ^= nums[i];
        }
        return ret;
    }
};
#endif // 136_SINGLE_NUMBER_H

