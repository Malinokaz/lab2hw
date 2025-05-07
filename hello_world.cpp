#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your name: ";
    std::string user_name;
    std::cin >> user_name;

    std::cout << "Hello world from @" << user_name << std::endl;

    return 0;
}
