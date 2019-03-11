/**********************************************************************
 * @file    spFunctionsILguessingGame.cpp
 * @brief   this program calls a series of functions to perform a 
 *          guessing game.
 *
 * 
 *
 * @remarks  Had the issue of recalling functions on accident
 * 
 * 
 *      Course:        Computer Science 2114
 *      Assignment #:  09
 *      Due Date:      october 4th
 *      Instructor:    MS. Serviner
 *
 *      Input:      the guessed number
 *
 *      Output:      whether the guessednumber is the same 
 *                   as the random number
 * 
 * @author        Ridge Diffine
 * @date          2018-09-6
 **********************************************************************
 */
#include<iostream>
	using std::cin;
	using std::cout;
	using std::endl;
	
#include<random>

int generateSecretNumber()
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(1,100);
	return dist(mt);
}

int getUserGuess()
{
  int guessNum;
  cout << "Enter an integer between 1 and 100: ";
  cin >> guessNum;
  
  if(guessNum > 100 || guessNum < 1){
      cout << "That number is not in range, try again: ";
      cin >> guessNum;
  }
  return guessNum;
}

bool correctGuess(int secretNumber, int guess)
{
	if(guess == secretNumber){
	    return true;
	}
	else
	{
	    return false;
	}
}

void guessingGame()
{
    cout << "I am thinking of a number between 1 and 100. "  
	     << "Can you guess what it is?" << endl;
	cout << "_____________________________________________" << endl;
	int randomNumber, guessedNumber;
	bool TrueorFalse;
	guessedNumber = getUserGuess();
	randomNumber = generateSecretNumber();
	TrueorFalse = correctGuess(randomNumber, guessedNumber);
	while(TrueorFalse == false){
        cout << "That is not the number.  Try again." << endl;
	    guessedNumber = getUserGuess();
	    TrueorFalse = correctGuess(randomNumber, guessedNumber);
	}
	if(TrueorFalse == true){
	    cout << "CONGRATULATIONS!  You guessed correctly!" << endl;
	}
	
}



int main()
{
	
	guessingGame();
	return 0;
}