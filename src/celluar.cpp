#include "celluar.h"
using namespace std;


celluar::celluar() {
  value = 1;
  life_time = 1;
  id = 0;
}

celluar::celluar(int new_value) {
  value = new_value;
}

celluar::celluar(const celluar& rh) {
  this->value = rh.value;
  this->life_time = rh.life_time;
  this->id = rh.id;
}

void celluar::life_time_up() {
  life_time+= 1;
}

void celluar::give_id(int new_id) {
  id = new_id;
}

int celluar::give_value() {
  return value;
}
