#ifndef 350_INTERSECTION_OF_TWO_ARRAYS_II
#define 350_INTERSECTION_OF_TWO_ARRAYS_II
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map1, map2;
        for(auto num : nums1){
            map1[num]++;
        }

        for(auto num : nums2){
            map2[num]++;
        }

        vector<int> ret;
        int theMin;
        for(auto iter = map1.begin(); iter != map1.end(); iter++){
            theMin = min(iter->second, map2[iter->first]);
            for(int i = 0; i < theMin; i++){
                ret.push_back(iter->first);
            }
        }

        return ret;


#endif // 350_INTERSECTION_OF_TWO_ARRAYS_II

