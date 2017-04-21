#ifndef 268_MISSING_NUMBER
#define 268_MISSING_NUMBER
#include <vector>
#include <algorithm>
using namespace std;
class Solution268 {
public:
    int missingNumber(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i != nums[i]){
                return i;
            }
        }

        return nums.size();
    }
};
#endif // 268_MISSING_NUMBER

