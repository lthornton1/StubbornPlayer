#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{

  SecretDoor game;
  int play;
  int win=0;

  cout << "How many times would you like to play?"<<endl;
  cin >> play;
  for (int i=0; i<=play; i++){

    game.newGame();
    game.guessDoorC();
    game.guessDoorC();
    if (game.isWinner() == true){
      win++;
    }

  } 

  cout<<"You won "<<win<<" times!"<<endl;

  return 0;
}
