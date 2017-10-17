#include <stdio.h>
#include <string>
#include <iostream>
#include "hero.h"

using namespace std;






int main(){
	hero array[4];
	hero hero1("Klaus", 42, 1.76);
	hero hero2("Dieter", 65, 192);
	hero hero3("Dieter", 65, 192);
	array[0] = hero1;
	array[1] = hero2;
	array[2] = hero3;
	
	cout << hero2.calculate_hp() << endl;
	cout << hero2.getCurrentHp() << endl;
	hero2.changeCurrentHp(-1);
	cout << hero2 << endl;
	return 0;
}
