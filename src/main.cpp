//
// Created by kblaszki on 12/7/2022.
//

#include "Eigen_CXX_14.h"
#include "Eigen_CXX_17.h"
#include "Eigen_CXX_20.h"

#include <iostream>

int main()
{
  Eigen_CXX_14::foo();

  Eigen_CXX_17 eigenCxx17{};
  eigenCxx17.foo();

  Eigen_CXX_20 eigenCxx20{};
  eigenCxx20.foo();

  return EXIT_SUCCESS;
}