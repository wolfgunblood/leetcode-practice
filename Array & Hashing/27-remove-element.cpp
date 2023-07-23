class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int result = 0;
        vector<int> change;

        for(auto itr : nums){
            
            if(itr == val){
                continue;
            }
            else{
                result++;
                change.push_back(itr);
            }
        }
        nums = change;

        return result;
    }
};