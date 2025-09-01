// https://leetcode.com/problems/two-sum/description/


// 2--> Brute force approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int x=0, y=0;
        for(int i=0; i<nums.size()-1; i++) {
            for(int j=i+1; j<nums.size(); j++) {
                if((nums[i] + nums[j]) == target) {
                    x = i; y = j; break;
                }
            }
        }
        return {x, y};
    }
};



// 1--> Hashmap approach

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];
            if(mp.count(need)) {
                return {mp[need], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};

