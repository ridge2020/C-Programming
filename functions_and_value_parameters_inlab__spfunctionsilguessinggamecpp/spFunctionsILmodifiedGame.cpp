/**********************************************************************
 * @file    spFunctionsILmodifiedGame.cpp
 * @brief   this program uses fucntions to play a guessing game in which the 
 *          user sets the range
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
 *      Input:      the guessed number, and range
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

int generateSecretNumber(int min1, int max1)
{
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> dist(min1, max1);
	return dist(mt);
}

int getUserGuess(int min1, int max1)
{
  int guessNum;
  cout << "Enter an integer between " << min1 << " and " << max1 << ": ";
  cin >> guessNum;
  
  if(guessNum > max1 || guessNum < min1){
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
    int randomNumber, guessedNumber, min1, max1;
	bool TrueorFalse;
	
    cout << "Please enter the min range of random number: ";
    cin >> min1;
    cout << "Please eneter the max range of random number: ";
    cin >> max1;
    
    cout << "I am thinking of a number between " << min1 << " and "
         << max1 << ". Can you guess what it is?" << endl;
	cout << "_____________________________________________" << endl;
	
	guessedNumber = getUserGuess(min1, max1);
	randomNumber = generateSecretNumber(min1, max1);
	TrueorFalse = correctGuess(randomNumber, guessedNumber);
	while(TrueorFalse == false){
        cout << "That is not the number.  Try again." << endl;
	    guessedNumber = getUserGuess(min1, max1);
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