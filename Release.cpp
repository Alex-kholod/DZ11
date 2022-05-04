#include "Header.h";

Display::Display(double diagonal, int frequency)
{
	this->diagonal = diagonal;
	this->frequency = frequency;
}

void Display::SetDiagonal(double diagonal)
{
	this->diagonal = diagonal;
}

double Display::GetDiagonal()
{
	return diagonal;
}

int Display::GetFrequency()
{
	return frequency;
}

Keyboard::Keyboard(bool sensor_Keyboard)
{
	this->sensor_Keyboard = sensor_Keyboard;
}

void Keyboard::SetSensor(double diagonal)
{
	this->sensor_Keyboard = sensor_Keyboard;
}

double Keyboard::GetSensor()
{
	return sensor_Keyboard;
}

Laptop::Laptop(double diagonal, int frequency, bool sensor, int number_cores, string brend) : Display(diagonal, frequency) , Keyboard(sensor)
{
	this->number_of_cores = number_cores;
	this->brend = brend;
}

void Laptop::product()
{
	cout << "Brand: " << this->brend << endl;
	cout << "Count of cores: " << this->number_of_cores << endl;
	cout << "Diagonal: " << this->GetDiagonal() << endl;
	cout << "Sensor keyboard: " << this->GetSensor() << endl;
	cout << "Frequency: " << this->GetFrequency() << endl;
}

Phone::Phone(double diagonal, int frequency, bool sensor, int number_cores, string os) : Display(diagonal, frequency), Keyboard(sensor)
{
	this->number_of_cores = number_cores;
	this->os = os;
}
void Phone::product()
{
	cout << "Operation System: " << this->os << endl;
	cout << "Count of cores: " << this->number_of_cores << endl;
	cout << "Diagonal: " << this->GetDiagonal() << endl;
	cout << "Sensor keyboard: " << this->GetSensor() << endl;
	cout << "Frequency: " << this->GetFrequency() << endl;
}

Computer::Computer(double diagonal, int frequency, bool sensor, int number_cores, bool gaming_computer) : Display(diagonal, frequency), Keyboard(sensor)
{
	this->number_of_cores = number_cores;
	this->gaming_computer = gaming_computer;
}

void Computer::product()
{
	cout << "Gaming computer: " << this->gaming_computer << endl;
	cout << "Count of cores: " << this->number_of_cores << endl;
	cout << "Diagonal: " << this->GetDiagonal() << endl;
	cout << "Sensor keyboard: " << this->GetSensor() << endl;
	cout << "Frequency: " << this->GetFrequency() << endl;
}
