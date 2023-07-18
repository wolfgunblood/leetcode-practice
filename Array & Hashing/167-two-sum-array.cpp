class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> result;
        int i = 0;
        int j = numbers.size()-1;

        while(i<j){

            if(target - numbers[i] == numbers[j]){
                result.push_back(i+1);
                result.push_back(j+1);
                break;
            }
            if(numbers[i] + numbers[j] > target) j--;
            if(numbers[i] + numbers[j] < target) i++;
    
        }

        return result;

    }
};