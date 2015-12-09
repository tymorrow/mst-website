/* @name  Tyler Morrow
 * @date  10/11/2015
 * @file  numberGuesser.cpp
 * @sect  cs1580 B/D
 * @desc  Contains function definitions for numberGuesser.h
 */

#include <iostream>
#include "numberGuesser.h"
using namespace std;

bool GetHintResponse()
{
  bool wantsHints;
  cout << "> Would you like hints for this game (1 = yes, 0 = no): ";
  cin >> wantsHints;
  cout << (wantsHints ? ":: HINTS ON" : ":: HINTS OFF") << endl << endl;
  return wantsHints;
}

short GetUserGuess(const short minimum, const short maximum)
{
  short userGuess;

  do
  {
    cout << "> Enter a guess [" << minimum << ", " << maximum << "]: ";
    cin >> userGuess;

    if(userGuess < minimum || userGuess > maximum)
    {
      cout << "!! INVALID VALUE!" << endl;
    }
  }while(userGuess < minimum || userGuess > maximum);

  return userGuess;
}

bool ValidateUserGuess(const short userGuess, const short numberToGuess,
		       const bool giveHints)
{
  static short numberOfGuesses = 1;
  bool gameOver = false;

  if(numberToGuess == userGuess)
  {
    cout << "!! Congratulations! The number is "
	 << numberToGuess << " and you got it!" << endl;
    gameOver = true;
  }
  else if(giveHints)
  {
    if(numberToGuess > userGuess)
    {
      cout << ":: Hint: Guess is low!" << endl;
    }
    else if(numberToGuess < userGuess)
    {
      cout << ":: Hint: Guess is high!" << endl;
    }
  }
  else
  {
    cout << ":: Your guess was incorrect!" << endl;
  }
  
  if(numberOfGuesses >= MAX_GUESSES && numberToGuess != userGuess)
  {
    cout << ":: Maximum guesses reached! The number was "
	 << numberToGuess << "." << endl;
    gameOver = true;
  }
  else if(numberOfGuesses < MAX_GUESSES && numberToGuess != userGuess)
  {
    cout << ":: Guesses remaining: "
	 << MAX_GUESSES - numberOfGuesses << endl;
  }
  cout << endl;
  
  numberOfGuesses++;
  return gameOver;
}
