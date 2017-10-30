#ifndef DWARF_H
#define DWARF_H
#include"hero.h"

class dwarf : public hero {

public:
	int calculate_hp();
	string getRasse();
	int getDMG();
	dwarf(string name, int age, float height) :hero(name, age, height) {};


};


#endif // !1

