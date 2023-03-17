#include <iostream>
#include "Appliances.h"
#include "Tech.h"
#include <string>
using namespace std;


	Appliances :: Appliances()
	{}
	Appliances :: Appliances(int power, int weight, string name, string manufacturer) :  _power(power), _weight(weight), _name(name), _manufacturer(manufacturer)
	{}
	void Appliances :: Show()
	{}




	Fridge :: Fridge(int power, int weight, string name, string manufacturer, string model) : Appliances(power, weight, name, manufacturer), _model(model)
	{}
	void Fridge :: Show() 
	{
		cout << "����������: " << _model << endl;
		cout << "�����: " << _name << endl;
		cout << "�������������: " << _manufacturer << endl;
		cout << "��������: " << _power << endl;
		cout << "���: " << _weight << endl;
	}


    Washer :: Washer(int power, int weight, string name, string manufacturer, string model) : Appliances(power, weight, name, manufacturer), _model(model)
	{}
	void Washer :: Show()
	{
		cout << "����������: " << _model << endl;
		cout << "�����: " << _name << endl;
		cout << "�������������: " << _manufacturer << endl;
		cout << "��������: " << _power << endl;
		cout << "���: " << _weight << endl;
	}
