
#include "Player.hpp"

/**
 * Player implementation
 */


void Player::player_turn()
{

}
void Player::set_champion(Champion champion)
{
	champion = champion;
}


int Player::get_money(int money, int nbround)//nbround vient de la classe Game
{
	int var;
	var = money + 1;
	if (var > 10)
		var = 10;
	return var;
}

void Player::setBoard(std::vector<Card*> newBoard)
{
	this->Board = newBoard;
}