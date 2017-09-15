#include "container.hpp"

Container::Container(std::string n){
  name = n;
}

Container::read(){
  print(name + ": " + description)
}
