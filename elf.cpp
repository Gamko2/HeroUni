#include "elf.h"

string elf :: getRasse() {
	return "elf";
}

int elf::getDMG() {
	return 150;
}

float elf::calculate_hp() {
return hero::calculate_hp();
}
