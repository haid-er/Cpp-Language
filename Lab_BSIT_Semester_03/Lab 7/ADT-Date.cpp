#include "iostream"
#include "string"

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:

	// mutators

	void set_day(int day)
	{
		if (day > 0 && day < 32)
			this->day = day;
		else
			this->day = 1;
	}

	void set_month(int month)
	{
		if (month > 0 && month < 13)
			this->month = month;
		else
			this->month = 1;
	}

	void set_year(int year)
	{
		if (year >= 1900)
			this->year = year;
		else
			this->year = 1900;
	}

	// accessors

	int get_day()
	{
		return this->day;
	}

	int get_month()
	{
		return this->month;
	}

	int get_year()
	{
		return this->year;
	}

	// Constructors

	Date(int day, int month, int year)
	{
		set_day(day);
		set_month(month);
		set_year(year);
	}

	Date(int month, int year)
	{
		set_day(1);
		set_month(month);
		set_year(year);
	}

	Date()
	{
		set_day(1);
		set_month(1);
		set_year(1900);
	}

	// Destructor

	~Date()
	{
		cout << "Destructor Called" << endl;
	}

	friend ostream& operator<<(ostream& print, Date& obj);
	friend istream& operator>>(istream& scan, Date& obj);

	// pre-increment operator

	Date operator++()
	{
		if (this->day == 31)
		{
			this->day++;
			if (this->month == 12)
			{
				this->month++;
				this->year++;
			}
			else
			{
				this->month++;
			}
		}
		else
		{
			this->day++;
		}
		this->set_day(this->day);
		this->set_month(this->month);
		this->set_year(this->year);
		return *this;
	}


	// post-increment operator

	Date operator++(int)
	{
		Date temp = *this;
		if (this->day == 31)
		{
			this->day++;
			if (this->month == 12)
			{
				this->month++;
				this->year++;
			}
			else
			{
				this->month++;
			}
		}
		else
		{
			this->day++;
		}
		this->set_day(this->day);
		this->set_month(this->month);
		this->set_year(this->year);
		return temp;
	}

	// pre-decrement operator

	Date operator--(int)
	{
		Date temp = *this;
		if (this->day == 31)
		{
			this->day--;
			if (this->month == 12)
			{
				this->month--;
				this->year--;
			}
			else
			{
				this->month--;
			}
		}
		else
		{
			this->day--;
		}
		this->set_day(this->day);
		this->set_month(this->month);
		this->set_year(this->year);
		return temp;
	}

	// post-decrement operator

	Date operator--()
	{
		if (this->day == 31)
		{
			this->day--;
			if (this->month == 12)
			{
				this->month--;
				this->year--;
			}
			else
			{
				this->month--;
			}
		}
		else
		{
			this->day--;
		}
		this->set_day(this->day);
		this->set_month(this->month);
		this->set_year(this->year);
		return *this;
	}

	// operator - binary

	int operator-(Date& obj)
	{
		int temp = ((this->year - obj.year) * 365) + ((this->month - obj.month) * 31) + (this->day - obj.day);
		if (temp > 0)
		{
			return temp;
		}
		else
		{
			return temp * -1;
		}
	}

	// operator + unary

	bool operator+() const
	{
		if ((this->day == 5 && this->month == 2) || (this->day == 23 && this->month == 3) || (this->day == 24 && this->month == 4) || (this->day == 1 && this->month == 5) || (this->day == 1 && this->month == 6) || (this->day == 28 && this->month == 7) || (this->day == 14 && this->month == 8) || (this->day == 25 && this->month == 12))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

ostream& operator<<(ostream& print, Date& obj)
{
	print << obj.day << " , " << obj.month << " , " << obj.year << " ." << endl;
	return print;
}

istream& operator>>(istream& scan, Date& obj)
{
	cout << "Enter Date in dd/mm/yyyy format : ";
	scan >> obj.day >> obj.month >> obj.year;
	obj.set_day(obj.day);
	obj.set_month(obj.month);
	obj.set_year(obj.year);
	return scan;
}

int main()
{
	Date d1, d2;

	cin >> d1 >> d2;

	cout << d1 << d2;

	int temp = d1 - d2;

	cout << temp << endl;

	d1++;
	--d2;

	cout << d1;

	cin >> d1;

	cout << +d1 << endl;

	



	return 0;
}
