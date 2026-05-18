class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int left = 0;
        int right = num.size()-1;

        while(left < right){
            int s = num[left]+num[right];
            if(s == target){
                return {left+1,right+1}; //1 indexed array
            }else if(s > target){
                right--;
            }else{
                left++;
            }
        }
        // if(left!=right){
        //     return {num[left],num[right]};
        // }
        return {};
    }
};
