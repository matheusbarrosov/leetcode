#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> pilha;
        unordered_map<char,char> mapa;
        mapa[']'] = '[';
        mapa[')'] = '(';
        mapa['}'] = '{';

        if(mapa.count(s[0]))
            return false;

        for(int i = 0; i < s.length(); i++) {
            if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
                pilha.push(s[i]);
            }
            else{
                if(!pilha.empty() && pilha.top() == mapa[s[i]]){
                    pilha.pop();
                }else {
                    return false;
                }
            }
        }
        if(pilha.empty()) {
            return true;
        }
        return false;
    }
};

int main(){
    Solution s;
    cout << boolalpha << s.isValid("(){}}{") << endl;
    return 0;
}