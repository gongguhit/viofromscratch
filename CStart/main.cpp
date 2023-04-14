#include <iostream>
#include <eigen3/Eigen/Core>

int main(){
    double a;
    Eigen::Vector3i index1(11, 21, 31);

    a = index1.norm();

    std::cout << "a is " << a << std::endl;

    return 0;
}
