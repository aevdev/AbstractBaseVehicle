#include<iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move() = 0;//����� ����������� �����.
	//������ ���� ����� � ������ ����� �����������.
};

class GroundVehicle : public Vehicle {};
class MarineVehicle : public Vehicle {};
class AirVehicle : public Vehicle {};

class Car :public GroundVehicle
{
public:
	void move()
	{
		cout << "������ ���� �� 4-� �������" << endl;
	}
};

class Bike :public GroundVehicle
{
public:
	void move()
	{
		cout << "�������� ���� �� 2-� �������" << endl;
	}
};

class Boat :public MarineVehicle
{
public:
	void swim()
	{
		cout << "����� ������ �� ����" << endl;
	}
};

class Yacht :public MarineVehicle
{
public:
	void swim()
	{
		cout << "���� ������ �� ����" << endl;
	}
};

class Plane :public AirVehicle
{
public:
	void fly()
	{
		cout << "������� ����� �� �������" << endl;
	}
};

class Helicopter :public AirVehicle
{
public:
	void fly()
	{
		cout << "�������� ����� �� �������" << endl;
	}
};


void main()
{
	setlocale(LC_ALL, "");
	//Vehicle v;		//Abstract
	//GroundVehicle gv;	//Abstract

	Car bmw;	//������� ����������� �� ���������.
	bmw.move();
	Bike harley_devidson;
}