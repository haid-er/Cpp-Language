#include "iostream"
#include "string"
using namespace std;

class Student
{
	int regNo;
	string firstName;
	string lastName;
	string program;
	float cgpa;
public:
	
	// Mutators or Setters
	
	void set_regNo(int regNo)
	{
		if(regNo >= 501 && regNo <= 565)
		{
			this->regNo = regNo;
		}
		else
		{
			this->regNo = 0;
		}
	}
	
	void set_firstName(string firstName)
	{
		this->firstName = firstName;
	}
	
	void set_lastName(string lastName)
	{
		this->lastName = lastName;
	}
	
	void set_program(string program)
	{
		this->program = program;
	}
	
	void set_cgpa(float cgpa)
	{
		if (cgpa >= 0.0 && cgpa <= 4.0)
		{
			this->cgpa = cgpa;
		}
		else
		{
			this->cgpa = -1;
		}
	}

	// Accessors or Getters

	int get_regNo()
	{
		return this->regNo;
	}
	
	string get_firstName()
	{
		return this->firstName;
	}
	
	string get_lastName()
	{
		return this->lastName;
	}
	
	string get_program()
	{
		return this->program;
	}

	float get_cgpa()
	{
		return this->cgpa;
	}

	// Constructors

		// four parameter parameterized constructor
	Student(int regNo, string firstName, string lastName, string program)
	{
		set_cgpa(-1);
		set_firstName(firstName);
		set_lastName(lastName);
		set_program(program);
		set_regNo(regNo);
	}

		// three parameter parameterized constructor
	Student(int regNo, string firstName, string program)
	{
		set_cgpa(-1);
		set_firstName(firstName);
		set_lastName("");
		set_program(program);
		set_regNo(regNo);
	}
		
		// all parameter parameterized constructor
	Student(int regNo, string firstName, string lastName, string program, float cgpa)
	{
		set_cgpa(cgpa);
		set_firstName(firstName);
		set_lastName(lastName);
		set_program(program);
		set_regNo(regNo);
	}

		// copy constructor
	Student(Student& obj)
	{
		set_cgpa(obj.cgpa);
		set_firstName(obj.firstName);
		set_lastName(obj.lastName);
		set_program(obj.program);
		set_regNo(obj.regNo);
	}

		// Default Constructor
		
	Student()
	{
		set_cgpa(-1);
		set_firstName("");
		set_lastName("");
		set_program("");
		set_regNo(-99);

	}
		// Destructor
	~Student()
	{
		cout << "Destructor Executed." << endl;
	}

	// Member Functions

	void setStudent(int regNo, string firstName, string lastName, string program, float cgpa)
	{
		set_cgpa(cgpa);
		set_firstName(firstName);
		set_lastName(lastName);
		set_program(program);
		set_regNo(regNo);
	}

	void getStudent()
	{
		Student temp;
		cout << "Enter Registeration Number : ";
		cin >> temp.regNo;
		cout << "Enter First Name : ";
		cin.ignore();
		getline(cin, temp.firstName);
		cout << "Enter Last Name : ";
		cin.ignore(); 
		getline(cin,temp.lastName);
		cout << "Enter program name : ";
		cin.ignore();
		getline(cin, temp.program);
		cout << "Enter cgpa : ";
		cin >> temp.cgpa;
		set_cgpa(temp.cgpa);
		set_firstName(temp.firstName);
		set_lastName(temp.lastName);
		set_program(temp.program);
		set_regNo(temp.regNo);
	}

	void print()
	{
		cout << get_regNo() << "\t" << get_firstName() << ' ' << get_lastName() << "\t" << get_program() << "\t" << get_cgpa() << "\t" << getPercentage()  << "\t     " << promotedPrinter(isPromoted()) << endl;
	}

	bool isFirstSemester()
	{
		if (get_cgpa() <= 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	string promotedPrinter(bool i)
	{
		if (i == 1)
		{
			return "Promoted";
		}
		else
		{
			return "Not Promoted";
		}
	}

	bool isPromoted()
	{
		if (get_cgpa() >= 2.0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

	float getPercentage()
	{
		if (get_cgpa() > 0.0)
		{
			return (get_cgpa() / 4.0) * 100;
		}
		else
		{
			return -1;
		}
	}
};

int main()
{
	int size = 3;
	Student* arr = new Student[size];
	// arr[0].setStudent(501, "Malik", "Haider", "Information Technology", 1.37);
	arr[0].getStudent();
	cout << "RegNo\tName   \t\t     Program\t\tCGPA\tPercentage\tStatus" << endl;
	arr[0].print();
	/*arr[1].setStudent(502, "Asad", "Kamal", "Information Technology", 3.56);
	arr[2].setStudent(503, "Asad", "Ferozi", "Computer Science", 3.95);
	Student obj1;
	obj1.getStudent();
	Student obj2(34, "Ali", "Asghar", "Software Engineering", 1.6);

	for (int i = 0; i < size; i++)
	{
		arr[i].print();
	}
	obj1.print();
	obj2.print();*/


	delete[]arr;
	return 0;
}