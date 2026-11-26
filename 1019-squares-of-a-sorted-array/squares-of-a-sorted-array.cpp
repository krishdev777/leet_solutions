class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size(),i=0,j=n-1;
        vector<int> ans(n);
        for(int k=n-1;k>=0;k--){
            int left=nums[i]*nums[i];
            int right=nums[j]*nums[j];
            if(left>right){ans[k]=left;i++;}
            else{ans[k]=right;j--;}

        }
        return ans;
    }
};