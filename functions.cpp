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

std::string stitch(std::vector<std::string> li, std::string join){
  std::string out = "";

  for(std::string str : li){
    out += str + join;
  }

  return out;
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

/* String splitting, done manually, like how C++ wants you to do it .-. */
std::vector<std::string> split(std::string str, char delim){

  std::vector<std::string> out; // vector containing the list of values
  std::string buffer = ""; // buffer for appending to the vector appropriately

  for(char c : str){

    if(c == delim){
      out.push_back(buffer);
      buffer = "";
    }else{
      buffer += c;
    }
  }
  out.push_back(buffer);

  return out;
}
