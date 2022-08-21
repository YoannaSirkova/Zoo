#define _CRT_SECURE_NO_WARNINGS
#include "MyString.h"

MyString::MyString()
{
	myString = new char[1];
	myString = nullptr;
}

MyString::MyString(const char* input)
{
	std::size_t size_other = strlen(input);
	myString = new char[size_other + 1];
	strcpy(myString, input);
}

MyString::MyString(const MyString& other)
{
	std::size_t size_other = strlen(other.myString);
	myString = new char[size_other + 1];
	strcpy(myString, other.myString);
}

MyString::~MyString()
{
	delete[] myString;
}

MyString& MyString::operator=(const MyString& other)
{
	if (this != &other)
	{
		this->~MyString();
		MyString(other);
	}
	return *this;
}

bool MyString::operator==(const char* other) const
{
	if (strlen(myString) != strlen(other))
		return false;
	std::size_t size = strlen(other);
	for (std::size_t i = 0; i < size; i++)
	{
		if (myString[i] != other[i])
			return false;
	}
	return true;
}


std::ostream& operator<<(std::ostream& os, const MyString& str)
{
	std::size_t size = strlen(str.myString);
	for (size_t i = 0; i < size; i++)
	{
		os << str.myString[i];
	}
	return os;
}
