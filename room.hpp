#include "functions.hpp"


class Room{
public:
  std::string name;
  
  void enter();
  void leave();

private:
  std::list<Container*> contents;
}
