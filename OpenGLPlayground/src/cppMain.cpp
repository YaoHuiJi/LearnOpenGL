#include "helper.h"

#include <iostream>  // for std::cout and std::cin
#include <iomanip>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <plog/Log.h>
#include <cassert>
#include <cmath>

#include <typeinfo>

int main()
{
    helper::initPlog();
    
    auto y { 5 };
    
    LOGD << y;
    
    return EXIT_SUCCESS;
}
