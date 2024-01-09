#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome To The Game!" << endl;

    string playerName;
    int playerStats[3] = {100, 100, 100};
    string weapons = "-";
    bool gameOver = false;

    cout << "Choose Your Character : " << endl;
    cout << "|| [1] Knight  || " << endl;
    cout << "|| [2] Archer  || " << endl;
    cout << "|| [3] Healer  || " << endl;
    cout << "================== " << endl;
    cout << endl;
    cout << "Option [1-3] : ";
    
    int characterChoice;
    cin >> characterChoice;

    switch (characterChoice) {
        case 1:
            playerName = "Knight";
            break;
        case 2:
            playerName = "Archer";
            break;
        case 3:
            playerName = "Healer";
            break;
        default:
            cout << "Invalid Choice." << endl;
            return 1;
    }

    int actionChoice;
    do {
        cout << endl << "+--------------------------------------+" << endl;
        cout << " Status\t[" << playerName << "]"                  << endl;
        cout << " HP\t[" << playerStats[0] << "]"                  << endl;
        cout << " XP\t[" << playerStats[1] << "]"                  << endl;
        cout << " Coin\t[" << playerStats[2] << "]"                << endl;
        cout << " Weapon\t[" << weapons << "]"                     << endl;
        cout << "+--------------------------------------+" << endl << endl;

        cout << "============ >> Choose Action : ============ >>" << endl;
        cout << "|| [1] Attack (-10 HP, +10 XP)            ||" << endl;
        cout << "|| [2] Heal (+10 Health, +10 XP)          ||" << endl;
        cout << "|| [3] Buy Weapon                         ||" << endl;
        cout << "|| [0] Leave the game                     ||" << endl;
        cout << "=========================================== " << endl << endl;
        cout << "Option [0-3] : ";
        cin >> actionChoice;

        switch (actionChoice) {
            case 1:
                cout << " You Attack The Enemy With " << weapons << endl;
                playerStats[0] -= 10;
                playerStats[1] += 10;
                if (playerStats[0] <= 0) {
                    gameOver = true;
                }
                break;
            case 2:
                cout << "You Are Healed." << endl;
                playerStats[0] += 10;
                playerStats[1] += 10;
                playerStats[2] == 10;
                if (playerStats[0] <= 0) {
                    gameOver = true;
                }
                break;
            case 3:
                cout << endl;
                cout << "+--------------------------------------+" << endl;
                cout << "|                  Shop                |" << endl;
                cout << "+--------------------------------------+" << endl;
                cout << "Weapon Selection:" << endl;
                cout << "[1] Arrow [20 Coin]" << endl;
                cout << "[2] Sword [35 Coin]" << endl;
                cout << endl;
                cout << "Option [1-2] : ";
                int weaponChoice;
                cin >> weaponChoice;

                switch (weaponChoice) {
                    case 1:
                        if (playerStats[2] >= 10) {
                            weapons = "Arrow";
                            playerStats[2] -= 20;
                            cout << "You Bought An Arrow!" << endl;
                        } else {
                            cout << "You Don't Have Enough Coin." << endl;
                        }
                        break;
                    case 2:
                        if (playerStats[2] >= 20) {
                            weapons = "Sword";
                            playerStats[2] -= 35;
                            cout << "You Bought A Sword!" << endl;
                        } else {
                            cout << "You Don't Have Enough Coin." << endl;
                        }
                        break;
                    default:
                        cout << "Invalid Choice." << endl;
                }
                break;
            case 0:
                cout << "Leaving The Game..." << endl;
                cout << "Thank You For Playing!" << endl;
                break;
            default:
                cout << "Invalid Choice." << endl;
        }

    } while (actionChoice != 0 && !gameOver);

    return 0;
}
