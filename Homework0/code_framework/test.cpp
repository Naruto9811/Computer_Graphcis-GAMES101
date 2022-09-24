#include<iostream>
#include<cmath>
#include<time.h>
#include<Eigen>

int main () {

    // define run_time function and pointer to function
    void run_time(Eigen::MatrixXd (*func)(Eigen::MatrixXd), Eigen::MatrixXd input);
    Eigen::MatrixXd trans(Eigen::MatrixXd input);

    Eigen::MatrixXd c;
    Eigen::Matrix4d b;
    b << 1,2,3,4,
         5,6,7,8,
         9,10,11,12,
         13,14,15,16;
    
    c = b;
    
    Eigen::MatrixXd (*foo)(Eigen::MatrixXd){ &trans };
    run_time(foo, b);
    std::cout << c << std::endl;
    return 0;
}

Eigen::MatrixXd trans(Eigen::MatrixXd input_matrix)
{
    Eigen::MatrixXd output_matrix(input_matrix.cols(), input_matrix.rows());
    output_matrix = input_matrix.transpose();
    return output_matrix;    
}; 

void run_time(Eigen::MatrixXd (*func)(Eigen::MatrixXd), Eigen::MatrixXd input){
    // Run_time test function
    clock_t start,end;
    start = clock();
    std::cout << func(input) << std::endl;
    end = clock();
    
    std::cout << end - start << "ms" << std::endl;
};    

