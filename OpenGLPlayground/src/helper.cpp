#include "helper.h"

#include <iostream>
#include <string>

#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <plog/Appenders/ConsoleAppender.h>

namespace helper
{
    const char author[] = "Yao Hui Ji";

    void initPlog()
    {
        static plog::ConsoleAppender<plog::TxtFormatter> consoleAppender;
        plog::init(plog::debug, "HelloCpp.log").addAppender(&consoleAppender);
    }

    void ignoreLine()
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    std::string readString(std::string label)
    {
        std::string s;
        
        std::cout << label << ": ";
        
        std::getline(std::cin >> std::ws , s);
        
        return s;
    }
}
