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
		player_begin = false;
		nb_round = 1;
		opponent.set_name("Bot Bob");
	}

	~Game()
	{
		leaderboard.clear();
	}

	void game_menus(Player& player);

	void draw_title();

	void main_game();

	int get_nb_round();

	void startRound(Player& player);

	void printDeck(std::vector<Card*> deck);

	void openShop(Player& player, Draw draw);

	void fight(Player* player, Player* opponent);

	void hit(Card* attacker, Card* adversary);

	void attack(std::vector<Card*> attacker, std::vector<Card*> adversary);


};

#endif //_GAME_H