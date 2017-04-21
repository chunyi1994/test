#ifndef 292_NIM_GAME_H
#define 292_NIM_GAME_H

class Solution292 {
public:
    bool canWinNim(int n) {
        int m = n%10;
        if(m<= 4 && 0 <= m){
            return false;
        }else{
            return true;
        }

    }
};
#endif // 292_NIM_GAME_H

