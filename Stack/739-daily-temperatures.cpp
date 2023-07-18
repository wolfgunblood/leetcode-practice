class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        
        int n = temp.size();
        stack<pair<int,int>> stk;
        vector<int> res(n);

        for(int i=0;i<temp.size();i++){

            int currDay = i;
            int currTemp = temp[i];

            while(!stk.empty() && stk.top().second < temp[i]){

                int prevDay = stk.top().first;
                int prevTemp = stk.top().second;
                
                res[prevDay] = currDay - prevDay;
                stk.pop();
            }
            
            stk.push({currDay,currTemp});

        }

        return res;
    }
};