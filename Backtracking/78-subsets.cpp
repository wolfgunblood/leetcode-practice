class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> curr;
        vector<vector<int>> result;
        int start = 0;
        dfs(nums,0,curr,result);

        return result;
       
    }

private:
    void dfs(vector<int>& nums,int start,vector<int>& curr, vector<vector<int>>& result){
        
        result.push_back(curr);
        for(auto itr : curr) cout<<itr<<"-";
        cout<<" ";
        for(int i = start;i<nums.size();i++){
            curr.push_back(nums[i]);
            dfs(nums,i+1,curr,result);
            curr.pop_back();
        }

    }
};