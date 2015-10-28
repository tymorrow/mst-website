/* @name  Tyler Morrow
 * @date  10/11/2015
 * @file  main.cpp
 * @sect  cs1580 B/D
 * @desc  Plays number guessing game with user with max of 5 guesses.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "numberGuesser.h"
using namespace std;

int main()
{
  const short MIN_GUESS = 1;
  const short MAX_GUESS = 100;
  short numberToGuess = 0;
  short currentGuess = 0;
  bool giveHints = false;
  bool gameFinished = false;
  srand(time(NULL));

  numberToGuess = rand() % (MAX_GUESS - MIN_GUESS) + MIN_GUESS;

  cout << "[Number Guessing Game]" << endl << endl;

  giveHints = GetHintResponse();  
  while(!gameFinished)
  {
    currentGuess = GetUserGuess(MIN_GUESS, MAX_GUESS);
    gameFinished = ValidateUserGuess(currentGuess, numberToGuess, giveHints);
  }

  cout << "[Game Over!]" << endl;
  return 0;
}
