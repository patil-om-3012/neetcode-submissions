class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int ans =  INT_MIN;
        while(left < right){
            int h = min(height[left],height[right]);
            ans = max(ans,h*(right-left));
            if(h == height[left]){
                left++;
            }else{
                right--;
            }

        }

        return ans;
    }
};