//
// Created by kblaszki on 12/7/2022.
//

#include "Eigen_CXX_20.h"

#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

Eigen_CXX_20::Eigen_CXX_20()
  : s{.x = 21, .y = -12, .b = true}
{
  std::cout << "Eigen_CXX_20: " << s.x << ", " << s.y << ", " << s.b << std::endl;
}

void Eigen_CXX_20::foo()
{
  std::cout << "Eigen_CXX_20::foo()" << std::endl;
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}
