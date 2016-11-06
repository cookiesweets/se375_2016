#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
public:
	Person(string name_) : name(name_) {}
	void printName() { cout << "Name: " << name << endl; }
	void printHobby() { cout << "Hobby: watching K-drama\n"; }
	virtual void printWork() = 0;
};

class Student : public Person {
public:
	Student(string name) : Person{ name } {}
	void printWork() override { cout << "Work: study\n"; };
};

class Professor : public Person {
public:
	Professor(string name) : Person{ name } {}
	void printWork() override { cout << "Work: teach\n"; };
};
