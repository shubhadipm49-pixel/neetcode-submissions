class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int count = 1 ;
        int max_con = 1 ;
     
        int n = nums.size();
        if(n <=1){
            return n ;
        }

        for(int i = 0;i<nums.size()-1;i++){
            int diff = nums[i+1]-nums[i];
            if(diff == 0){
                continue;
            }
            if(diff == 1){
                count++;
            }else{
                count = 1;
            }

            max_con = max(max_con,count);    

    }

    return max_con;
    }
};
