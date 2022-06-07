#ifndef VECTORSAFETY
#define VECTORSAFETY

#include <stdio.h>
#include <fstream> // for file access
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>
#include "celluar.h"
using namespace std;

class Matrix {
private:
  vector<vector<celluar>> Mat;
  Matrix() {};
public:
  Matrix(vector<vector<celluar>> mat): Mat(mat) {};
  Matrix(int w, int h);
  ~Matrix() {};
  Matrix(const Matrix &rhs);

  // int getnum(int r, int c)const {return Mat[r][c];};
  const int getnum(int, int) const;
  int getrow()const {return (Mat.size());};
  int getcol()const {return (Mat[0].size());};
  friend ostream & operator<<(ostream &os, const Matrix &rhs);
  Matrix &operator+(const Matrix &rhs);
  Matrix &operator=(const Matrix &rhs);
  celluar &operator()(int i, int j);
};

#endif
