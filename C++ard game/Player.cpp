
#include "Player.hpp"

/**
 * Player implementation
 */


void Player::player_turn()
{

}
void Player::set_champion()
{
	champion.Validation_Champion(Champion_Proposition());
}
void Player::set_champion_automaticly()
{

}


int Player::get_money(int money, int nbround)//nbround vient de la classe Game
{
	int var;
	var = money + 1;
	if (var > 10)
		var = 10;
	return var;
}

