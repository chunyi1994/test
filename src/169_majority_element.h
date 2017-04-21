#ifndef 169_MAJORITY_ELEMENT
#define 169_MAJORITY_ELEMENT

#include <unordered_map>
//#include <queue>
class Solution169 {
public:
    int majorityElement(vector<int>& nums) {
        //priority_queue<int, int> pQueue;
        unordered_map<int, int> uMap;
        for(auto num : nums){
            uMap[num]++;
        }

        for(auto iter = uMap.begin(); iter != uMap.end(); iter++){
            if(iter->second > nums.size() / 2){
                return iter->first;
            }
        }

        return 0;

    }
};
#endif // 169_MAJORITY_ELEMENT

