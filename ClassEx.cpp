#include <iostream>
#include"ClasssA.h"
// struct는 멤버 변수들의 집합으로 구성되는 타입(type)
struct ObjectA
{
	int x;
	float y;
};
// CLass는 맴버(변수, 함수)들의 집합으로 구성된 타입(type)

class ObjectB
{
public://[접근제한자](Access Modifier)
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
//클래스 멤버 함수를 선언과 정의 분리
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
	ObjectA a; // ObjectA 타입의 a라는 변수 - 변수 선언
	a.x = 1;
	a.y = 1.0f;

	ObjectB b; // ObjectB 클래스의 b라는 인스턴스 - 인스턴스화(Instantiate)
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


