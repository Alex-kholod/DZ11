#include "Header.h";

int main()
{
	setlocale(LC_ALL, "RUS");
	Laptop a(5,5,0,6,"ASUS");
	Phone b(5, 5, 1, 6, "IOS");
	Computer z(5, 5, 1, 6, 1);

	a.product();
	b.product();
	z.product();

}