#pragma once
#include <iostream>
#include "global_variables.h"

inline void YTlink(){
    for(int i = 0; i < conv_input.length(); ++i){
        if(conv_input[i] == ' '){
            conv_input[i] = '+';
        }
    }
    std::string y = "firefox \"https://www.youtube.com/results?search_query=" + conv_input + "\" &";

    system(y.c_str()); 
}

inline void install() {
    //search about how to do it manually 
}
