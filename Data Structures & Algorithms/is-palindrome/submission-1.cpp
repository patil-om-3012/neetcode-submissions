class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        
        string t = "";
        for(char c:s){
            if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9'){
                t += tolower(c);
            }
        }

        int right = t.size()-1;


        while(left < right){
            if(t[left] != t[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
