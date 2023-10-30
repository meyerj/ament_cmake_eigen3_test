#include <iostream>
#include <Eigen/Core>

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  std::cout << "Here is a random Eigen vector for you: [" << Eigen::Vector3d::Random().transpose()
            << "]" << std::endl;
  return 0;
}
