#ifndef _DRAW_HPP_
#define _DRAW_HPP_

#include <string>
#include <vector>
#include "Card.hpp"

class Draw
{
private:
	std::vector<Card*> all_card;
	//std::vector<Card&> deck;
	int nb_card;

public:
	Draw()
	{
		nb_card = 0;
	}

	~Draw()
	{

	}

	void BuyPhase();

	void CreateCardList();
	
	std::vector<Card*> getCardList() const;
};


#endif