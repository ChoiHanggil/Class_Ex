#include <iostream>
#include"ClasssA.h"
// struct�� ��� �������� �������� �����Ǵ� Ÿ��(type)
struct ObjectA
{
	int x;
	float y;
};
// CLass�� �ɹ�(����, �Լ�)���� �������� ������ Ÿ��(type)

class ObjectB
{
public://[����������](Access Modifier)
	int x;
	void MyFunction()
	{
		y = 1;
		std::cout << "Do SOMETHING!!!" << std::endl;
	}
private: 
	int y{};
};
//-----------------------------------------------
class Dog
{
public:
	int age;
	//void DoSomething(Dog* this)
	void DoSomething()//[Dog* this]
	{
		//this->age = 1;
		age = 1;
	}
	void Bark();
};
//Ŭ���� ��� �Լ��� ����� ���� �и�
void Dog::Bark()
{
	std::cout << "Bark" << std::endl;
}
//---------------------------------------------------
/*struct Point2D
{
	int mX;
	int mY;

	void Print()
	{
		std::cout << mX << "," << mY << std::endl;
	}
};*/

class point2D
{
public:
	int mX;
	int mY;

	void Print()
	{
		std::cout << mX << "," << mY << std::endl;
	}
};

int main()
{
	ObjectA a; // ObjectA Ÿ���� a��� ���� - ���� ����
	a.x = 1;
	a.y = 1.0f;

	ObjectB b; // ObjectB Ŭ������ b��� �ν��Ͻ� - �ν��Ͻ�ȭ(Instantiate)
	b.x = 1;
	b.MyFunction();

	ObjectB* p = &b;
	p->x = 10;
	p->MyFunction();
//------------------------------------------------
	Dog baekgoo;

	baekgoo.age = 1;
	//baekgoo.DoSomething(&baekgoo);
	baekgoo.DoSomething();//[&baekgoo]

//------------------------------------------------
	point2D pt1;
	pt1.mX = 1;
	pt1.mY = 2;
	pt1.Print();
}


