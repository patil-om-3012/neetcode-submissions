class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }

        for(char c:t){
            if(mp.find(c) == mp.end()){
                return false;
            }
            mp[c] == 1?mp.erase(c):mp[c]--;
        }

        return mp.empty();
    }
};
