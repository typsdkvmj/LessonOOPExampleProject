#include "human.h"

//default constructor 
Human::Human() {
	cout << "Human default constructor " << endl;
	name = "no name";
	surname = "no surname";
	age = 15;	
}

//constructor with arguments
Human::Human(string name, string surname, int age) {
	this->name = name;
	this->surname = surname;
	this->age = age;
}

Human::~Human() {
	cout << "Human destructor " << endl;
}

string Human::getName() {

	return name;
}


void Human::setName(string name) {

	this->name = name;
}

string Human::getSurmame() {

	return surname;
}


void Human::setSurName(string surname) {

	this->surname = surname;
}

int Human::getAge() {
	return age;
}

void Human::setAge(int age) {
	if (age > 0 && age < 110) {
		this->age = age;
	}
}


string Human::convert() {
	string msg = " ";
	msg += " " + surname;
	msg += " ( age = " + to_string(age)+ " )";
	return msg;
}