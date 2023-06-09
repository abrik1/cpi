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
int button_to_pop;
std::string block = "██";

void draw_board(){
  if(b1==0){
    std::cout << "\x1b[31m" << block;
  } 
  else{
    std::cout << "\x1b[91m" << block;
  }
  if(b2==0){
    std::cout << "\x1b[33m" << block;
  }
  else{
    std::cout << "\x1b[93m" << block;
  }
  if(b3==0){
    std::cout << "\x1b[34m" << block << "\x1b[0m" << std::endl;
  }
  else{
    std::cout << "\x1b[94m" << block << "\x1b[0m" << std::endl;
  }
  if(b4 == 0){
   std::cout << "\x1b[31m" << block;
  }
  else{
    std::cout << "\x1b[91m" << block; 
  }
  if(b5 == 0){
    std::cout << "\x1b[33m" << block;
  }
  else{
    std::cout << "\x1b[93m" << block;
  }
  if(b6 == 0){
    std::cout << "\x1b[34m" << block << std::endl;
  }
  else{
    std::cout << "\x1b[94m" << block << std::endl;
  }
  if(b7 == 0){
    std::cout << "\x1b[31m" << block;
  }
  else{
    std::cout << "\x1b[91m" << block;
  }
  if(b8 == 0){
    std::cout << "\x1b[33m" << block;
  }
  else{
    std::cout << "\x1b[93m" << block;
  }
  if(b9==0){
    std::cout << "\x1b[34m" << block << "\x1b[0m" << std::endl;
  }
  else{
    std::cout << "\x1b[94m" << block << "\x1b[0m" << std::endl;
  }
  //get_input();
}

void get_input(){
  //button_to_pop = 0;
  std::cout << "enter input between[1-9] to pop: ";
  std::cin >> button_to_pop;
  if(button_to_pop==1){
    if(b1==0){
      b1 = true;
    }
    else{
      b1 = false;
    }
  }
  else if(button_to_pop==2){
    if(b2==0){
      b2 = true;
    }
    else{
      b2 = false;
    }
  }
  else if(button_to_pop==3){
      if(b3==0){
        b3 = true;     
      }
      else{
        b3 = false;
      }
  }
  else if(button_to_pop==4){
      if(b4==0){
        b4 = true;     
      }
      else{
        b4 = false;
      }
  }
  else if(button_to_pop==5){
    if(b5==0){
      b5 = true;     
    }
    else{
      b5 = false;
    }
  }
  else if(button_to_pop==6){
    if(b6==0){
      b6 = true;     
    }
    else{
      b6 = false;
    }
  }
  else if(button_to_pop==7){
    if(b7==0){
      b7 = true;     
    }
    else{
      b7 = false;
    }
  }
  else if(button_to_pop==8){
    if(b8==0){
      b8 = true;     
    }
    else{
      b8 = false;
    }
  }
  else if(button_to_pop==9){
    if(b9==0){
      b9 = true;     
    }
    else{
      b9 = false;
    }
  }
  else{
    std::cout << "\x1b[31merror: invalid choice\x1b[0m" << std::endl;
  }
  draw_board();
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
      while(choice==1){
        get_input();
      }
      return 0;
    case 2:
      std::cout << "\x1b[33mnote: user chose to exit so exiting\x1b[0m" << std::endl;
      return 0;
    default:
      std::cout << "\x1b[31merror: invalid choice so exiting\x1b[0m" << std::endl;
      return 0;
  }
} 
