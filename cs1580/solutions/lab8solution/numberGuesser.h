/* @name  Tyler Morrow
 * @date  10/11/2015
 * @file  numberGuesser.h
 * @sect  cs1580 B/D
 * @desc  Contains function prototypes and global constants for numberGuesser.cpp
 */

#ifndef NUMBERGUESSER_H
#define NUMBERGUESSER_H

const short MAX_GUESSES = 5;

/******************************************************************************
 * @desc  Retrieves a boolean value that specifies whether or not the user 
          wants hints after their guesses.
 * @pre   The programmer should expect a bool returned.
 * @post  The returned value is true if the user wants hints turn on, and false
          otherwise.
 ******************************************************************************/
bool GetHintResponse();

/******************************************************************************
 * @desc  Retrieves a valid guess from the user between a min and max value.
 * @pre   minimum should be less than maximum; both should be >= zero.
 * @post  The returned value should be between minimum and maximum, inclusive.
 ******************************************************************************/
short GetUserGuess(const short minimum, const short maximum);

/******************************************************************************
 * @desc  Validates a provided guess and provides hints if desired.
 * @pre   userGuess and numberToGuess may be any reasonable values; they should
	  have been validated prior.
 * @post  The returned value should be a boolean that specifies whether or not
	  guessing is finished.  I.e., if the numbers match or no more
	  guesses are allowed, return true, otherwise false.
 ******************************************************************************/
bool ValidateUserGuess(const short userGuess, const short numberToGuess,
		       const bool giveHints);

#endif
