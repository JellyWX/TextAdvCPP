#include "functions.hpp"
#include "player.hpp"
//#include "item.hpp"
//#include "container.hpp"


Player player;
//Item item1("item 1");

int main(){
  bool playing = true;
  std::string next_cmd;

  print("Welcome to this Text-Based RPG-style game.\nTry using `help` for a menu of options.");

  while(playing){
    next_cmd = input(" > ");
    player.parseCmd(next_cmd);
  }
}
