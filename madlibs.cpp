//Authors: Joseluis Zamora
#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "A Name" << std::endl;
    std::cin >> input;
    int time; 
    std::cout << "A time" << std::endl;
    std::cin >> time;
    double decimal;
    std::cout << "A decimal" << std::endl;
    std::cin >> decimal;
    std::cout << "One day " << input;
    std::cout << " decided not to go to school." << std::endl;
    std::cout << "Instead " << input; 
    std::cout << " decided to go to the mall." << std::endl;
    std::cout << "So he took the " << time;
    std::cout << " oclock train to the mall." << std::endl;
    std::cout << "Once " << input;
    std::cout << " arrived at the mall " << input;
    std::cout << " realized something horrible." << std::endl;
    std::cout << "There was only " << decimal; 
    std::cout << " in " << input;
    std::cout << " bank account, so " << input;
    std::cout << " went back home." << std::endl;
  return 0;
}
