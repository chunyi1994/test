#ifndef 9_PALINDROME_NUMBER
#define 9_PALINDROME_NUMBER

int getright(int val, int n) {
   while (n--) {
       val = val / 10;
   }
   return val;
}

int xq(int val, int n) {
    while (n--) {
        val = val * 10;
    }
    return val;
}

class Solution {
public:
    bool isPalindrome(int x) {
        int n = 0;
        int xcopy = x;
        while (xcopy >= 10) {
            xcopy = xcopy /10;
            ++n;
        }
        xcopy = x;
        while (n) {
            int left = xcopy % 10;
            int right = getright(xcopy, n);
            if (left != right) return false;
            xcopy = xcopy - xq(right, n) ;
            xcopy = xcopy / 10;
            n--;
        }
        return true;
    }
};

#endif // 9_PALINDROME_NUMBER

