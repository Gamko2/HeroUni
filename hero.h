#ifndef HERO_H
#define HERO_H
#include <stdio.h>
#include <string>

using namespace std;


class hero {

private:
	string name;
	int currenthp;
	int maxhp;
	int age;
	float size;

public:
	hero();
	hero(string name);
	hero(string name, int age, float size);
	string get_name();
	void set_name(string name);
	float get_size();
	void set_size(float size);
	int get_age();
	void set_age(int age);
	float calculate_hp();
	int getHp();
	int getCurrentHp();
	void changeCurrentHp(int hp);
	friend std::ostream& operator<< (std::ostream &out, hero hero);
	
	
	


};

bool compare(hero hero);



#endif // !HERO_H
