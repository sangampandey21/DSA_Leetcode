#include <vector>
#include <numeric>
#include <algorithm>

class Solution {
public:
    int minOperations(std::vector<int>& nums, int x) {

        long long total_sum = std::accumulate(nums.begin(), nums.end(), 0LL);
        long long target = total_sum - x;
        

        if (target == 0) return nums.size();

        if (target < 0) return -1;
        
        int max_len = -1;
        long long current_sum = 0;
        int left = 0;
        
        for (int right = 0; right < nums.size(); ++right) {
            current_sum += nums[right];
            
   
            while (left <= right && current_sum > target) {
                current_sum -= nums[left];
                left++;
            }
        
            if (current_sum == target) {
                max_len = std::max(max_len, right - left + 1);
            }
        }
        return (max_len != -1) ? (nums.size() - max_len) : -1;
    }
};
