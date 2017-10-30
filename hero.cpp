#include "hero.h"
#include<stdio.h>
#include <string>
#include <iostream>
#include <vector>

using namespace std;
vector <hero> v;



hero::hero() :hero("test", 1, 1) {

}

hero::hero(string name) : hero(name, 1, 1) {

}

hero::hero(string name, int age, float size) {
	this->name = name;
	this->size = size;
	this->age = age;
	
}

void hero::set_name(string name) {
	this->name = name;
}

void hero::set_age(int age) {
	this->age = age;
}

void hero::set_size(float size) {
	this->size = size;
}

string hero::get_name() {
	return name;
}

float hero::get_size() {
	return size;
}

int hero::get_age() {
	return age;
}

float hero::calculate_hp() {

	int age = this->get_age();
	if (age <= 3) {
		float hp = this->get_size()*0.1f;
		maxhp = int(hp);
		currenthp = maxhp;
		return maxhp;
	}
	else if (age >= 4 && age <= 15) {
		float hp = this->get_size() * 1.0f;
		maxhp = int(hp);
		currenthp = maxhp;
		return maxhp;
	}

	else if (age >= 16 && age <= 60) {
		float hp = this->get_size() *2.0f;
		maxhp = int(hp);
		currenthp = maxhp;
		return maxhp;
	}

	else if (age > 60) {
		float hp = this->get_size()*1.5f;
		maxhp = int(hp);
		currenthp = maxhp;
		return maxhp;
	}
}

int hero::getHp() {
	return maxhp;
}

int hero::getCurrentHp() {
	return currenthp;
}

void hero::changeCurrentHp(int hp) {

	if ((currenthp + hp) < 0) {
		cout << "HP kann nicht unter 0 fallen" << endl;
		return;
	}
	else if ((currenthp + hp) > maxhp) {
		cout << "HP kann nicht die maxhp überschreiten" << endl;
		return;
	}
	currenthp = currenthp + hp;
	cout << "Die HP von " << this->get_name() << " beträgt: " << currenthp << endl;
	return;
}



bool operator==(hero &hero1, hero &hero2)
{
	if ((hero1.getHp() == hero2.getHp()) && (hero1.get_age() == hero2.get_age()) && (hero1.get_name() == hero2.get_name()) && (hero1.get_size() == hero2.get_size()))
	{
		return true;
	}
	else {
		return false;
	}
}

std::ostream& operator<< (std::ostream &out, hero hero) {
	cout << hero.get_name() << ", Age: " << hero.get_age() << ", Height:  " << hero.get_size() << ", " << "HP: " << hero.getCurrentHp() << "/" << hero.getHp();
	return out;
}





bool operator!=(hero &hero1, hero &hero2) {
	if ((hero1.getHp() == hero2.getHp()) && (hero1.get_age() == hero2.get_age()) && (hero1.get_name() == hero2.get_name()) && (hero1.get_size() == hero2.get_size()))
	{
		return false;
	}
	else {
		return true;
	}

}

bool compare(hero hero) {
	v.push_back(hero);
	for (int i = 0; i < v.size()-1; i++) {
		if (v[i] == hero) {
			cout << "Duplicate" << endl;
			v.pop_back();
			return false;
		}
	}
	cout << "no duplicate"<<endl;
		return true;
}

bool hero::getStatus() {
	return status;
}

void hero::setStatus(bool status) {
	this->status = status;
}


int hero::getDMG() {
	return 0;
}

string hero::getRasse() {
	return "Super-Duper Hero";
}

