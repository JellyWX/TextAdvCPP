#include "functions.hpp"

/* Python style output method */
void print(std::string output){
  std::cout << output << std::endl;
}

/* Python style input method */
std::string input(std::string output){
  std::string in = "";

  if(output.length() != 0){
    std::cout << output;
  }
  std::getline(std::cin,in);

  return in;
}

/* Python style randint method */
int randint(int bound_l, int bound_h){
  int num = 0;
  if(bound_l > bound_h){
    num = (rand() % bound_l) + bound_h;

  }else{
    num = (rand() % bound_h) + bound_l;

  }
  return num;

}

/* String lowering method */
std::string toLower(std::string str){
  std::transform(str.begin(),str.end(),str.begin(),::tolower);

  return str;
}
