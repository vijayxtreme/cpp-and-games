//Word Jumble
//The classic word jumble game where the player can ask for a hint.

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    enum fields {WORD, HINT, NUM_FIELDS}; //remember enums start at 0. So Word is index 0, hint 1, etc
    const int NUM_WORDS = 5;
    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
        {"wall", "Do you feel you're banging your head against something?"},
        {"glasses", "That might help you see the answer."},
        {"persistent", "Keep at it."},
        {"jumble", "It's what the game is all about."}
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORDS);
    string theWord = WORDS[choice][WORD];
    string theHint = WORDS[choice][HINT];
    string jumble = theWord; //jumbled version of the word
    
    //word jumble
    int length = jumble.size();
    for(int i=0; i<length; ++i){
        int index1 = (rand() % length);
        int index2 = (rand() % length);
        char temp = jumble[index1];
        jumble[index1] = jumble[index2];  //switch letters in indexes
        jumble[index2] = temp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Enter 'hint' for a hint\n";
    cout << "Enter 'quit' to quit the game.\n\n";
    cout << "The jumble is: " << jumble;

    string guess;
    cout << "\n\nYour guess: ";
    cin >> guess;

    while((guess != theWord) && (guess != "quit")){
        if(guess == "hint"){
            cout << theHint;
        }else {
            cout << "Sorry, that's not it.";
        }

        cout << "\n\nYour guess: ";
        cin >> guess;
    }

    if(guess == theWord){
        cout << "\nThat's it! You guessed it!\n";
    }
    cout << "Thanks for playing.\n";

    return 0;
}

