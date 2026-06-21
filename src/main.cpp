#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>

#include "youtube-link.h"

int main() {
    std::string input;
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    while(true) {
        std::cout << ">> ";
        getline(std::cin, input);

        if(input.find("wake") != std::string::npos && input.find("up") != std::string::npos || input.find("wake") != std::string::npos) {
            std::cout << "I am always here, sir." << std::endl;
            continue;
        }else
        if(input.find("hi") != std::string::npos || input.find("hello") != std::string::npos) {
            std::cout << "Hello, sir." << std::endl;
            continue;
        }else
        if(input.find("bye") != std::string::npos || input.find("goodbye") != std::string::npos) {
            std::cout << "Goodbye, sir." << std::endl;
            break;
        } else 
        if(input.find("goodnight") != std::string::npos || input.find("night") != std::string::npos){
            std::cout << "Goodnight, sir." << std::endl;
            break;
        }else
        if(input.find("firefox") != std::string::npos && input.find("open") != std::string::npos || input.find("firefox") != std::string::npos) {
            std::cout << "Yes, sir." << std::endl;
            system("firefox");
        }else
        if(input.find("spotify") != std::string::npos && input.find("open") != std::string::npos || input.find("spotify") != std::string::npos) {
            std::cout << "I am on it, sir." << std::endl;
            system("spotify");
        }else if(input.find("youtube")){
            std::cout << "'YouTube search' is ON. sir" << std::endl;
            YTlink();
        }
    }
    return 0;
}
