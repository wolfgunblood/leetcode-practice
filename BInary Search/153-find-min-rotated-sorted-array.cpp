class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int result = nums[0];

        while(l<=h){

            if(nums[l] < nums[h]){
                
                result = min(result,nums[l]);
                break;
            }

            int mid = l + (h-l)/2;

            result = min(result,nums[mid]);

            if(nums[mid] >= nums[l]) l = mid + 1;
            else h = mid-1;
            
        }

        return result;

    }
};