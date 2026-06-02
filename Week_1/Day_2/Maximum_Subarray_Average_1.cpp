class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n= nums.size();
        long long window = 0;

        for(int i = 0; i<k; i++){
            window += nums[i];
        }

        long long maxSum = window;

        for(int i = k; i<n ; i++){
            window +=nums[i];
            window -=nums[i-k];

            maxSum=max(maxSum,window);
        }

        return (double)maxSum/k;
    }
};