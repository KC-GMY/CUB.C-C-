/* CH-230-A
a9_p9.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cctype>
using namespace std;

//receives a word and replaces its vowels by underscores
string obs_word(const string &word) {
    string obscured = word;
    for (char &ch : obscured) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            ch = '_';
        }
    }
    return obscured;
}

int main() {
    //generating random number
    srand(static_cast<unsigned int>(time(0)));
    
    //declaring an array of 17 words for the game
    string words[] = {"computer", "television", "keyboard", "laptop", "mouse", 
                      "corp", "fnatic", "league", "furia", "rise", 
                      "pizza", "burger", "mojito", "drink", "apple", 
                      "juice", "water"};
    int word=sizeof(words)/sizeof(words[0]);
    //declaring a string
    string playAgain;
    do {
        //selecting a random word from the array
        string random_word = words[rand() % word];
        
        //obscuring the word by replacing vowels with underscores
        string unknown_word = obs_word(random_word);
        cout<<"Guess the word: "<<unknown_word<<endl;
        
        int count = 0;
        string guess;
        
        //loop for the guessing game
        while(true){
            cout << "Enter your guess : ";
            cin >> guess;
            count++;
            if (guess == "quit") {
                cout << "Thanks for playing!"<<endl;
                return 0;
            } else if (guess == random_word) {
                cout << "You guessed the word '" << random_word << "' in " << count << " tries!" << endl;
                break;
            } else {
                cout << "Incorrect! Try again." << endl;
            }
        }
        //asking if the player wants to play again
        cout << "Do you want to play again? (yes/no): ";
        cin >> playAgain;
    } while (playAgain == "yes");
    cout << "Thank you for playing!" << endl;
    return 0;
}