#include <iostream>
#include <string>

int
main()
{
  std::string user_name;             // имя пользователя

  std::cout << "Enter your name: ";  // вывод запроса
  std::cin >> user_name;             // ввод имени

  std::cout << "Hello world from @" << user_name
            << std::endl;            // вывод приветствия

  return 0;                          // завершение программы
}
