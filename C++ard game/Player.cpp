#include "Player.hpp"

void Player::player_turn()
{

}
void Player::set_champion(Champion champion)
{
	champion = champion;
}


int Player::get_money(int nbround, int starting_money)//nbround vient de la classe Game
{
	int var = 0;
	if (nbround == 0)//round 0 - Attribution initiale des pi�ces (varie selon le champion)
		var = starting_money;
	else if (var < 10)//reste des rounds, ajout d'une pi�ce par round dans la limite de 10 pi�ces.
		var = money + 1;
	else//cas o� le joueur a plus de 10 pi�ces, il n'en gagne pas d'autres.
		var = money;
	money = var;
}

