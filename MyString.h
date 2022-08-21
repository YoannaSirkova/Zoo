#pragma once
#include <iostream>
#include <cstring>

class MyString
{
	char* myString;
public:
	MyString();
	MyString(const char* input);
	MyString(const MyString& other);
	~MyString();
	MyString& operator=(const MyString& other);
	bool operator==(const char* other) const;

	friend std::ostream& operator<<(std::ostream& os, const MyString& str);
};