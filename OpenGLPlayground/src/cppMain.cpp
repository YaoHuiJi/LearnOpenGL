#include "helper.h"

#include <iostream>  // for std::cout and std::cin
#include <cstdlib>
#include <cstdint>
#include <string>
#include <bitset>

#include <plog/Log.h>

using namespace helper;

int main()
{
    initPlog();
    
    LOGD << author;

    return EXIT_SUCCESS;
}
