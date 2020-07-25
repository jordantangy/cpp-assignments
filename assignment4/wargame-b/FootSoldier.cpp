#include "FootSoldier.hpp"

/*
search for the target.
if target.first (which means x in a graph) is not -1 , than we succeed the attack and the adverse soldier is injured
*/
void FootSoldier::activity(std::vector<std::vector<Soldier*>> board, std::pair<int,int> location){
    std::pair<int,int> target = search(board, location, this->get_player());
    if (target.first != -1){
        board[target.first][target.second]->injured(this->_DP);
    }
}
    /*
    Looking for the closest adverse soldier on the board
    Using two for loops to run through the board and get the closest adverse soldier on the board
    temp location is a temporary location where it mesures the distance between the 'location' of the soldier 
    that wants to attack and the location of the soldier that is being attacked.
    returns the location of the closest soldier found.
    */
std::pair<int,int> FootSoldier::search(std::vector<std::vector<Soldier*>> board, std::pair<int,int> location, int player_number){
    std::pair<int,int> ans {-1,-1};
    int min = -1;
    int temp;
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[i].size(); j++) {
            if (board[i][j] != nullptr){
                if (board[i][j]->get_player() != player_number) {
                    temp = (abs(location.first - i)) + (abs(location.second - j));
                    if (temp < min || min == -1){
                        min = temp;
                        ans = {i,j};
                    }
                }
            }
        }
            
    }
    return ans;
}

FootSoldier::~FootSoldier(){

}