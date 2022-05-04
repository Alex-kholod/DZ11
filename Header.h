#ifndef RELEASE_H
#define RELEASE_H

#include <iostream>;
using namespace std;

class Display
{
	double diagonal = 0;
	int frequency = 0;
public:
	Display(double diagonal, int frequency);
	void SetDiagonal(double diagonal);
	double GetDiagonal();
	int GetFrequency();
	virtual void product() = 0;
	virtual ~Display() {}
};

class Keyboard
{
	bool sensor_Keyboard = 0;
public:
	Keyboard(bool sensor_Keyboard);
	void SetSensor(double diagonal);
	double GetSensor();
	virtual void product() = 0;
	virtual ~Keyboard() {}
};

class Laptop : public Display, public Keyboard
{
	int number_of_cores = 0;
	string brend = "";
public:
	Laptop(double,int,bool,int, string);
	void product() override;
	~Laptop() {}
};

class Phone : public Display, public Keyboard
{
	int number_of_cores = 0;
	string os = "";
public:
	Phone(double, int, bool, int, string);
	void product() override;
	~Phone() {}
};

class Computer : public Display, public Keyboard
{
	int number_of_cores = 0;
	bool gaming_computer = 0;
public:
	Computer(double, int, bool, int, bool);
	void product() override;
	~Computer() {}
};

#endif