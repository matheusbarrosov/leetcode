#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int abs = target - nums[i];
            if (m.count(abs)){
                return {m[abs], i};
            } else{
                m[nums[i]] = i;
            }
        }
        return {};
    }
};


int main(){
    Solution s;
    vector<int> vect {3,3};
    
    vector<int> result = s.twoSum(vect, 6);


    cout << result[0] << " " << result[1] << endl;
    return 0;
}