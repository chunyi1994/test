#ifndef 35_SEARCH_INSERT_POSITION
#define 35_SEARCH_INSERT_POSITION
#include <vector>
#include <unistd.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(size_t i = 0; i < nums.size(); i++){
            if(target < nums[i])
            {
                return i;
            }
        }

        return nums.size();
    }
};

#endif // 35_SEARCH_INSERT_POSITION

