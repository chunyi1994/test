#ifndef 283_MOVE_ZEROES
#define 283_MOVE_ZEROES
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        while(left < right){
            if(nums[right] == 0){
                right--;
                continue;
            }
            if(nums[left] == 0){
                for(int i = left; i < right; i++){
                    nums[i] = nums[i+1];
                }

                right--;
            }
            if(nums[left] != 0){
                left++;
            }
        }

        for(int i = right + 1; i < nums.size(); i++){
            nums[i] = 0;
        }
    }
};
#endif // 283_MOVE_ZEROES

