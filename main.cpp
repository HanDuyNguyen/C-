#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
  string name;
  int health;
  int xp;
public:
  Player();
  Player(string name_val, int health_val, int xp_val);
  void set_name(string name_val)
  {
    name  = name_val;
  }
  string get_name()
  {
    return name;
  }
};

int main() {
  Player Han;
  cout << Han.get_name() << endl;
  Han.set_name("Han");
  cout << Han.get_name() << endl;
  return 0;
}
Player::Player()
  : name{"None"}, health{100}, xp{3} {}
Player::Player(string name_val, int health_val, int xp_val)
  : name{name_val}, health{health_val}, xp{xp_val} {}
