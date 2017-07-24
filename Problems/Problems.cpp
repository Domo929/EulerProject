//
// Created by djcupo on 7/24/17.
//


#include "Problems.hpp"

bool problemOne(){
    std::vector<int> multiples;
    for(int i = 0; i < 1000; i++){
        if(i % 3 == 0 || i % 5 ==0){
            multiples.push_back(i);
        }
    }
    unsigned  long sum = 0;
    for(auto num : multiples){
        sum += num;
    }
    std::cout << "The Sum of all multiples of 2 or 5 from 0 to 1000 is: " << sum << std::endl;
    return true;
}