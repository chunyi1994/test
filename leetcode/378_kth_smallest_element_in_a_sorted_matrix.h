#ifndef 378_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX
#define 378_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int, vector<int>, less<int>> que;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
               que.push(matrix[i][j]);
            }
        }
        int ret = que[k - 1];
        return ret;
    }
};
#endif // 378_KTH_SMALLEST_ELEMENT_IN_A_SORTED_MATRIX

