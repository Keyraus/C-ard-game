
#include "Player.hpp"
#include "Champion.hpp"
#include "Card.hpp"
#include "Effect.hpp"
#include "Game.hpp"
#include "Draw.hpp"
#include <iostream>
#include "Champ.hpp"
#include <string>
#include <iostream>

int main()
{
	Game game = Game();
	Player player = Player();
	Draw draw = Draw();
	draw.CreateCardList();
	draw;

	player.getBoard();
	
	game.main_game();

	return 0;
}