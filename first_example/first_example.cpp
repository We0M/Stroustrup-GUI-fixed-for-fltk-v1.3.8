#include "Simple_window.h"
#include "Graph.h"
/*
Source Code - https://github.com/BjarneStroustrup/Programming-_Principles_and_Practice_Using_Cpp
- My easy fixed for fltk v1.3.8
- Tested in WSL2 Ubuntu 20.04
But how? Easy instructions:
1. Install WSL2 and Ubuntu(cli enough).
2. Set you Ubuntu:
Open a shell and install some software:

  sudo apt-get install g++ or sudo apt-get install clang
  sudo apt-get install gdb
  sudo apt-get install git
  sudo apt-get install autoconf
  sudo apt-get install libx11-dev
  sudo apt-get install libglu1-mesa-dev

These two are optional, but highly recommended:

  sudo apt-get install libasound2-dev
  sudo apt-get install libxft-dev
3. Download fltk v1.3.8 - https://www.fltk.org/software.php and unpack in user folder Ubuntu
4. in folder fltk-1.3.8
run:
   1. sudo sh configure (or sudo bash configure or sudo zsh configure) or chmod +x configure
   2. make
   3. test/demo - if yo want to test
   4. sudo make install
   5. sudo apt install libfltk1.3-dev
5. delete folder fltk-1.3.8
6. clone this git or download .zip
command to compile:
>> clang++ -Wall -g first_example.cpp Graph.cpp GUI.cpp Simple_window.cpp Window.cpp `fltk-config --ldflags --use-images` -lfltk -o ~/_you_path_/first_graphic_test
or
>> g++ -Wall -g first_example.cpp Graph.cpp GUI.cpp Simple_window.cpp Window.cpp `fltk-config --ldflags --use-images` -lfltk -o ~/_you_path_/first_graphic_test

necessarily flags: `fltk-config --ldflags --use-images` -lfltk
good luck
*/

int main(void)
try {
   using namespace Graph_lib;

   Point tl{100,100};

   Simple_window win(tl, 600, 400, "canvas");

   Polygon poly;

   poly.add(Point{300,200});
   poly.add(Point{350,100});
   poly.add(Point{400,200});

   poly.set_color(Color::red);

   win.attach(poly);

   win.wait_for_button();

   return 0;
}
catch(exception& e) {
   cerr << e.what();
   return 1;
}
catch(...) {
   cerr << "unknown error\n";
   return 2;
}