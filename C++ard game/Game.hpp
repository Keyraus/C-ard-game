#ifndef _GAME_H
#define _GAME_H

#include <vector>
#include <iostream>
#include "Player.hpp"
#include "Draw.hpp"

class Game {
private:
	int nb_round;
	std::vector<Player*> leaderboard;
	Player player;
	Player opponent;

	bool player_begin;

public:
	Game()
	{
		nb_round = 0;
		opponent = Player("Bot Bob");
	}

	~Game()
	{
		leaderboard.clear();
	}

	void game_menus();

	void draw_title();

	void main_game();

	void which_fighter();

	int get_nb_round();

	void startRound();

	void openShop();

	void fight(Player player, Player opponent);

	void attack(std::vector<Card*> attacker, std::vector<Card*> adversary);

	void downgradePlayer(Player loser);

};

#endif //_GAME_H