#include <iostream>
#include <string>

bool b1 = false;
bool b2 = false;
bool b3 = false;
bool b4 = false;
bool b5 = false;
bool b6 = false;
bool b7 = false;
bool b8 = false;
bool b9 = false;
int choice;
std::string block = "██";

void draw_board(){
  if(b1==0){
    std::cout << "\x1b[31m" << block;
  } 
  else{
    std::cout << "\x1b[91m" << block;
  }
  if(b2==0){
    
  }
  
}

int main(){
  std::cout << "Welcome to cpi(Console Pop It)" << std::endl;
  std::cout << "[1] play" << std::endl;
  std::cout << "[2] exit" << std::endl;
  std::cout << "choice:- ";
  std::cin >> choice;
  switch(choice){
    case 1:
      draw_board();
    case 2:
      std::cout << "\x1b[33mnote: user chose to exit so exiting" << std::endl;
      return 0;
    default:
      std::cout << "\x1b[31merror: invalid choice so exiting\x1b[0m" << std::endl;
      return 0;
  }
} 
