#include <fstream>
#include <iostream>

typedef StringMap std::map<std::string,std::string>;
class Floor {
public:
  Floor(int id, StringMap &microchips, StringMap &generators) :
    id_(id), generators_(generators), microchips_(microchips) {

  }

  const StringMap& generators(){ return generators_;}
  const StringMap& microchips(){ return microchips_;}

  bool operator==(const Floor &other) {
    return false;
  }
private:
  int id_;
  StringMap generators_;
  StringMap microchips_;
}

class Building {

}

int main(int argc, char **argv) {
  std::cout << "were gonna do this shnizz\n";
}
