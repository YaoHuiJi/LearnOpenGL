#include "helper.h"

#include <iostream>  // for std::cout and std::cin
#include <iomanip>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <bitset>
#include <plog/Log.h>
#include <cassert>
#include <cmath>

#include <typeinfo>

int main()
{
    helper::initPlog();

    int i { 100 };
    
    i = i/2.5;
    
    LOGD << i ;
    
    return EXIT_SUCCESS;
}
