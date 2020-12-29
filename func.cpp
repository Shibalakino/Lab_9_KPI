#include "header.h"

int find_size(char text[]) // знаходить число лексем
{
	char copy[500];
	for (int i = 0; i < 500; i++)  //копіюємо массив;
	{
		copy[i] = text[i];
	}
	char* counter = strtok(copy, " "); //розділення лексем
	int i = 0;
	while (counter != NULL)               //поки лексеми не закінчаться 
	{
		counter = strtok(NULL, " "); 
		i++;
	}
	return i;
}
void input(string* my_text, char text[]) //заповнення масиву 
{
	char* pch = strtok(text, " "); //розділення лексем
	int i = 0;
	while (pch != NULL)               //поки лексеми не закінчаться 
	{
		my_text[i] = pch;
		pch = strtok(NULL, " "); //поки є лексеми пушимо їх в масив my_text
		i++;
	}
}

void sort(string* my_text, int n)  //алгоритм сортування бульбашкою масиву 
{
	string temp; 
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (my_text[j].size() > my_text[j + 1].size())
			{
				temp = my_text[j];
				my_text[j] = my_text[j + 1];
				my_text[j + 1] = temp;
			}
		}
	}
}

void output(string* my_text, int n) //функція виводу масиву
{
	for (int i = 0; i < n; i++)
	{
		cout << my_text[i] << endl;
	}
}
