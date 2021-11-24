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

/**
  read an integer from console
 */
int readInt(std::string label);

/**
  read a double value from console
 */
double readDouble(std::string label);

/**
  read a char from console
 */
char readChar(std::string label);

/**
  read a string from console
 */
std::string readString(std::string label);

/**
 int plog
 */
void initPlog();

#endif /* helper_h */
