#include "helper.h"

#include <iostream>  // for std::cout and std::cin
#include <cstdlib>
#include <cstdint>
#include <string>
#include <bitset>

#include <plog/Log.h>

int main()
{
    initPlog();
    
    LOGD << readString("Your name");

    return EXIT_SUCCESS;
}
