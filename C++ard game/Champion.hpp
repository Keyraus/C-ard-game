#ifndef _CHAMPION_H
#define _CHAMPION_H

#include <string>
#include "Champ.hpp"
#include "Champion.hpp"
#include <cstdlib>
#include <iostream>

#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

class Champion
{
private:
	std::string name;
	Champ code_name;
	int hp;
	int armor;
	int ability_id;

public:
	Champion()
	{
		name = "NotDefined";
		code_name = NotDefined;
		hp = 0;
		armor = 0;
		ability_id = 0;
	}

	Champion(std::string Champion_Choice)
	{
		name = Champion_Choice;
		code_name = NotDefined;
		hp = 0;
		armor = 0;
		ability_id = 0;
	}

	~Champion()
	{

	}

	void Validation_Champion(Champ choice);
	
	std::string get_name_champion();
	
	int get_hp();
	
	int get_armor();

	void take_damage(int damage);
};

Champ Find_Champion_Proposition();
Champ Champion_Proposition();
std::string Find_Champion_NAME(Champ choice);

#endif //_CHAMPION_H