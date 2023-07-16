class Solution {
public:
    bool isValid(string s) {
        
        stack<char> open;

        unordered_map<char,char> pares = {
            {')','('},
            {'}','{'},
            {']','['}
        };
        for(auto c : s){
            // cout<<itr.first<<" "<<itr.second;
            // cout<<c;

            if(pares.find(c) != pares.end())
            {
                if(open.empty()){
                    return false;
                }
                if(open.top() != pares[c]){
                    return false;
                }
                open.pop();
            }else{
                open.push(c);
            }

            // if(open)
        }

        return open.empty();
    }
};