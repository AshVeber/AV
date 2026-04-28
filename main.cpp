#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>

void Calculator_fun() {
    double a;
    double b;
    char mov;
    double c;
    std::string answer;
    while (true) {
        std::cout << "==============================================\n";
        std::cout << "1st number is: ";
        std::cin >> a;
        std::cout << "what should I do? (+ - * /): ";
        std::cin >> mov;
        std::cout << "2nd number is: ";
        std::cin >> b;
        if(mov == '+'){
            c = a + b;
            std::cout << "====================\nThe result is: " << c << std::endl;
        }else
        if(mov == '-'){
            c = a - b;
            std::cout << "====================\nThe result is: " << c << std::endl;
        }else
        if(mov == '*') {
            c = a * b;
            std::cout << "====================\nThe result is: " << c << std::endl;
        }else
        if(mov == '/') {
            c = a / b;
            if(b == 0) {
                std::cout << "You can not divide by zero.\n";
                continue;
            }else {
                std::cout << "====================\nThe result is: " << c << std::endl;
            }
        }else {
            std::cout << "Unknow operation\n";
            continue;
        }
        std::cout << "another one? (press X for exit)" << std::endl;
        std::cin >> answer;
        transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
        if(answer == "x") {
            std::cout << "Understood, sir.\n Calculator was closed.\n";
            break;
        }

    }  
}

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
        }
        if(input.find("google") != std::string::npos && input.find("open") != std::string::npos || input.find("google") != std::string::npos) {
            std::cout << "Yes, sir." << std::endl;
            system("start https://www.google.com");
            break;
        }else
        if(input.find("spotify") != std::string::npos && input.find("open") != std::string::npos || input.find("spotify") != std::string::npos) {
            std::cout << "I am on it, sir." << std::endl;
            system("start spotify:");
            break;
        }else
        if(input.find("youtube") != std::string::npos && input.find("open") != std::string::npos || input.find("youtube") != std::string::npos) {
            std::cout << "Time to relax, sir." << std::endl;
            system("start https://www.youtube.com/");
            break;
        }else
        if(input.find("help") != std::string::npos) {
            std::cout << "I am AV. Your assistant.\n==========================\n    -*. WHAT I CAN .*-\n==========================\n1. Open\n   a)google\n   b)spotify\n   c)youtube\n2. Be a Calculator" << std::endl;
            continue;
        }else
        if((input.find("open") != std::string::npos && input.find("calculator") != std::string::npos) || input.find("calculator") != std::string::npos) {
            std::cout << "Yes, sir.\n" << "It is a very simple calculator. But I learn." << std::endl;
            Calculator_fun();
        }
    }
    return 0;
}
