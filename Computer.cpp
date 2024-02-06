#include "Computer.h"
#include<iostream>

using namespace std;


//had to make default constructor for it to work (Throws an error otherwise.
Computer::Computer():
	model(99999), serialNum("Z9999"), memoryGB(64), processor("No-CPU"),
	numCores(1), clockSpeedHz(1.0)
{
	cout << "\n-Constructor for system: Model <" << this->model << ">, Serial# <" <<
		this->serialNum << ">, RAM <" << this->memoryGB << ">, Cores <" << this->numCores << ">, Speed <"
		<< this->clockSpeedHz << ">." << endl;
}

//Overloaded constructor
Computer::Computer(int computerModel,string serial, int mmryGB,
	string cmptrProcessor, int numCore, double clockSpdHz) :
	model(99999),serialNum("Z9999"),memoryGB(64),processor("No-CPU"),
	numCores(1),clockSpeedHz(1.0)

{
	model = computerModel;
	serialNum = serial;
	memoryGB = mmryGB;
	processor = cmptrProcessor;
	numCores = numCore;
	clockSpeedHz = clockSpdHz;

	cout << "\n-Constructor for system: Model <" << model << ">, Serial# <" <<
		serialNum << ">, RAM <" << memoryGB << ">, Cores <" << numCores << ">, Speed <"
		<< clockSpeedHz << ">." << endl;
}
//Get all with variables passed by reference.
void Computer::getAll(int& modl, string& serl, int& mem, string& process, int& core, double& clock) const
{
	modl = this->model;
	serl = this->serialNum;
	mem = this->memoryGB;
	process = this->processor;
	core = this->numCores;
	clock = this->clockSpeedHz;

	
}
void Computer::setAll(int modl, string serial, int mem, string processr, int core, double clock)
{

	model = modl;
	serialNum = serial;
	memoryGB = mem;
	processor = processr;
	numCores = core;
	clockSpeedHz = clock;
}
string Computer::printConfig()
{
	string infoStr;
	infoStr = "Model: " + to_string(model) + " Serial Number: <" + serialNum  + "> Memory GB: <" + to_string(memoryGB) + "> Processor: <"
		+ processor + "> Cores: <" + to_string(numCores) + "> Clock Speed Hz: <" + to_string(clockSpeedHz) + ">";
	return infoStr;
}
