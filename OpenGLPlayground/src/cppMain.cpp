#include "helper.h"

#include <iostream>  // for std::cout and std::cin
#include <cstdlib>

#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <plog/Appenders/ConsoleAppender.h>

int main()
{
    static plog::ConsoleAppender<plog::TxtFormatter> consoleAppender;
    plog::init(plog::debug, "HelloCpp.log").addAppender(&consoleAppender);
    
    int x { readInt() };
    
    while(x < 0)
    {
        LOGE << x << " is smaller than 0\n";
        x = readInt();
    }
    
    LOGD <<  x << std::endl;
    
    return EXIT_SUCCESS;
}
