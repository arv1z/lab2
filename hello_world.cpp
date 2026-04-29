#include <iostream>
#include <string>


int
main()
{
  std::string name; // переменная имени
  std::cout << "Введите имя: ";
  std::cin >> name; // ввод имени
  std::cout << "Hello world from patch2 branch,  " << name << "!" << std::endl;
  return 0;
}