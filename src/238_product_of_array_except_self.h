#ifndef _238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
#define _238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
#include <vector>
using namespace std;
class Solution238 {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ret;
        int sum;
        for(size_t i =0; i < nums.size(); i++){
            sum = 0;
            for(size_t j = 0; j < nums.size(); j++){
                if(j == i){
                    continue;
                }
                sum *= nums[j];
            }
            ret.push_back(sum);
        }
        return ret;
    }
};

#endif // 238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H

