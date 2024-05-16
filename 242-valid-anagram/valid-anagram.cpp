class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        map<char,int> mp1;
        map<char,int> mp2;
        for(char ch:s)mp1[ch]++;
        for(char ch:t)mp2[ch]++;

        for(int i=0;i<s.length();i++){
            //checking if character exists in both the maps
            char ch= s[i];
            if(mp2.find(ch)==mp2.end())return false;
            else{
                //extract count;
                auto val1 = mp1.find(ch);
                auto val2 = mp2.find(ch);
                if(val1->second != val2->second )return false;
            }
        }
        return true;
    }
};