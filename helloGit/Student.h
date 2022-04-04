#pragma once
#include<iostream>

class Student {
private:
	int age;
	std::string name;
public:
	Student(int a,std::string n):age(a),name(n){}
	void show();
};
