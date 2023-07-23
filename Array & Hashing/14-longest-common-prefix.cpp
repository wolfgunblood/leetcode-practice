class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string result = "";

        int minLen = 1e7;
        int n = strs.size();

        if(n == 1)
        {
            result = strs[0];
            return result;
        }

        for(auto itr : strs){

            // cout<<itr.length()<<" ";
            int i = itr.length();
            minLen = min(i,minLen);
        }

        // cout<<minLen;

        // for(int i =0;i<n;i++) cout<<strs[i][0];
        for(int i=0;i<minLen;i++){
            string temp = "";
            int flag = true;
            for(int j = 0;j<n-1;j++){
                temp = strs[j][i];
                cout<<temp<<" ";
                if(strs[j][i] == strs[j+1][i]){
                    continue;
                }
                flag = false;
                break;
            }

            if(flag) result +=temp;
            
            if(!flag) break;

        }

        return result;
    }
};