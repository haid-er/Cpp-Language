#include "iostream"
#include "string"
using namespace std;

class Car
{
private:
	int yearModel;
	string make;
	int speed;
public:
	
	// Constructors
	

		//Perameterized
	Car(int y, string m, int s)
	{
		set_yearModel(y);
		set_make(m);
		set_speed(s);
	}

		// copy Constructor
	Car(const Car& obj)
	{
		this->yearModel = obj.yearModel;
		this->make = obj.make;
		this->speed = obj.speed;
	}

	// Destructors

	~Car()
	{
		cout << "Destructor Exexuted" << endl;
	}


	// Setters
	
	void set_yearModel(int yearModel)
	{
		this->yearModel = yearModel;
	}
	
	void set_make(string make)
	{
		this->make = make;
	}
	
	void set_speed(int speed)
	{
		this->speed = speed;
	}

	// Getters

	int get_yearModel()
	{
		return this->yearModel;
	}

	string get_make()
	{
		return this->make;
	}

	int get_speed()
	{
		return this->speed;
	}

	// Other Member Functions

	void setCar(int yearModel, string make, int speed)
	{
		set_yearModel(yearModel);
		set_make(make);
		set_speed(speed);
	}
	
	void getCar()
	{
		int m, s;
		string str;
		cout << "Enter model of Car : ";
		cin >> m;
		cout << "Enter speed of Car : ";
		cin >> s;
		cout << "Enter make of car(string) : ";
		getline(cin, str);
		set_yearModel(m);
		set_speed(s);
		set_make(str);
	}

	void putCar()
	{
		cout << "Car Year Model : " << get_yearModel() << "\tSpeed : " << get_speed() << "\tCar Make : " << get_make() << endl;
	}
	
	void accelerate()
	{
		set_speed(get_speed() + 5);
	}

	void brake()
	{
		set_speed(get_speed() - 5);
	}

};

int main()
{
	Car car1(2021, "Suzuki Alto", 40);
	Car car2(2015, "Toyota Camry", 45);
	Car car3(2011, "Honda Accord", 80), car4(2012, "Toyota Prius", 60);
	Car car5(2018, "Daihatsu Boon", 55);
	
	// car1.set_speed(52);

	car1.putCar();
	car2.putCar();
	car3.putCar();
	car4.putCar();
	car5.putCar();



	return 0;
}