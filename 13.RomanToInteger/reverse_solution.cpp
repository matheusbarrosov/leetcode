#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;

        int le = s.length();
        int value = 0;
        int last = 0;
        for (int i = le-1; i >=0; i--) {
            if(last != 0 && m[s[i]] < last){
                value -= m[s[i]];
                last = m[s[i]];
            }else{
                value += m[s[i]];
                last = m[s[i]];
            }
        }
        return value;
    }
};

int main(){
    Solution s;
    cout << s.romanToInt("LVIII") << endl;
    return 0;
}