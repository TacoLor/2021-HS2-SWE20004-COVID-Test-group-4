#include <iostream>     //Library for inputs/outputs.
#include <fstream>      //Library for inputs/outputs for stream.
#include <string>       //Library for string functionality.
#include <conio.h>      //Library for console input/output.
#include <limits>       //Library for defining numeric limits.
#include <sstream>      //Library for string stream classes.
#include <algorithm>    //Library for functions.

using namespace std;    //Defines scope.

void createPatient();     //Function prototype.
void displayPatient();    //Function prototype.

void createHotSpot();     //Function prototype.
void displayHotSpot();    //Function prototype.

ofstream patientFile;  //Opening a file in write mode.
ofstream hotSpotFile;  //Opening a file in write mode.

int main()  //Main function.
{
    string operation;   //Declearing veriable.
    int op;             //Declearing veriable.
    int i = 0;          //Declearing and assigning veriable.


    do //Do while loop to get into the loop before checking condition.
    {
        operation.clear();  //Clear the string.
        cout << "Press number 1 - Enter a new student details to the record" << endl
            << "Press number 2 - Enter a new staff details to the record" << endl
            << "Press number 3 - Display student record" << endl
            << "Press number 4 - Display staff record" << endl
            << "Press number 5 - Close Programe" << endl
            << "Enter Number: ";        //Output statement.
        getline(cin,operation);         //Read string that user inputs.
        stringstream toNum(operation);  //Object from class stringstream.
        toNum >> op;                    //Object value of operation and stream it to integer op.
        //cout << op << endl;           //for troubleshooting
        //cout << operation << endl;    // for troubleshooting 
    } while (!(1<=op && op<=5));        //Condition to repeat loop if number are outside range.
    
  
    switch(op)  //Switch value using op
    {
        case 1:                             //if op = 1 case 1 will run. 
            createPatient();                //Calling functions.
            break;                          //Break from the case.
        case 2:                             //if op = 2 case 2 will run. 
            createStaff();                  //Calling functions.
            break;                          //Break from the case.
        case 3:                             //if op = 3 case 3 will run. 
            displayPatient();               //Calling functions.
            break;                          //Break from the case.
        case 4:                             //if op = 4 case 4 will run. 
            displayHotSpot();           //Calling functions.
            break;                          //Break from the case.
        default:                            //if none of the cases matches op then this will.
            cout << "Closing..." << endl;   //Output statement.
            break;                          //Break from the case.
    }

    system("pause");    //Pauses batch file.
    return 0;           //Return integer to the functions.
}
