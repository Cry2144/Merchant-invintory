
#include <iostream>


using namespace std;

int sellItem(int coin, int ax, int sword, int shield, int Medkit);

int main()
{
    int coin = 250;

    cout << "Welcome to Jesters" << endl << endl;
    cout << "What cha buying?" << endl << endl;
    cout << "1. Ax: 40 coin" << endl << "2. Sword: 20 coin" << endl;
    cout << "3. Shield: 20 coin" << endl << "4. MedKit: 15 coin" << endl;
    cout << "5. Sell" << endl << "6. Exit" << endl << endl;

    int choice;
    int ax= 1;
    int sword = 1;
    int shield = 1;
    int MedKit = 1;

    cin >> choice;
    cout << endl;

    while (choice != 6)
    {
        switch (choice)
        {
        case 1:
            if (coin >= 40)
            {
                coin = coin - 40;
                ax;
                cout << " ax added to invintory: " << ax << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Ax : 40 coin" << endl << "2. Sword: 20 coin" << endl;
                cout << "3. Shield: 20 coin" << endl << "4. MedKit:15 coin" << endl;
                cout << "5. Sell" << endl << "6. Exit" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "Sorry m8 ,but you dont have the coin." << endl;
                cin >> choice;
            }
            break;
        case 2:
            if (coin >= 20)
            {
                coin = coin - 20;
                sword;
                cout << " sword  added to invintory: " << sword << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "Huh still here awwwgggh?" << endl << endl;
                cout << "1. Ax: 40 coin" << endl << "2. Sword: 20 coin" << endl;
                cout << "3. Shield: 20 coin" << endl << "4. MedKit:15 coin" << endl; 
                cout << "5. Sell" << endl << "6. Exit" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "Sorry m8,but you don't have the coin." << endl;
                cin >> choice;
            }
            break;
        case 3:
            if (coin >= 20)
            {
                coin = coin - 20;
                shield;
                cout << " sheild added to invintory: " << shield << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "oh great come again, whatever?" << endl << endl;
                cout << "1. Ax: 40 coin" << endl << "2. Sword: 20 coin" << endl;
                cout << "3. Shield: 20 coin" << endl << "4. MedKit:15 coin" << endl;
                cout << "5. Sell" << endl << "6. Exit" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "Sorry m8 ,but you don't have the coin." << endl;
                cin >> choice;
            }
            break;
        case 4:
            if (coin >= 20)
            {
                coin = coin - 15;
                MedKit;
                cout << " MedKit added to invintory " << MedKit << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "Are you done yet?" << endl << endl;
                cout << "1. Ax: 40 coin" << endl << "2. Sword: 20 coin" << endl;
                cout << "3. Shield: 20 coin" << endl << "4. MedKit:15 coin" << endl;
                cout << "5. Sell" << endl << "6. Exit" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "Sorry m8 ,but you don't have the coin." << endl;
                cin >> choice;
            }
            break;
        case 5:
            sellItem(coin, ax, sword, shield, MedKit);
            cout << "1. Ax: 40 coin" << endl << "2. Sword: 20 coin" << endl;
            cout << "3. Shield: 20 coin" << endl << "4. MedKit: 15 coin" << endl;
            cout << "5. Sell" << endl << "6. Exit" << endl << endl;
            cin >> choice;
            break;
        default:
            cout << "Shhhhh. I didn't get that." << endl;
            cin >> choice;
        }
    };

    cout << "later ";

    system("PAUSE");
    return EXIT_SUCCESS;
}

int sellItem(int coin, int ax, int sword, int shield, int MedKit)
{
    cout << "whatcha sellen" << endl << endl;
    cout << "1. Ax: 20 coin" << endl << "2. Sword: 10 coin" << endl;
    cout << "3. Shield: 10 coin" << endl << "4. MedKit:5 coin" << endl << "5. Return" << endl << endl;
    int choice;
    cin >> choice;
    cout << endl;

    while (choice != 5)
    {
        switch (choice)
        {
        case 1:
            if (ax > 1)
            {
                coin = coin + 30;
                ax--;

                cout << "An ax was removed from your invintory: " << ax << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "what you want more?" << endl << endl;
                cout << "1. Ax : 30 coin" << endl << "2. Sword: 10 coin" << endl;
                cout << "3. Shield: 10 coin" << endl << "4. MedKit:15 coin" << endl << "5. Return" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "awwgh, it doesn't look like you have an ax to sell.";
                cin >> choice;
            }
            break;
        case 2:
            if (sword > 1)
            {
                coin = coin + 10;
                sword--;

                cout << "An sword was removed from your invintory: " << sword << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Ax : 30 coin" << endl << "2. Sword : 10 coin" << endl;
                cout << "3. Shield : 10 coin" << endl << "4. MedKit:15 coin" << endl << "5. Return" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "nope it doesn't look like you have a sword to sell.";
                cin >> choice;
            }
            break;
        case 3:
            if (shield > 1)
            {
                coin = coin + 30;
                shield--;

                cout << "An sheild was removed from your invintory: " << shield << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Ax: 30 coin" << endl << "2. Sword: 10 coin" << endl;
                cout << "3. Shield: 10 coin" << endl << "4. MedKit:15 coin" << endl << "5. Return" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "Hmmm, it doesn't look like you have a sheild to sell.";
                cin >> choice;
            }
            break;
        case 4:
            if (MedKit > 1)
            {
                coin = coin + 15;
                MedKit;

                cout << "An MedKit was removed from your invintory: " << MedKit << endl;
                cout << "You now have " << coin << " coins." << endl << endl << "Anything else?" << endl << endl;
                cout << "1. Ax: 30 coin" << endl << "2. Sword: 10 coin" << endl;
                cout << "3. Shield: 10 coin" << endl << "4. MedKit:15 coin" << endl << "5. Return" << endl << endl;
                cin >> choice;
            }
            else
            {
                cout << "Hmm no MedKits to sell eh hehehehe.";
                cin >> choice;
            }
            break;

        default:
            cout << "I'm sorry. I didn't get that." << endl;
            cin >> choice;
        }
    }
    return coin, ax, sword, shield, MedKit;
}