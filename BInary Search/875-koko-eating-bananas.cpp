class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int low = 1;
        int high = 0;
        
        for(int i =0;i<n;i++){
            high = max(high,piles[i]);
        }
        int res = high;

        while(low<=high){

            int mid = low + (high - low)/2;
            // int target = sum/mid;
            long long int hours = 0;
            for(int i =0;i<n;i++){
                hours = hours + ceil((double)piles[i]/mid);
            }

            if(hours <= h)
            {
                res = min(res,mid);
                high = mid - 1;
            }else
            {
                low = mid + 1;
            }
            
        }

        return res;
    }
};