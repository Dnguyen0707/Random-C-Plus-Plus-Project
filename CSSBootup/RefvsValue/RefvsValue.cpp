//use & to pass object by reference

#include <iostream>
using namespace std;

typedef struct
{
	int width;
	int lenght;
} Rectangle;

int Area(Rectangle &rect);

int main()
{
	int result;
	Rectangle myYard = { 7, 5 };
	result = Area(myYard);
	cout << "Area of rect " << myYard.width << " x " << myYard.lenght << " = " << result;
}

//not changing if use const
int Area(Rectangle &rect)
{
	int result;
	int area = rect.lenght * rect.lenght;
	rect.width = 99; //bypass value
	return area;
}