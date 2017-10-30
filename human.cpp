#include "human.h"

float human::calculate_hp() {

		int age = this->get_age();
		if (age <= 3) {
			float hp = (this->get_size()*0.1f)+30;
			maxhp = int(hp);
			currenthp = maxhp;
			return maxhp;
		}
		else if (age >= 4 && age <= 15) {
			float hp = (this->get_size() * 1.0f)+30;
			maxhp = int(hp);
			currenthp = maxhp;
			return maxhp;
		}

		else if (age <= 16 && age <= 60) {
			float hp = (this->get_size() *2.0f)+30;
			maxhp = int(hp);
			currenthp = maxhp;
			return maxhp;
		}

		else if (age > 60) {
			float hp = (this->get_size()*1.5f) +30;
			maxhp = int(hp);
			currenthp = maxhp;
			return maxhp;
		}
	}

string human::getRasse() {
	return "human";
}

int human::getDMG() {
	return 120;
}






