#include <iostream>
#include <stdlib.h>


//Prompts the user to select either Rock, Paper or Scissors.
//Compares the user’s choice and the computer’s choice and determine the winner.

int main () {
  
  srand (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
 
std::cout << "shoot:\n ";

int rock = 1;
int paper = 2;
int scissors = 3;

  std::cin >> user;

  if (user == rock && computer == paper) {
   
    std::cout << "You lose!:(\n";
  } else if (user == paper && computer == rock) {
  
   std::cout << "You win!:)\n";
  } else if (user == paper && computer == scissors) {
  
     std::cout << "You lose!:(\n";
  } else if (user == scissors && computer == paper) {
    
    std::cout << "You win!:)\n";
  } else if (user == rock && computer == scissors){
    
     std::cout << "You lose!:(\n";
  } else if (user == scissors && computer == rock) {
    
     std::cout << "You win!:)\n";
  } else if (user == computer) {
    std::cout << "Tie\n";
  } else {
    std::cout << "You lose!:(\n"
  }

 
}
