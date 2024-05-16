class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mp;
        vector<vector<string>> vec;
        for(string str:strs)
        {
            auto key = str;
            sort(key.begin(),key.end());
            mp[key].push_back(str);
        }
        auto iter = mp.begin();
        while(iter!=mp.end()){
            vec.push_back(iter->second);
            iter++;
        }
        return vec;
    }
};