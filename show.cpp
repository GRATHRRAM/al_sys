#include <iostream>
#include "deb_cfg.h"
using namespace std;

void std_sys::show(const char text[])
{
	cout << text;
}

void std_sys::cc()
{
	system("cls");
}
	
