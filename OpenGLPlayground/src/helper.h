//
//  helper.h
//  CppPlayground
//
//  Created by jackyao on 2021/11/20.
//
#ifndef helper_h
#define helper_h

#include <iostream>
#include <string>
#include <random>
#include <ctime>

namespace helper
{
    extern const char author[];

    /**
     int plog
     */
    void initPlog();

    void ignoreLine();

    /**
      read a string from console
     */
    std::string readString(std::string label = "Enter a string");
    
    /**
     read a integal from console
     */
    template <typename T>
    T readNumber(std::string label= "Enter an number")
    {
        T x{};
        
        std::cout << label << ": ";
        std::cin >> x;
        ignoreLine();
        
        return x;
    }
}

#endif /* helper_h */
