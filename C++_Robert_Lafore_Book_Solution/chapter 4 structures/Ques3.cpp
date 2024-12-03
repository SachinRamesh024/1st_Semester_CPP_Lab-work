#include <iostream>
using namespace std;
struct Distance
{
int feet;
float inches;
};
struct Volume
{
Distance length;
Distance width;
Distance height;
};
int main()
{
float l, w, h;
Volume room1 = { { 5, 3.5 }, { 6, 4.5 }, { 8, 5.5 } };
l = room1.length.feet + room1.length.inches/ 12.0;
w = room1.width.feet + room1.width.inches / 12.0;
h = room1.height.feet + room1.height.inches/ 12.0;
cout << "Volume = " << l*w*h << " cubic feet";
return 0;
}
