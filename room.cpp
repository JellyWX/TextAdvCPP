#include "room.hpp"

Room::Room(std::string n){
  name = n;
}

void Room::enter(){
  player = true;
}

void Room::leave(){
  player = false;
}
