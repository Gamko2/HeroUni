#include <stdio.h>
#include <string>
#include <iostream>
#include "hero.h"
#include <vector>

using namespace std;






int main(){
	vector <hero> v;
	hero hero1("Klaus", 42, 1.76);
	compare(hero1);
	hero hero2("Dieter", 65, 192);
	compare(hero2);
	hero hero3("Dieter", 65, 192);
	compare(hero3);
	
	
	cout << hero2.calculate_hp() << endl;
	cout << hero2.getCurrentHp() << endl;
	hero2.changeCurrentHp(-1);
	cout << hero2 << endl;
	return 0;
}
