#include <sstream>
class Solution {
public:
    std::vector<std::string> tokenize(std::string &s){
        std::vector<std::string> tokens;
        std::istringstream iss(s);
        std::string token;

        while(iss >> token){
            tokens.push_back(token);
        }
        return tokens;
    }
    bool wordPattern(string pattern, string s) {
        std::vector<std::string> words = tokenize(s);
        std::unordered_map<std::string,char> strMap;
        std::set<char> used;
        if(words.size()!=pattern.length())
        return false;
        for(auto index =0;index<words.size();index++){
            std::string word = words[index];
            if(strMap.find(word) == strMap.end()){
                // if(used.find(pattern[index]!=used.end()))
                if (used.find(pattern[index]) != used.end())
                return false;
                strMap[word] = pattern[index];
                used.insert(pattern[index]);
            }
            else if(strMap[word] == pattern[index])
            continue;
            else if(strMap[word] != pattern[index])
            return false;
        }
        return true;
    }
};