#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <cstdlib>

using namespace std;


int main() {

    string input;
    cout << "Hello! I'm AV." << "\n";
    getline(cin, input);
    transform(input.begin(), input.end(), input.begin(), ::tolower);

    while(true) {
        if(input.find("wake") != string::npos && input.find("up") != string::npos) {
            cout << "Welcome back, sir." << "\n";
        }else
        if(input.find("hi") != string::npos || input.find("hello") != string::npos) {
            cout << "Hello, sir." << "\n";
        }else
        if(input.find("bye") != string::npos || input.find("goodbye") != string::npos) {
            cout << "Goodbye, sir." << "\n";
            break;
        } else 
        if(input.find("goodnight") != string::npos || input.find("night") != string::npos){
            cout << "Goodnight, sir." << "\n";
            break;
        }
        if(input.find("google") != string::npos && input.find("open") != string::npos) {
            cout << "Yes, sir." << "\n";
            system("start https://www.google.com");
            break;
        }else
        if(input.find("spotify") != string::npos && input.find("open") != string::npos) {
            cout << "Yes, sir." << "\n";
            system("start spotify:");
            break;
        }else
        if(input.find("youtube") != string::npos && input.find("open") != string::npos) {
            cout << "Yes, sir." << "\n";
            system("start https://www.youtube.com/");
            break;
        }else
        if(input.find("help") != string::npos) {
            cout << "I am AV. Your assistant.\n==========================\n    -*. WHAT I CAN .*-\n==========================\n1. Open\n   a)google\n   b)spotify\n   c)youtube\n2. Be a Calculator";
        }else
        if((input.find("wanna") != string::npos && input.find("talk") != string::npos) || (input.find("want to") != string::npos && input.find("talk") != string::npos)) {
            cout << "What's wrong, sir?\n";
        }else
        if((input.find("open") != string::npos && input.find("calculator") != string::npos) || input.find("calculator") != string::npos) {
            cout << "Yes, sir.\n" << "It is a very simple calculator. But I learn." << "\n";
            double a;
            double b;
            char mov;
            double c;
            string answer;
            while (true) {
                cout << "==============================================\n";
                cout << "1st number is: ";
                cin >> a;
                cout << "what should I do? (+ - * /): ";
                cin >> mov;
                cout << "2nd number is: ";
                cin >> b;
                if(mov == '+'){
                    c = a + b;
                    cout << "====================\nThe result is: " << c << "\n";
                }else
                if(mov == '-'){
                    c = a - b;
                    cout << "====================\nThe result is: " << c << "\n";
                }else
                if(mov == '*') {
                    c = a * b;
                    cout << "====================\nThe result is: " << c << "\n";
                }else
                if(mov == '/') {
                    c = a / b;
                    if(b == 0) {
                        cout << "You can not divide by zero.\n";
                        continue;
                    }else {
                        cout << "====================\nThe result is: " << c << "\n";
                    }
                }else {
                    cout << "Unknow operation\n";
                    continue;
                }
                cout << "another one? (press X for exit)" << "\n";
                cin >> answer;
                transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
                if(answer == "x") {
                    cout << "Understood, sir.\n Calculator was closed.\n";
                    break;
                }

                }  
            
        }
        
        getline(cin, input);
        

    }
}
