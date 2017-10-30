#ifndef ELF_H
#define ELF_H
#include "hero.h"

class elf :public hero {
public:
	float calculate_hp();
	string getRasse();
	int getDMG();
	elf(string name, int age, float height) :hero(name, age, height) {};

};

#endif // !ELF_H
