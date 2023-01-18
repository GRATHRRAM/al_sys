#include <iostream>
#include "deb_cfg.h"
using namespace std;

void std_sys::show(const char text[])
{
	int siz = sizeof(text);
	cout << text[siz];
}