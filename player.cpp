#include "player.hpp"


Player::Player(Room r)
  : room(r)
{
  room.enter();
}

void Player::parseCmd(std::string cmd){
  print(split(cmd, ' ')[0]);

  std::string commandword = split(cmd, ' ')[0];
  if(commandword == "room"){
    print(room.name);
    print(room.player ? "true" : "false");
  }
}
