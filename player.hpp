#ifndef PLAYER
#define PLAYER

#include "functions.hpp"
#include "room.hpp"


class Player{
public:
  Player(Room r);

  void parseCmd(std::string cmd);

private:
  Room room;
};

#endif
