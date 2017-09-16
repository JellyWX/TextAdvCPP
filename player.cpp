#include "player.hpp"


Player::Player(Room r)
  : room(r)
{
  room.enter();
}

void Player::parseCmd(std::string cmd){
  std::vector<std::string> broken = split(cmd, ' ');

  std::string commandword = broken[0];
  if(commandword == "room"){
    print(room.name);

  }else
  if(commandword == "move"){
    room.leave();

    std::vector<std::string>::const_iterator first = broken.begin() + 1;
    std::vector<std::string>::const_iterator last = broken.end();

    std::vector<std::string> noCmd(first,last);

    std::string new_room = stitch(noCmd," ");
    print(new_room);
  }
}
