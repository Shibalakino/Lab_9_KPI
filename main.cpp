#include "header.h" //підключення заголовку 

int main()
{
  char text[500];
  cout << "Input some text : ";
  gets_s(text); // Приймає текст і записує в відповідний масив символів
  int n = find_size(text); // Знаходження числа лексем для створення динамічного масиву 
  string* my_text = new string[n]; // Динамічний массив лексем 

  input(my_text, text); // Заповнення масиву лексемами 
  sort(my_text, n); // Сортування бульбашкою  
  output(my_text, n); // Виводить масиву

  delete[] my_text; //видалення динамічного масиву
  return 0;
}
