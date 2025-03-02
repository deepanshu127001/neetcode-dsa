class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        std::unordered_map<int,int> lostPlayers;
        std::set<int> players;
        std::vector<int> neverLostPlayers;
        std::vector<int> lostOncePlayers;
        for(const auto &vec:matches){
            const auto winner = vec[0];
            const auto loser =  vec[1];
            lostPlayers[loser]++;
            //insert every player in set
            players.insert(winner);
            players.insert(loser);
        }
        for(const auto &player : players){
            if(lostPlayers.find(player) == lostPlayers.end())
                neverLostPlayers.emplace_back(player);
            else if(lostPlayers[player] == 1)
                lostOncePlayers.emplace_back(player);
        }
        return {neverLostPlayers,lostOncePlayers};
    }
};