//
// Created by kblaszki on 12/7/2022.
//

#include "Eigen_CXX_14.h"

#include <iostream>
#include <Eigen/Dense>

using Eigen::MatrixXd;

void Eigen_CXX_14::foo()
{
  MatrixXd m(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
}
