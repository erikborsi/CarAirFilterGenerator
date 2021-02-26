#include <iostream>
#include <string>
#include <stack>
using namespace std;


char makeOfCar() {
    int input;
    char makeOfCarCode;
    cout << "HI, WHAT IS THE BRAND OF YOUR CAR?\n";
    cout << "Choose on of the following: \n";
    cout << "1. Ford\n";
    cout << "2. Nissan\n";
    cout << "3. Volvo\n";
    cout << "4. Jaguar\n";
    cout << "5. My car is not on the list - EXIT\n";
    cout << "<------------ Input below -------------->\n";
    cin >> input;
    cout << "<------------ Input above -------------->\n";
    switch (input) {
    case 1:
        makeOfCarCode = 'F';
        cout << "\nFord is choosen\n";
        break;
    case 2:
        makeOfCarCode = 'N';
        cout << "\nNissan is choosen\n";
        break;
    case 3:
        makeOfCarCode = 'V';
        cout << "\nVolvo is choosen\n";
        break;
    case 4:
        makeOfCarCode = 'J';
        cout << "\nJaguar is choosen\n";
        break;
    default:
        cout << "\nWRONG INPUT\n";
        cout << "\nExited the program\n";
        cout << "\nGoodbye!!!\n";
        exit(1);
    }
    return makeOfCarCode;
}

string yearManufactured() {
    int yearManufacturedCode;
    cout << "\n\nWHAT YEAR IF WAS MANUFACTURED?\n";
    cout << "\nLeave the field empty to exit the program\n";
    cout << "<------------ Input below -------------->\n";
    cin >> yearManufacturedCode;
    cout << "<------------ Input above -------------->\n";
    if (yearManufacturedCode >= 1995 and yearManufacturedCode <= 2015) {
        cout << "\nYou entered: " << yearManufacturedCode << endl;
        string yearManufacturedString = to_string(yearManufacturedCode);
        yearManufacturedString.erase(0, 2);
        return yearManufacturedString;
    }
    else
    {
        cout << "\nWe have air filter only from 1995 to 2015\n";
        cout << "\nExited the program\n";
        cout << "\nGoodbye!!!\n";
        exit(1);
    }
}


string cylinderInTheEngine() {
    int input3;
    string cylinderInTheEngineCode;
    cout << "\n\nWHAT IS THE QUANTITY OF CYLINDERS YOUR CAR HAS?\n";
    cout << "Choose on of the following: \n";
    cout << "1. 04 cylinders (Nissan)\n";
    cout << "2. 06 cylinders (Ford, Nissan, Jaguar)\n";
    cout << "3. 08 cylinders (Ford)\n";
    cout << "4. 12 cylinders (Jaguar)\n";
    cout << "5. 15 cylinders (Volvo)\n";
    cout << "6. 20 cylinders (Volvo)\n";
    cout << "7. My car is not on the list - EXIT\n";
    cout << "<------------ Input below -------------->\n";
    cin >> input3;
    cout << "<------------ Input above -------------->\n";
    switch (input3) {
    case 1:
        cylinderInTheEngineCode = "04";
        cout << "\n04 cylinders is choosen\n";
        void validator();
        break;
    case 2:
        cylinderInTheEngineCode = "06";
        cout << "\n06 cylinders is choosen\n";
        void validator();
        break;
    case 3:
        cylinderInTheEngineCode = "08";
        cout << "\n08 cylinders is choosen\n";
        void validator();
        break;
    case 4:
        cylinderInTheEngineCode = "12";
        cout << "\n12 cylinders is choosen\n";
        void validator();
        break;
    case 5:
        cylinderInTheEngineCode = "15";
        cout << "\n15 cylinders is choosen\n";
        void validator();
        break;
    case 6:
        cylinderInTheEngineCode = "20";
        cout << "\n20 cylinders is choosen\n";
        void validator();
        break;
    default:
        cout << "\nWRONG INPUT\n";
        cout << "\nExited the program\n";
        cout << "\nGoodbye!!!\n";
        exit(1);
    }
    return cylinderInTheEngineCode;
}

void validator() {
    char firstBit = makeOfCar();
    string secondBit = yearManufactured();
    string thirdBit = cylinderInTheEngine();

    if (firstBit == 'N' and thirdBit == "04")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'N' and thirdBit == "06")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'F' and thirdBit == "06")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'F' and thirdBit == "08")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'J' and thirdBit == "06")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'J' and thirdBit == "12")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'V' and thirdBit == "15")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";
    }
    else if (firstBit == 'V' and thirdBit == "20")
    {
        cout << "\nThe air filter code for Your car is: " << firstBit << secondBit << thirdBit << endl;
        cout << "Thanks! Goodbye!!!\n";

    }
    else
    {
        cout << "\nYou have entered wrong details into the program" << endl;
        cout << "THE PROGRAM STARTS FROM THE BEGINING" << endl;
        cout << "<----------------------------------------------->\n" << endl;
        validator();
    }
}


int main() {

    validator();

    return 0;
}