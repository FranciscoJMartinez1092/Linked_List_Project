#include "Point.h"
#include "node.h"
#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;
using namespace main_savitch_2A;
using namespace main_savitch_6B;

int main()
{
	node<int>* ages = NULL;
	list_head_insert(ages, 18);
	node<string> name;
	name.set_data("Jorge");
	node<point> *seat;
	seat = new node<point>;
	(*seat).set_data(point(2, 4));
	cout << "Data to *ages is: " << ages->data() << endl;
	cout << "Data to name is: " << name.data() << endl;
	cout << "Data to *seat is: x = " << seat->data().get_x();
	cout << " and y = " << seat->data().get_y() << endl;
	
	return EXIT_SUCCESS;
}