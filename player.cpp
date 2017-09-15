#include "player.hpp"
//#include "room.hpp"


/*Player::Player(Room r){
  room = r
  room::enter()
}*/

void Player::parseCmd(std::string cmd){
  print(split(cmd, ' ')[0]);
}
