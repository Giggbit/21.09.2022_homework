#include <iostream>
#include "Array.h"
using namespace std;

int main() {
	Array<int> str(3);
	str.Rand();
	//str.Print(); 

	Array<int> s(str);
	//s.Print();
	s.Add(5);
	
	Array<int> str2;
	str2 = s;
	str2.Print();

}

