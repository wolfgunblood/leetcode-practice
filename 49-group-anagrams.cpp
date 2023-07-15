class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> result;
        unordered_map<string,vector<string>> map;
        int count =0;
        for(int i =0;i<strs.size();i++){
            
            string check = strs[i];
            sort(check.begin(),check.end());
            // cout<<check;

            if(map.find(check) != map.end()){
             map[check].push_back(strs[i]);
                // cout<<check;
            }
            else{
                vector<string> v1;
                v1.push_back(strs[i]);
                map.insert({check,v1});
         }
        }

        for(auto i : map){
            cout<<i.first<<"--";
            for(int itr =0;itr<i.second.size();itr++){
                cout<<i.second[itr]<<"-";
            }
            result.push_back(i.second);
        }

        return result;
    }
};