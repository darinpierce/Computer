
#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include<iostream>
using namespace std;
class Computer
{
private:
	int model, memoryGB, numCores;
	string serialNum, processor;
	double clockSpeedHz;
public:
	Computer();
	Computer(int, string, int, string, int, double);
	inline const int getModel() 
	{
		return model;
	}
	inline const int getMemoryGB()
	{
		return memoryGB;
	}
	inline const int getNumCores()
	{
		return numCores;
	}
	inline const string getSerialNum()
	{
		return serialNum;
	}
	inline const string getProcessor()
	{
		return processor;
	}
	inline const double getClockSpeedHz()
	{
		return clockSpeedHz;
	}
	void getAll(int&, string&, int&, string&, int&, double&) const;
	void setAll(int, string, int, string, int, double);
	string printConfig();
	//Destructor. Called when delete is called or program goes out of scope
	inline ~Computer()
	{
		cout << "\n - Destructor for system #: <" << serialNum << ">\n";
	}


};

#endif