class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n=nums.size();
         int totalsum=0;
         int maxsum=nums[0],currmax=0;
         int minsum=nums[0],currmin=0;
         for(int i=0;i<n;i++){
            currmax=max(nums[i],currmax+nums[i]);
            maxsum=max(maxsum,currmax);

              currmin=min(nums[i],currmin+nums[i]);
            minsum=min(minsum,currmin);
            totalsum+=nums[i];
         }
         if(maxsum<0){
         return maxsum;
         }
         return max(maxsum,totalsum-minsum);
         
    }
}; 