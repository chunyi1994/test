#ifndef 217_CONTAINS_DUPLICATE
#define 217_CONTAINS_DUPLICATE
#include <unordered_map>
#include <vector>
using namespace std;
class Solution217 {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> uMap;
        for(auto num : nums){
            uMap[num]++;
        }

        for(auto iter = uMap.begin(); iter != uMap.end(); iter++){
            if(iter->second > 1){
                return true;
            }
        }

        return false;
    }
};
#endif // 217_CONTAINS_DUPLICATE

