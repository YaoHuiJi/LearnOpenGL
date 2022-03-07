#define __STDC_WANT_LIB_EXT1__ 1

#include "helper.h"
#include "random.h"
#include <plog/Log.h>
#include <cstdlib>
#include <cstring>
#include <typeinfo>
#include <algorithm>

void greet(std::string* name = nullptr)
{
    LOGD << "HELLO";
    LOGD << (name? *name : "Guest");
}


int main()
{
    helper::initPlog();
    
    std::string name = "Yao Hui Ji";
    
    greet(&name);
    
    greet();
    
    return EXIT_SUCCESS;
}
