#include <iostream>
using namespace std;
int main() {
    struct Card {
        int face;
        string shape;
        string colour;
    };
    struct Card deck[52] = { 
        {1,"Club","Black"},{2,"Club","Black"},{3,"Club","Black"},{4,"Club","Black"},
        {5,"Club","Black"},{6,"Club","Black"},{7,"Club","Black"},{8,"Club","Black"},
        {9,"Club","Black"},{10,"Club","Black"},{11,"Club","Black"},{12,"Club","Black"},{13,"Club","Black"},
        {1,"Diamond","Red"},{2,"Diamond","Red"},{3,"Diamond","Red"},{4,"Diamond","Red"},
        {5,"Diamond","Red"},{6,"Diamond","Red"},{7,"Diamond","Red"},{8,"Diamond","Red"},
        {9,"Diamond","Red"},{10,"Diamond","Red"},{11,"Diamond","Red"},{12,"Diamond","Red"},{13,"Diamond","Red"},
        {1,"Heart","Red"},{2,"Heart","Red"},{3,"Heart","Red"},{4,"Heart","Red"},
        {5,"Heart","Red"},{6,"Heart","Red"},{7,"Heart","Red"},{8,"Heart","Red"},
        {9,"Heart","Red"},{10,"Heart","Red"},{11,"Heart","Red"},{12,"Heart","Red"},{13,"Heart","Red"},
        {1,"Spade","Black"},{2,"Spade","Black"},{3,"Spade","Black"},{4,"Spade","Black"},
        {5,"Spade","Black"},{6,"Spade","Black"},{7,"Spade","Black"},{8,"Spade","Black"},
        {9,"Spade","Black"},{10,"Spade","Black"},{11,"Spade","Black"},{12,"Spade","Black"},{13,"Spade","Black"} 
    };
    // Example: print all cards
    cout << "Deck of cards:" << endl;
    cout << "----------------" << endl;
    cout << "Face\tShape\tColour" << endl;
    for (int i = 0; i < 52; ++i) {
        cout << deck[i].face << "\t" << deck[i].shape << "\t" << deck[i].colour << endl;
    }
}