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
	shop[0] = new Fridge(50, 30, "Indesite", "China", "Холодильник");
	shop[1] = new Washer(40, 20, "Samsung", "SKorea", "Стиральная машина");
	shop[2] = new Phone(5, 1050, "Huawei", "China", "Смартфон");
	shop[3] = new Player(4, 980, "Sony", "Japan", "Аудиоплеер");
	shop[4] = new RoboCleaner(50, 3080, "Xiaomi", "China", 3, "Робопылесос");
	
	bool open = true;
	while (open)
	{
		cout << "Выберите устройство: 1-Холодильник, 2-Стиральная машина, 3-Смартфон, 4-Аудиоплеер, 5-Робот пылесос, 0-Выход" << endl;
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
			cout << "Неправильное значение, введите 1-5 для выбора устройства, либо 0 для выхода" << endl;
			break;
		}

	}
	delete shop[0];
	delete shop[1];
	delete shop[2];
	delete shop[3];
	delete shop[4];
}