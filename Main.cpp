#include <stdio.h>
#include <string>
#include <iostream>
#include "hero.h"
#include <vector>
#include"human.h"
#include"dwarf.h"
#include"elf.h"

using namespace std;





int main(){
	vector <hero> v;
	hero hero1("Klaus", 28, 1.76);
	compare(hero1);
	hero hero2("Dieter", 28, 192);
	compare(hero2);
	hero hero3("Dieter", 65, 192);
	compare(hero3);
	human human1("Peter", 65, 192);
	elf elf1("Sandra", 65, 182);
	cout << elf1.calculate_hp() << endl;
	cout << human1.calculate_hp() << endl;
	cout << hero2.calculate_hp() << endl;
	cout << hero2.getCurrentHp() << endl;
	hero2.changeCurrentHp(-1);
	cout << hero2 << endl;
	cout << human1 << endl;
	cout << elf1 << endl;
	return 0;
}
