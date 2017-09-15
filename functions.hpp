#ifndef MY_FUNCTIONS
#define MY_FUNCTIONS

#include <iostream>
#include <algorithm>
#include <vector>

void print(std::string);

std::string input(std::string output="");
std::string toLower(std::string);

std::vector<std::string> split(std::string str, char delim);

int randint(int bound_l=0,int bound_h=0);

#endif
