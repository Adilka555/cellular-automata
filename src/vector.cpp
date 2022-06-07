#include "vector.h"
using namespace std;


Matrix::Matrix(const Matrix &rhs)
{
  Mat = rhs.Mat;
}

Matrix::Matrix(int w, int h) {
  vector<celluar> tmp;
  for (int i = 0; i < h; i++){
      for (int j = 0; j < w; j++) {
        celluar cell_null = celluar(0);
        tmp.push_back(cell_null);
      }
      Mat.push_back(tmp);
   }
   tmp.clear();
}

const int Matrix::getnum(int r, int c) const {
  return Mat[r][c].value;
}

ostream &operator<<(ostream &os, const Matrix &rhs)
{
  for(int i(0); i < rhs.getrow(); ++i)
  {
      for(int j(0); j < rhs.getcol(); ++j)
          os << rhs.getnum(i, j) << '\t';
      os << endl;
  }
  return os;
}

Matrix &Matrix::operator=(const Matrix &rhs)
{
  this->Mat.resize(rhs.getrow());
  for(int i(0); i < this->getrow(); ++i)
      this->Mat[i].resize(rhs.getcol());
  for(int i(0); i < this->getrow(); ++i)
      for(int j(0); j < this->getcol(); ++j)
          this->Mat[i][j] = rhs.Mat[i][j];
  return *this;
}

celluar &Matrix::operator()(int i, int j)
{
  return Mat[i][j];
}
