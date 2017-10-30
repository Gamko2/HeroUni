#ifndef HUMAN_H
#define HUMAN_H
#include"hero.h"

class human : public hero {

public:
	float calculate_hp();
	string getRasse();
	int getDMG();
	human(string name, int age, float height) :hero(name, age, height) {};

};


#endif // !HUMAN_H

