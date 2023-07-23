class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n = arr.size();
        int currMax = -1;
        vector<int> result(n);
        currMax=arr[n-1];
        result[n-1] = -1;

        for(int i = n-2;i>=0;i--){
                
            result[i] = currMax;
            currMax = max(arr[i],currMax);
            
        } 

        for(auto itr : result) cout<<itr;

        return result;  
    }
};