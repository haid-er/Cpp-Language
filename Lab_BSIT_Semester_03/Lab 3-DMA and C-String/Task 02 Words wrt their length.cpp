#include "iostream"
using namespace std;
#define SIZE 200
void letterPerWord(const char *str);
int main()
{
	// Variable Declarations
	char str[SIZE];
	cout << "Enter data : ";
	for (int i = 0; i < SIZE; i++)
	{
		str[i] = getchar();
		if (str[i] == 10)
		{
			str[i] = '\0';
			break;
		}
	}
	letterPerWord(str);

	return 0;
}

void letterPerWord(const char *str)
{
	int count = 0;
	int wordSize = 0;
	while (str[count - 1] != NULL)
	{
		cout << str[count];
		count++;
		wordSize++;

		if (str[count] == ' ' || str[count] == NULL)
		{
			cout << "\t" << wordSize << "\n";
			count++;
			wordSize = 0;
			continue;
		}
	}
}