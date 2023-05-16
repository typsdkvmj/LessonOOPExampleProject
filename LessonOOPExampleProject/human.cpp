#include "human.h"

//default constructor 
Human::Human() {
	name = "no name";
	surname = "no surname";
	age = 15;	
}

//constructor with arguments
Human::Human(string nm, string surn, int a) {
	name = nm;
	surname = surn;
	age = a;
}

Human::~Human() {
}

string Human::getName() {

	return name;
}


void Human::setName(string n) {

	name = n;
}

string Human::getSurmame() {

	return surname;
}


void Human::setSurName(string n) {

	surname = n;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int a) {
	if (a > 0 && a < 110) {
		age = a;
	}
}


string Human::convert() {
	string msg = " ";
	msg += " " + surname;
	msg += " ( age = " + to_string(age)+ " )";
	return msg;
}