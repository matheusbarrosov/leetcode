#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x != 0 && x % 10 == 0))
            return false;
        
        int reverse = 0;

        while(x > reverse){
            reverse = reverse * 10 + x % 10;
            x = x / 10;
        }

        return (x == reverse) || (x == reverse / 10);

    }
};

int main(){
    Solution s;
    cout <<boolalpha << s.isPalindrome(10) << endl;
    return 0;
}