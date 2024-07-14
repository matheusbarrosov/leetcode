#include <iostream>
#include <unordered_map>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos1 = 1;
        int tar = 1;
        int cur = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            if(cur != nums[i]){
                nums[pos1] = nums[i];
                pos1++;
                tar++;
                cur = nums[i];
            }
        }
        return pos1;
    }
};

int main()
{

    Solution s;

    vector<int> x = {0,0,1,1,1,2,2,3,3,4};

    int y = s.removeDuplicates(x);

    for (auto i : x) {
        cout << i << endl;
    }

    cout << endl << y << endl;

    return 0;
}