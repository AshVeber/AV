# AV
To Do List is a C++ 100% terminal, open source, independent project for automazing your daily routing that simpler, more low weight with readable code.

It provides the new features for spend your time with fun and improve your terminal skills. AV is a terminal chat where you can automaze your routing. Type 'help' for more information about it!

# WELCOME TO AV
You can run my project via terminal and test it! AV is about flexible and automazing work.

# QUICK START

## LINUX
*Required dependencies: git, g++ compiler, CMake*

### Step 1:
Open the terminal and run those commands.

*Install Cmake*

Arch Linux:
```
# Bash
sudo pacman -S cmake
sudo yay -S cmake
```
Ubuntu-based/Debian:
```
# Bash
sudo apt install cmake
```
*Install g++ compiler*

Arch Linux:
```
# Bash
sudo pacman -S g++
sudo yay -S g++
```
Ubuntu-based/Debian:
```
# Bash
sudo apt-get install g++
```
*Install git*

Arch Linux:
```
# Bash
sudo pacman -S git
sudo yay -S git
```
Ubuntu-based/Debian:
```
# Bash
sudo apt install git
```
### Step 2:

Clone the repository.
```
# Bash
git clone <REPOSITORY>
```

### step 3:

Write this commands
```
# Bash
cd <YOUR_PATH_TO_REPOSITORY>
mkdir build && cd build
cmake ..
make
./AV
```
*ENJOY!*


## WINDOWS (not tested)
*Required dependencies: git, VScode, CMake*

### Step 1:

*Install git*
> https://git-scm.com/install/windows

*Install VScode*
> https://code.visualstudio.com/download?_exp_download=fb315fc982

*Install CMake*
>https://cmake.org/download/

### Step 2:
- Run the VScode.
- Download "CMake Tools" and "C/C++ Extension Pack" from Extensions (CTRL+SHIFT+X)
- Create folder.
- Create ".vscode" folder in previous folder.
- Open VScode and create "tasks.json" in ".vscode" and write this:
```
  {
    "version":"2.0.0",
    "tasks": [
        {
            "label":"Build and Run C++",
            "type":"shell",
            "command":"g++",
            "args": ["${file}", "-o", "${fileDirname}\\${fileBasenameNoExtension}.exe", "&&", "${fileDirname}\\${fileBasenameNoExtension}.exe"],
            "problemMatcher":["$gcc"],
            "group": {
                "kind": "build",
                "isDefault": true
            }
        }
    ]
}
```
### Step 3:
Clone the repository using git
```
# Bash
git clone <REPOSITORY>
```
Write this commands
```
# Bash
cd <YOUR_PATH_TO_REPOSITORY>
mkdir build
cd build
cmake ..
cmake --build .
```
*ENJOY!*

## MacOs (not tested)
*Required dependencies: compiler, CMake*

### Step 1:

*Install compiler*
```
# Bash
xcode-select --install
```

*Install CMake*
(Install Homebrew before)
```
# Bash
brew install cmake
```
### Step 2:
Follow this commands:
```
# Bash
git clone <REPOSITORY>
cd AV
mkdir build
cd build
cmake ..
make
./AV
```
*ENJOY!*

# ABOUT OWNER
## *Ash Veber*
The young prorammer with huge potential! Ash interests ML engineering, devops, backend, frontend and ...BLENDER!

### Veber's contacts
Telegram: @Tolfee

email: ashveber42@gmail.com
