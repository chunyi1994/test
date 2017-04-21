#ifndef 258_ADD_DIGITS_H
#define 258_ADD_DIGITS_H

class Solution258 {
public:
    int addDigits(int num) {
        int ret = num;

        while( ret >= 10){
            num = ret;
            ret = 0;
            while(num){
                ret += num % 10;
                num = num / 10;
            }
        }

        return ret;
    }
};

#endif // 258_ADD_DIGITS_H

