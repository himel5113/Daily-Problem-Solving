// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

// two pointer approach:

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0, r = numbers.size() - 1;
        while(l <= r) {
            int sum = numbers[l] + numbers[r];
            if(target == sum) return {l + 1, r + 1};
            else if(target < sum) r--;
            else l++;
        }
        return {};
    }
};