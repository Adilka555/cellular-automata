#ifndef CELLUARY
#define CELLUARY
#include <iostream>


class celluar {
  public:
    int value;
    int life_time = 0;
    int id;

    celluar();
    celluar(int);
    void life_time_up();
    void change_value(int);
    void give_id(int);
    int give_value();
    celluar(const celluar&);
};

#endif
