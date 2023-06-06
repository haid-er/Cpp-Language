#include "iostream"
#include "string"

using namespace std;

class Item
{
private:
	int id;
	string name;
	int quantity;
	float cost;
public:
	// setter

	void set_id(int id)
	{
		if (id > 0)
			this->id = id;
		else
			this->id = 0;
	}
	
	void set_quantity(int quantity)
	{
		if (quantity > 0)
			this->quantity = quantity;
		else
			this->quantity = 0;
	}

	void set_cost(float cost)
	{
		if (cost > 0)
			this->cost = cost;
		else
			this->cost = 0;
	}

	void set_name(string name)
	{
		this->name = name;
	}

	// getters

	int get_id()
	{
		return this->id;
	}

	int get_quantity()
	{
		return quantity;
	}

	int get_cost()
	{
		return this->cost;
	}
	
	string get_name()
	{
		return this->name;
	}

	// Constructor

	Item(string name, int quantity, float cost, int id)
	{
		set_id(id);
		set_quantity(quantity);
		set_name(name);
		set_cost(cost);
	}

	Item(string name, int quantity, int id)
	{
		set_id(id);
		set_quantity(quantity);
		set_name(name);
		set_cost(0);
	}

	Item(string name, float cost, int id)
	{
		set_id(id);
		set_quantity(0);
		set_name(name);
		set_cost(cost);
	}

	Item(const Item& obj)
	{
		set_id(obj.id);
		set_quantity(obj.quantity);
		set_name(obj.name);
		set_cost(obj.cost);
	}

	// Destructor

	~Item()
	{
		cout << "Destructor Executed ..." << endl;
	}
	
	// Non-static Member functions

	void setItem(string name, int quantity, float cost, int id)
	{
		set_id(id);
		set_quantity(quantity);
		set_name(name);
		set_cost(cost);
	}

	void get_Item()
	{
		int id;
		string name;
		int quantity;
		float cost;
		cout << "Enter name of Item : ";
		getline(cin, name);
		cout << "Enter id of Item : ";
		cin >> id;
		cout << "Enter quantity of Item : ";
		cin >> quantity;
		cout << "Enter cost per unit : ";
		cin >> cost;
		set_id(id);
		set_quantity(quantity);
		set_name(name);
		set_cost(cost);
	}

	void putItem()const
	{
		cout << "Name : " << this->name << "\tId : " << this->id << "\tQuantity : " << this->quantity << "\tCost : " << this->cost << endl;
	}

	float getTotalCost()const
	{
		if (this->quantity)
			return 0;
		else
			return this->quantity * this->cost;
	}

	bool isEqual(const Item& obj)
	{
		return (this->id == obj.id && this->cost == obj.cost && this->quantity == obj.quantity && this->name == obj.name);
	}

	void updateName(Item* arr,int size)const
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i].id == this->id)
			{
				arr[i].name = this->name;
			}
		}
	}

	Item getMinimumCostItem(Item* arr, int size)const
	{
		int temp = arr[0].cost;
		int index = 0;
		for (int i = 0; i < size; i++)
		{
			if (arr[i].cost < temp)
			{
				temp = arr[i].cost;
				index = i;
			}
		}
		return arr[index];
	}

	float getAveragePrice(Item* arr, int size)
	{
		int sum = 0;
		float avg = 0;
		for (int i = 0; i < size; i++)
		{
			sum += arr[i].cost;
		}
		avg = (float)sum / (size + 1);
		set_cost(avg);
		return avg;
	}
	
};

int main()
{
	Item obj1("FaizaBeautyCream", 1, 1.3, 2);
	Item obj("Milk", 1, 2);

	return 0;
}