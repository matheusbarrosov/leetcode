#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string value = to_string(x);
        int le = value.length();
        for (int i = 0; i < le; i++) {
            if(i > le/2)
                break;
            if(value[i] != value[le-1-i]) {
                return false;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    cout <<boolalpha << s.isPalindrome(10) << endl;
    return 0;
}