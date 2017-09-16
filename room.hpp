#ifndef ROOM
#define ROOM

#include "functions.hpp"


class Room{
public:
  Room(std::string n);

  std::string name;

  void enter();
  void leave();

private:
  bool player = false;
};

#endif
