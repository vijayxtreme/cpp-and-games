//Hero's inventory 3.0
//Demonstrates iterators

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    vector<string>::iterator myIterator;
    vector<string>::const_iterator iter; //read only access

    cout << "Your items:\n";
    for(iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl; //deference operator dereferences a pointer to an address, gives us the value
    }

    cout << "\nYou trade your sword for a battle axe.";
    myIterator = inventory.begin();
    *myIterator = "battle.axe"; //change the value (dereference the pointer)

    cout << "\nYour items:\n";
    for(iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl; 
    }

    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << (*myIterator).size() << " letters in it.\n"; //prints out the size of the string obj myIterator ref to

    cout << "\nThe item name '" << *myIterator << "' has ";
    cout << myIterator->size() << " letters in it.\n"; //same code as deref a pointer

    cout << "\nYou recover a crossbow from a slain enemy.";
    inventory.insert(inventory.begin(), "crossbow");

    cout << "\nYour items:\n";
    for(iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl;
    }

    cout << "\nYour armor is destroyed in a fierce battle.";
    inventory.erase((inventory.begin() + 2));
    cout << "\nYour items:\n";
    for(iter = inventory.begin(); iter != inventory.end(); ++iter){
        cout << *iter << endl;
    }

    return 0;
}