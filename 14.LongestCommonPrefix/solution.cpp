#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        int size = strs.size();
        string first = strs[0];
    
        for(int i = 0; i < first.length(); i++) {
            for (int j = 1; j < size; j++) {
                if(strs[j].length() < i || strs[j][i] != first[i]) {
                    return prefix;
                }
            }
            prefix += first[i];
        }
        return prefix;
    }
};

int main(){
    Solution s;
    vector<string> v = {"flower","flow","flight"};
    cout << s.longestCommonPrefix(v) << endl;
    return 0;
}