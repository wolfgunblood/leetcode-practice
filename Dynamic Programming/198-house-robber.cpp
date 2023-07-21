// Logical error

class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();

        if(n == 1) return nums[0];

        if(n == 2) return max(nums[0],nums[1]);
        
        vector<int> memo(n);

        memo[0] = nums[0];
        memo[1] = nums[1];

        for(int i=2;i<n;i++)
        memo[i] = max(memo[i-1],memo[i-2] + nums[i]);

        for(auto itr : memo) cout<<itr<<"-";

        return memo[n-1];
    }
};

//Correct Solution

class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();

        // if(n == 1) return nums[0];

        // if(n == 2) return max(nums[0],nums[1]);
        if(n == 0) return 0;

        vector<int> memo(n+1);

        memo[0] = 0;
        memo[1] = nums[0];

        for(int i=1;i<n;i++)
        memo[i+1] = max(memo[i],memo[i-1] + nums[i]);

        for(auto itr : memo) cout<<itr<<"-";

        return memo[n];
    }
};