//File Name: Vectors.cpp
//Author: Dia Al rahman
//Email Address: diaalrahman312@gmail.com
//Description: 
//Last Changed: 25-09-2023

#include <iostream>
#include <vector>

template <typename T>
void passByRef(const std::vector<T>& v){
        std::cout<<v[0]<<std::endl;
    }

int main()
{
    // std::vector<int> data{10}; //This makes a list of length 1 with initial element value 10
    // std::vector<int> data2(10); //This makes a list of length 10 with initial element values 0
    
    // std::cout << data[0] <<" "<<data[11] <<" "<<data[2]<< std::endl;
    // std::cout << data2[0] <<" "<<data2[11] <<" "<<data2[2]<< std::endl;

    // //Quiz 1
    // //Question 1
    
    // std::vector squares{1, 4, 9, 16, 25};
    // for (int i = 0; i < squares.size(); i++)
    // {
    //     std::cout << squares[i] << " ";
    // }
    // std::cout << std::endl;
    
    // //Question 2

    // std::vector v1 { 5 }; // Matches list constructor
    // std::vector<int> v2 ( 5 ); //Can't use CTAD because 
    // // it has to know what elements to define as I did not give any arguments
    // // It defines a 5 element vector where the elements are value-initialized.

    // //Question 3
    // std::vector<double> high_temps(365);

    // //Question 4
    // int sum{};
    // int product{1};
    // std::vector<int> vals(3);

    // for (int i = 0; i < vals.size(); i++){
    //     std::cout << "Enter a value for vals[" << i << "]";
    //     std::cin >> vals[i];

    //     sum = sum + vals[i];
    //     product = product * vals[i];
    // }

    // std::cout << "The sum of the values is: " << sum << std::endl;
    // std::cout << "The product of the values is: " << product << std::endl;    

    //Quiz - 16.3
    //Question 1

    // std::vector genericName{'h', 'e', 'l', 'l', 'o'};
    // std::cout << "The array has "<<std::size(genericName)<<" elements." << std::endl;
    // std::cout << genericName[1] << " " << genericName.at(1) << std::endl;

    std::vector primes{2, 3, 5, 7, 11, 13, 17, 19};
    passByRef(primes);

    return 0;
}