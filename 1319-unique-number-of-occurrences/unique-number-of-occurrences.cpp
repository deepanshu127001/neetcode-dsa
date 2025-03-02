class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        std::vector<int> answer(2001,0);
        const auto MAX_RANGE = 1000;
        for(auto &number: arr){
            answer[number + MAX_RANGE]++;
        }
        sort(answer.begin(),answer.end());
        for(auto index = 1;index<=2000; index++){
            if(answer[index]!=0 && answer[index]==answer[index-1])
            return false;
        }
        return true;
    }


};