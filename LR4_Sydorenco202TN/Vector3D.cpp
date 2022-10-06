#include"Header.h"
#include <iostream>

int main()
{
	float x, y, z;
	
	Vector3D one;
	 one = one.Init(1,3);
	 one = one.Read(1,3);
	 one.Display();
	 one = one.Init(1, 3,6);
	 one = one.Read(1, 3,6);
	 one.Display();
	 

	 Vector3D two;
	 two = two.Init(5, 2);
	 two = two.Read(3,6);
	 two.Display();
	 two = two.Init(5, 2,6);
	 two = two.Read(3, 6,6);
	 two.Display();
	

	 /*Vector3D c = one.add(two);//c=one+two;
	 c.Display();
	 /*Vector3D d = one.subtraction(two);
	 d.Display();
	 Vector3D t = one.scalar(two);
	 two = two.multialar();
	 two.Display();
	 two = two.comparisonvector();*/


}