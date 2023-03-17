#include <iostream>
#include "Devices.h"
#include "Appliances.h"
#include "Tech.h"
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ITech* shop[5];
	shop[0] = new Fridge(50, 30, "Indesite", "China", "�����������");
	shop[1] = new Washer(40, 20, "Samsung", "SKorea", "���������� ������");
	shop[2] = new Phone(5, 1050, "Huawei", "China", "��������");
	shop[3] = new Player(4, 980, "Sony", "Japan", "����������");
	shop[4] = new RoboCleaner(50, 3080, "Xiaomi", "China", 3, "�����������");
	
	bool open = true;
	while (open)
	{
		cout << "�������� ����������: 1-�����������, 2-���������� ������, 3-��������, 4-����������, 5-����� �������, 0-�����" << endl;
		int choise;
		cin >> choise;
		switch(choise)
		{
		case 1:
			shop[0]->Show();
			break;
		case 2:
			shop[1]->Show();
			break;
		case 3:
			shop[2]->Show();
			break;
		case 4:
			shop[3]->Show();
			break;
		case 5:
			shop[4]->Show();
			break;
		case 0:
			open = false;
			break;
		default:
			cout << "������������ ��������, ������� 1-5 ��� ������ ����������, ���� 0 ��� ������" << endl;
			break;
		}

	}
	delete shop[0];
	delete shop[1];
	delete shop[2];
	delete shop[3];
	delete shop[4];
}