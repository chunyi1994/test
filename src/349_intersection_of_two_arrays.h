#ifndef _349_INTERSECTION_OF_TWO_ARRAYS_H
#define _349_INTERSECTION_OF_TWO_ARRAYS_H
#include <set>
#include <vector>
#include <iterator>
 #include <algorithm>
using namespace std;

class Solution349 {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1, set2;
        for(size_t i = 0; i < nums1.size(); i++){
            set1.insert(nums1[i]);
        }
        for(size_t i = 0; i < nums2.size(); i++){
            set2.insert(nums2[i]);
        }

        vector<int> ret;
         std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), back_insert_iterator<vector<int> >(ret));
         return ret;
    }
};
#endif // 349_INTERSECTION_OF_TWO_ARRAYS_H

