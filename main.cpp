#include<iostream>
#include <vector>
#include<fstream>
#include "Computer.h"
using namespace std;

int main()
{
#if 0
	int numCores, memGB, model;
	string serial, processor;
	double clockSpped;
	Computer tempComputer;
	
	Computer base;
	cout << base.printConfig() << endl;

	Computer mySystem(73000, "A0010", 16, "intel-i5", 4, 2.7);
	cout << mySystem.printConfig() << endl;

	vector<Computer> inventory;
	cout << "Enter system info for the three computers(Model, serial, memory in GB, processor, cores, clockspeed)x3: ";
	//For loop for inputting information.
	for (int i = 0; i < 3; i++)
	{
		cin >> model >> serial >> memGB >> processor >> numCores >> clockSpped;
		tempComputer.setAll(model, serial, memGB, processor, numCores, clockSpped);
		inventory.push_back(tempComputer);
	}

	//Ofstream manipulation.
	ofstream ofs;
	ofs.open("Lab2Inventory.dat");
	if (ofs.is_open())
	{
		for (int i = 0; i < inventory.size(); i++)
		{
			ofs << inventory.at(i).printConfig() << endl;
		}
	}
	ofs.close();
#endif
	Computer* pBase, * pMySystem;
	pBase = new Computer();
	pMySystem = new Computer(73000, "A0010", 16, "intel-i5", 4, 2.7);
	cout << pBase->printConfig() << endl;
	cout << pMySystem->printConfig() << endl;
#if 0
	delete pBase;
	delete pMySystem;
#endif
	
	cout << "\nProgram complete. \n\n";

	system("pause");
	return 0;
}
