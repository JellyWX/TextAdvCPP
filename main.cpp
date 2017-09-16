#include "functions.hpp"
#include "player.hpp"
#include "room.hpp"


Room room1("First Room");
Room room2("Second Room");

Player player(room1);
//Item item1("item 1");

int main(){
  bool playing = true;
  std::string next_cmd;

  print("Welcome to this Text-Based RPG-style game.\nTry using `help` for a menu of options.");

  std::vector<int> numvec;

  numvec.push_back(1);
  numvec.push_back(2);
  numvec.push_back(3);
  numvec.push_back(4);
  numvec.push_back(5);

  while(playing){
    next_cmd = input(" > ");
    player.parseCmd(next_cmd);
    if(contains(1,numvec)){
      print("ok");
    }
  }
}
