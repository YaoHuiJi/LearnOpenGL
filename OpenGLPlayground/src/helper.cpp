#include "helper.h"

#include <iostream>
#include <string>

#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <plog/Appenders/ConsoleAppender.h>

void initPlog()
{
    static plog::ConsoleAppender<plog::TxtFormatter> consoleAppender;
    plog::init(plog::debug, "HelloCpp.log").addAppender(&consoleAppender);
}

char readChar(std::string label = "")
{
    if(label == "")
    {
        label = "Enter a char";
    }
    
    char x{};
    
    std::cout << label << ": ";
    std::cin >> x;
    
    return x;
}

int readInt(std::string label = "")
{
    if(label == "")
    {
        label = "Enter an integer";
    }
    
    int x{0};
    
    std::cout << label << ": ";
    std::cin >> x;
    
    return x;
}

double readDouble(std::string label = "")
{
    if(label == "")
    {
        label = "Enter a double";
    }
    
    double x{};
    
    std::cout << label << ": ";
    std::cin >> x;
    
    return x;
}

std::string readString(std::string label)
{
    std::string s;
    
    std::cout << label << ": ";
    
    std::getline(std::cin >> std::ws , s);
    
    return s;
}
