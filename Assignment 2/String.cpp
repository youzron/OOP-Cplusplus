#include "String.h"



String::String()
{
	string = {" "};
}
String::String(const String& str)
{
	cout << "COPY CONSTRUCTOR!!!" << endl;

	int size = 0;
	while (true)
	{
		if (str.string == "\0")
		{
			break;
		}
		else
		{
			size++;
		}
	}
	string = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		string[i] = str.string[i];
	}
	string[size] = '\0';
}
String::String(const String& str, int pos, int len)
{
	int size = 0;
	for (int i = pos; i < pos + len; i++)
	{
		size++;
	}
	string = new char[size + 1];
	for (int i = pos; i < pos+len; i++)
	{
		string[i] = str.string[i];
	}
	string[size] = '/0';
}
String::String(const char* s)
{
	
	int size = 0;
	while (true)
	{
		if (s == "\0")
		{
			break;
		}
		else
		{
			size++;
		}
	}
	string = new char[size + 1];
	for (int i = 0; i < size; i++)
	{
		string[i] = s[i];
	}
	string[size] = '\0';
}
String::String(const char* s, int n)
{
	string = new char[n + 1];
	for (int i = 0; i < n; i++)
	{
		string[i] = s[i];
	}
	string[n] = '\0';
}
String::String(int n, char c)
{
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl;
}
int String::length()
{
	int size = 0;
	while (true)
	{
		if (string == "\0")
		{
			break;
		}
		else
		{
			size++;
		}
	}
	size = size + 1;
	return size;
}
char String::at(int i)
{
	return string[i];
}

/*ofstream& operator<<(ofstream& os, const String& str)
{
	int size = 0;
	while (true)
	{
		if (str.string[size] == "/0")
		{
			break;
		}
		else
		{
			os << str.string[size];
		}
		size++;
	}
}*/





