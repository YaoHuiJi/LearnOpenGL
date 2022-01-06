#define __STDC_WANT_LIB_EXT1__ 1

#include "helper.h"
#include "random.h"
#include <plog/Log.h>
#include <cstdlib>
#include <cstring>
#include <typeinfo>
#include <algorithm>

void add1(int &num)
{
    num++;
}

void add2(int* num)
{
    *num += 2;
}

int main()
{
    helper::initPlog();
    
    int ar[] { 1,2,3,4};
    int (&arr)[4]{ar};
    
    std::cout << arr[2];

    return EXIT_SUCCESS;
}
