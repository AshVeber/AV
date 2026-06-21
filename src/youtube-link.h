#pragma once
#include <iostream>

inline void YTlink(){
    std::cout << "search for ";
    std::string a;
    getline(std::cin, a);
    for(int i = 0; i < a.length(); ++i){
        if(a[i] == ' '){
            a[i] = '+';
        }
    }
    std::string y = "firefox https://www.youtube.com/results?search_query=" + a ;
    const char* command = y.c_str();

    system(command); 
}