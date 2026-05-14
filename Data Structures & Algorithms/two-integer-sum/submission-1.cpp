class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int> st;
        pair<int,int> nos;

        for(int i=0;i<nums.size();i++){
            if(st.find(target-nums[i]) != st.end()){
                nos.first = target-nums[i];
                nos.second = nums[i];
            }
            st.insert(nums[i]);
        }

        vector<int> ans(2,-1);

        for(int i=0;i<nums.size();i++){
            if(nums[i] == nos.first && ans[0] == -1){
                ans[0] = i;
                //continue;
            }if(nums[i] == nos.second){
                ans[1] = i;
            }
        }

        return ans;
    }
};
