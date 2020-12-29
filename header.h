#ifndef header //директива препроцесору 
#define header

#include <iostream>
#include <string>

using namespace std;

void input(string* my_text, char text[]); //заповнення масиву 
void sort(string* my_text, int n); //алгоритм сортування бульбашкою масиву 
void output(string* my_text, int n); //функція виводу масиву
int find_size(char text[]); // знаходить число лексем

#endif //закінчуємо
