#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums) {

            if(st.find(num) != st.end()) {
                return true;
            }

            st.insert(num);
        }

        return false;
    }
};

int main() {

    Solution obj;

    vector<int> nums = {1, 2, 3, 1};

    bool result = obj.containsDuplicate(nums);

    if(result)
        cout << "Duplicate exists";
    else
        cout << "No duplicate";

    return 0;
}