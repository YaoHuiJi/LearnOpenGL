#include "helper.h"

#include <iostream>  // for std::cout and std::cin
#include <cstdlib>
#include <cstdint>
#include <string>
#include <bitset>
#include <plog/Log.h>
#include <cassert>
#include <cmath>

int main()
{
    helper::initPlog();
    
    int a{};
    
    while(true)
    {
        std::cout << "Enter an integer: ";
        std::cin >> a;
        
        assert( std::cin.fail() == false && "What the fuck");
        
        std::cout << "You entered: " << a << std::endl;
      
    }
    
    return EXIT_SUCCESS;
}
