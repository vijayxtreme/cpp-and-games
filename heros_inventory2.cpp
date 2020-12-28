//Hero's inventory 2.0
//Demonstrates vectors
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> inventory; //showing off a vector and its built in methods (being a container)
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");

    cout << "You have " << inventory.size() << " items.\n";

    cout << "\nYour items:\n";
    for(unsigned int i=0; i<inventory.size(); ++i){
        cout << inventory[i] << endl;
    }

    cout << "\nYou trade your sword for a battle axe.";
    inventory[0] = "battle axe"; //this is legal so long as we had a value originally using push_back
    cout << "\nYour items:\n";
    for(unsigned int i=0; i<inventory.size(); ++i){
        cout << inventory[i] << endl;
    }

    cout << "\nThe item name '" << inventory[0] << "' has ";
    cout << inventory[0].size() << " letters in it.\n";

    cout << "\nYour shield is destroyed in a fierce battle.";
    inventory.pop_back(); //removes the shield from vector
    cout << "\nYour items:\n";
    for(unsigned int i=0; i<inventory.size(); ++i){
        cout << inventory[i] << endl;
    }

    cout << "\nYou were robbed of all your possessions by a thief";
    inventory.clear();

    if(inventory.empty()){
        cout << "\nYou have nothing.\n";
    }else{
        cout << "\nYou have at least one item.\n";
    }

    return 0;
}
