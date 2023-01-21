class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int count = 0;
        string substring ="";
        unordered_map<char, int> mp;

        for(int i = 0; i < s.length(); i++){

            int index = substring.find(s[i]);

            if(index != -1){

                if(substring.length() > count)
                    count = substring.length();

                i = mp[s[i]]+1;
                
                substring = "";
            }

            substring += s[i];
            mp[s[i]] = i;
        }

        if(substring.length() > count)
            return substring.length();

        return count;
    }
};