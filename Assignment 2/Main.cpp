#include "String.h"
int main()
{

	String s0 ("Initial String");
	String s1;
	String s2 (s0);
	String s3(s0, 8, 3);
	String s4("A character sequence");
	String s5("Another character sequence", 12);
	String s6a(10, 'x');
	String s6b(10, 42);
	
	cout << s0 << endl;


	
	system("pause");
	return 0;
}