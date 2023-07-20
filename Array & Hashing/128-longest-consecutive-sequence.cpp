class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       unordered_set<int>s(nums.begin(),nums.end());

       int longest = 0;

       for(auto itr : s){

           if(!s.count(itr-1)){
           int length = 1;
                while(s.count(itr+length)) length++;
                longest = max(longest,length);
           }
       }
    return longest;
    }

};