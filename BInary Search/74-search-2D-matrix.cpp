class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int len = matrix.size();

        // cout<<len;

        for(int i =0;i<len;i++){

            vector<int> v1 = matrix[i];
            sort(v1.begin(),v1.end());

            int low = 0;
            int high = v1.size()-1;


            while(low <= high){

                int mid = low + (high - low)/2;
                
                if(v1[mid] < target )
                {
                    low = mid + 1;
                }else if(v1[mid] > target){
                    high = mid -1;
                }else{
                    return true;
                }

            }

            // for(auto itr : v1) cout<<itr<<" ";
        }

        return false;
    }
};