#include "dwarf.h"

int dwarf::calculate_hp() {
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

	else if (age <= 16 && age <= 60) {
		float hp = this->get_size() *2.0f;
		maxhp = int(hp);
		currenthp = maxhp;
		return maxhp;
	}

	else if (age > 60) {
		float hp = this->get_size()*3.0f;
		maxhp = int(hp);
		currenthp = maxhp;
		return maxhp;
	}
}

string dwarf :: getRasse() {
	return "dwarf";
}

int dwarf :: getDMG() {
	return 100;
}
