class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int countEven = 0;

        for(int num : nums){
            int count = 0;
            while(num){
                num /= 10;
                count++;
            }
           if(count % 2 == 0){ countEven++; }
            
            //or even better         count += (std::to_string(num).size() % 2 == 0);

        }
        
            return countEven;        
        }
    
};