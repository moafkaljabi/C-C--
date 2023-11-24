// MultidimensionalArray.cpp

#include <iostream>
using namespace std;

int main()
{
    bool ships[4][4] =
        {
            // We put "1" to indicate there is a ship.

            {0, 1, 1, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 1},
            {0, 1, 0, 0},
        };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int NumOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4)
    {
        int row, column;

        cout << "Selecting coordinates\n";

        // Ask the player for a row
        cout << " Enter a row number from 0 to 3: ";
        cin >> row;

        // Ask the player for a column
        cout << " Enter a column number from 0 to 3: ";
        cin >> column;

        // Check if a ship exists in those coordinates
        if (ships[row][column])
        {
            // If the player hit a ship, remove it by setting the value to zero.
            ships[row][column] = 0;

            // Increase the hit counter
            hits++;

            // Tell the player that they have hit a ship and how many ships are left
            cout << " That is a hit." << (4 - hits) << "left.\n\n";
        }
        else
        {
            // Tell the player that they missed
            cout << " You missed." << endl;
        }

        // Count how many turns the player has taken
        NumOfTurns++;
    }

    cout << "Victory\n";
    cout << "You won in " << NumOfTurns << " turns\n";

    return 0;
}