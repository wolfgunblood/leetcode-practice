class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        // int i = 0;
        vector<vector<int>> result;
        // int j = nums.size()-1;
        
        sort(nums.begin(),nums.end());

        int k = 0;

        while(k<nums.size() && nums[k] <= 0){

            int i= 0;
            int j = nums.size() -1;
            int target = nums[k];
            // cout<<target;
            while(i < j ){
                if(i == k || j == k ) break;
                int sum = nums[i] + nums[j];
                if(sum + target < 0) i++;
                if(sum + target > 0) j--;
                if(sum + target == 0){
                cout<<nums[k]<<" "<<nums[i]<<" "<<nums[j]<<" "<<"-";

                vector<int> v1;
                v1.push_back(nums[k]);
                v1.push_back(nums[i]);
                v1.push_back(nums[j]);

                sort(v1.begin(),v1.end());
                result.push_back(v1);
                break;
                }
                
            }

            k++;
        }


        return result;

    }
};