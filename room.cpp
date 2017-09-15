#include "room.hpp"
#include "player.hpp"


Room::Room(std::string n){
  name = n;
}

Room::enter(){
  player = true;
}

Room::leave(){
  player = false;
}
