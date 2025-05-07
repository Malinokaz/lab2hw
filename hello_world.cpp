#include <iostream>
#include <string>    

int main() {
    std::string user_name;            // username
    std::cout << "Enter your name: "; // asking to enter name
    std::cin >> user_name;            // input username
    std::cout << "Hello world from @" << user_name << std::endl; // print greetings
    return 0;                         // end of program
}
