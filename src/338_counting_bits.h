#ifndef COUNTING_BITS_338_H
#define COUNTING_BITS_338_H
#include <vector>
using namespace std;
int getOneCount(int v){
    int count = 0;
    while(v){
        if(v % 2 ==1){
            ++count;
        }
        v = v / 2;
    }

    return count;
}
class Solution338 {
public:
    vector<int> countBits(int num) {
        vector<int> ret;
        for(int i = 0; i <= num; i++){
            ret.push_back(getOneCount(i));
        }
        return ret;
    }
};
#endif // COUNTING_BITS_338_H

