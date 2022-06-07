#include <iostream>
#include <ctime>
#include "vector.h"
#include "celluar.h"

using namespace std;

void int_konstr(vector<vector<int>> &xy, int h, int w) {
  for (int i = 0; i < h; i++){
    vector<int> myvector;
      for (int j = 0; j < w; j++) {
        int tempVal = 0;
        myvector.push_back(tempVal);
      }
      xy.push_back(myvector);
  }
}

void starter(Matrix &mat, int n) {
  if (n > mat.getcol()*mat.getrow()) {
    cout << "n слишком большое";
  }
  vector<vector<int>> xy;
  int_konstr(xy,n,2);
  long ltime = time (NULL);
  int stime = (unsigned int) ltime/2;
  srand(stime);
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < 2; j++) {
        xy[i][j] = rand() %mat.getcol();
      }
      celluar cell = celluar(1);
      mat(xy[i][0],xy[i][1]) = cell;
    }
}



void change(int ch_num, Matrix &old_map, Matrix &new_map, int i, int j) {
  int in_cnt = 0;

  switch (ch_num) {

    //        if (old_map(i,j) == 1 && i == 0 && j == 0) {

    case 1:
    for (int k = i; k < i+2; k++)
      for (int m = j; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    in_cnt--;
    if (in_cnt < 3) { new_map(i,j).value = 0; }
    break;

    case 2:
    //         if (old_map(i,j) == 0 && i == 0 && j == 0) {

    for (int k = i; k < i+2; k++)
      for (int m = j; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    if (in_cnt == 3) { new_map(i,j).value = 1; }
    break;

    case 3:
    //        if (old_map(i,j) == 0 && i == sz && j == 0) {

    for (int k = i-1; k < i+1; k++)
      for (int m = j; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    if (in_cnt == 3) { new_map(i,j).value = 1; }
    break;

    case 4:
    //        if (old_map(i,j) == 1 && i == sz && j == 0) {

    for (int k = i-1; k < i+1; k++)
      for (int m = j; m < j+2; m++) {
        if (old_map(k,m).value == 1) { in_cnt++; }
    }
    in_cnt--;

    if (in_cnt < 3) { new_map(i,j).value = 0; }
    break;

    case 5:
    //        if (old_map(i,j) == 0 && i == 0 && j == sz) {

    for (int k = i; k < i+2; k++)
      for (int m = j-1; m < j+1; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    if (in_cnt == 3) { new_map(i,j).value = 1; }
    break;

    case 6:
    //        if (old_map(i,j) == 1 && i == 0 && j == sz) {

    for (int k = i; k < i+2; k++)
      for (int m = j-1; m < j+1; m++) {
        if (old_map(k,m).value == 1) { in_cnt++; }
    }
    in_cnt--;
    if (in_cnt < 3) { new_map(i,j).value = 0; }
    break;

    case 7:
    //        if (old_map(i,j) == 0 && i == sz && j == sz) {

    for (int k = i-1; k < i+1; k++)
      for (int m = j-1; m < j+1; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    if (in_cnt == 3) { new_map(i,j).value = 1; }
    break;

    case 8:
    //        if (old_map(i,j) == 1 && i == sz && j == sz) {

    for (int k = i-1; k < i+1; k++)
      for (int m = j-1; m < j+1; m++) {
        if (old_map(k,m).value == 1) { in_cnt++; }
    }
    in_cnt--;
    if (in_cnt < 3) { new_map(i,j).value = 0; }
    break;

    case 9:

    for (int k = i-1; k < i+2; k++)
      for (int m = j; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    if (in_cnt >= 3) {new_map(i,j).value = 1; }
    break;

    case 10:

    for (int k = i-1; k < i+2; k++)
      for (int m = j; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    in_cnt--;
    if (in_cnt < 3) {new_map(i,j).value = 0; }
    break;

    case 11:
    for (int k = i; k < i+2; k++)
      for (int m = j-1; m < j+2; m++) {
        if (old_map(k,m).value== 1) {
          in_cnt++;
        }
      }
    if (in_cnt >= 3) {new_map(i,j).value = 1;}
    break;

    case 12:

    for (int k = i; k < i+2; k++)
      for (int m = j-1; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    in_cnt--;
    if (in_cnt < 3) {new_map(i,j).value = 0; }
    break;

    case 13:

    for (int k = i-1; k < i+1; k++)
      for (int m = j-1; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    if (in_cnt >= 3) {new_map(i,j).value = 1; }
    break;

    case 14:

    for (int k = i-1; k < i+1; k++)
      for (int m = j-1; m < j+2; m++) {
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    in_cnt--;
    if (in_cnt < 3) {new_map(i,j).value = 0; }
    break;

    case 15:

    for (int k = i-1; k < i+2; k++)
      for (int m = j-1; m < j+1; m++){
        if (old_map(k,m).value== 1) { in_cnt++; }
    }
    // cout << "in_cnt = " << in_cnt << endl;
    if (in_cnt >= 3) {new_map(i,j).value = 1; }
    break;

    case 16:

    for (int k = i-1; k < i+2; k++) {
      for (int m = j-1; m < j+1; m++){
        if (old_map(k,m).value== 1) { in_cnt++; }
      }
    }
      in_cnt--;
    if (in_cnt < 3) {new_map(i,j).value = 0; }
    break;
  }
}



void corners(Matrix &old_map, Matrix &new_map) {
  int sz = old_map.getcol();
  for (int i = 0; i < sz; i++)
    for (int j = 0; j < sz; j++) {
      if ((i == 0 && j == 0) && old_map(i,j).value == 1) {
        change (1, old_map, new_map, i, j);
      }
      if ((i == 0 && j == 0) && old_map(i,j).value == 0) {
        change (2, old_map, new_map, i, j);
      }

      if ((i == sz-1 && j == 0) && old_map(i,j).value == 0) {
        change (3, old_map, new_map, i, j);
      }

      if ((i == sz-1 && j == 0) && old_map(i,j).value == 1) {
        change (4, old_map, new_map, i, j);
      }

      if ((i == 0 && j == sz-1) && old_map(i,j).value == 0) {
        change (5, old_map, new_map, i, j);
      }

      if ((i == 0 && j == sz-1) && old_map(i,j).value == 1) {
        change (6, old_map, new_map, i, j);
      }

      if ((i == sz-1 && j == sz-1) && old_map(i,j).value == 0) {
        change (7, old_map, new_map, i, j);
      }

      if ((i == sz-1 && j == sz-1) && old_map(i,j).value == 1) {
        change (8, old_map, new_map, i, j);
      }
    }
}

void parties(Matrix &old_map, Matrix &new_map) {
  int sz = old_map.getcol();
  int cnt = 0;
  for (int i = 0; i < sz; i++)
    for (int j = 0; j < sz; j++) {

      if ((j == 0 && (i > 0 && i < sz-1)) && old_map(i,j).value == 0) {
        change(9, old_map, new_map, i, j);
      }

      if ((j == 0 && (i > 0 && i < sz-1)) && old_map(i,j).value == 1) {
        change(10, old_map, new_map, i, j);
      }

      if ((i == 0 && (j > 0 && j < sz-1)) && old_map(i,j).value == 0) {
        change(11, old_map, new_map, i, j);
      }

      if ((i == 0 && (j > 0 && j < sz-1)) && old_map(i,j).value == 1) {
        change(12, old_map, new_map, i, j);
      }

      if ((i == sz-1 && (j > 0 && j < sz-1)) && old_map(i,j).value == 0) {
        change(13, old_map, new_map, i, j);
      }

      if ((i == sz-1 && (j > 0 && j < sz-1)) && old_map(i,j).value == 1) {
        change(14, old_map, new_map, i, j);
      }

      if ((j == sz-1 && (i > 0 && i < sz-1)) && old_map(i,j).value == 0) {
        change(15, old_map, new_map, i, j);
        cnt++;
      }

      if ((j == sz-1 && (i > 0 && i < sz-1)) && old_map(i,j).value == 1) {
        change(16, old_map, new_map, i, j);
      }
  }
  // cout << endl << "cnt_n = " << cnt << endl;
}

void main_part(Matrix &old_map, Matrix &new_map) {
  int sz = old_map.getcol();
  for (int i = 0; i < sz-1; i++)
    for (int j = 0; j < sz-1; j++) {
      if ((i > 0 && i < sz-1) && (j > 0 && j < sz-1) && old_map(i,j).value == 0) {
        int in_cnt = 0;
        for (int k = i-1; k < i+2; k++) {
          for (int m = j-1; m < j+2; m++) {
            if (old_map(k,m).value== 1) {in_cnt++; }
            }
          }
          if (in_cnt >= 3 && in_cnt <= 5) { new_map(i,j).value = 1; }
       }
       if((i == sz-1 && j > 0 && j < sz) && old_map(i,j).value == 0) {
         int in_cnt = 0;
         for (int k = i-1; k < i+1; k++)
           for (int m = j-1; m < j+2; m++) {
             if (old_map(k,m).value== 1) {in_cnt++; }
             }
          if (in_cnt >= 3 && in_cnt <= 5) { new_map(i,j).value = 1; }
       }
       if ((i > 0 && i < sz-1) && (j > 0 && j < sz-1) && old_map(i,j).value == 1) {
         int in_cnt = 0;
         for (int k = i-1; k < i+2; k++)
           for (int m = j-1; m < j+2; m++) {
             if (old_map(k,m).value == 1) { in_cnt++; }
             }
             in_cnt--;
          if (in_cnt > 5) { new_map(i,j).value = 0; }
          else if (in_cnt < 3) {new_map(i,j).value = 0; }
       }

       if((i > 0 && j == sz-1 && i < sz) && old_map(i,j).value == 1) {
         int in_cnt = 0;
         for (int k = i-1; k < i+2; k++)
           for (int m = j-1; m < j+1; m++) {
             if (old_map(k,m).value == 1) {in_cnt++; } }
             in_cnt--;
          if (in_cnt > 5) { new_map(i,j).value = 0; }
          else if (in_cnt < 3) {new_map(i,j).value = 0; }

    }
  }
}


void life_time_controller(Matrix &old_map) {
  int sz = old_map.getcol();
  for (int i = 0; i < sz; i++) {
    for (int j = 0; j < sz; j++) {
      if (old_map(i,j).value == 1) {
        old_map(i,j).life_time_up();
        cout << "i , j" << ":" << i << " " << j << "   " << old_map(i,j).value << "   " << old_map(i,j).life_time << endl;
      }
    }
  }
}


void mega_celluar_generation_logic(Matrix &new_map) {
  int sz = new_map.getcol();
  for (int i = 0; i < sz; i++) {
    for (int j = 0; j < sz; j++) {
      if (new_map(i,j).value == 1 && new_map(i,j).life_time >= 3)
        new_map(i,j).value = 2;
    }
  }
}

void game(Matrix &old_map, Matrix &new_map) {
  int step = 0;
  while (step!=5) {
    life_time_controller(new_map);
    corners(old_map, new_map);
    parties(old_map, new_map);
    main_part(old_map, new_map);
    mega_celluar_generation_logic(new_map);
    old_map = new_map;
    cout << new_map << endl;
    step++;
  }
}
