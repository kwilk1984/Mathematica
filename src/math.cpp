/*==============================================================
Program:  Mathematica
Version:  0.1.0
Version Date:  03/13/2021
Author:  Kevin Wilkins
Date:  03/13/2021
Contributor(s):  
Parameters:
This program will perform mathematical computations from basic
to advanced calculations.
==============================================================*/

/*###############################################
Preprocessor directives
###############################################*/
#include <iostream>
#include <iomanip>
#include <cmath>

/*###############################################
Namespaces used
###############################################*/
/* Use the standard namespace - this will eliminate
using 'std::' before 'cin' and 'cout' */
using namespace std;

/*###############################################
Function prototypes
###############################################*/
void ProgramTitle();
void MainMenu();
void QuitProgram();
void BasicCalc();

/*###############################################
Main function
###############################################*/
int main()
{
    /* Clear the terminal prior to executing the
    program title */
    system("clear");

    /* Call the ProgramTitle function */
    ProgramTitle();

    /* Call the MainMenu function */
    MainMenu();
    
	/* Exit the program */
    cout << "Closing application . . ." << endl;
	cin.get();
    return 0;
}

/*###############################################
Program title
###############################################*/
void ProgramTitle()
{
    /* The program title */
    cout << "+++++++++++++++++++++++++++++++++\n" 
    	 << "---------------------------------\n"
    	 << "/////////////////////////////////\n"
    	 << "********** Mathematica **********\n" 
    	 << "/////////////////////////////////\n"
		 << "---------------------------------\n" 
    	 << "+++++++++++++++++++++++++++++++++\n"
         << endl << endl;

    /* The user will press the 'ENTER' to continue
    to the main menu */	
	cout << "Press 'ENTER' to begin\n";
	cin.get();
 	system("clear");
}

/*###############################################
Quit Program
###############################################*/
void QuitProgram()
{
    /* The end user will enter a character 'y' or
    'n' that will stored in variable 'answer' */
    char answer;

    /* Prompt will ask a use if they would like
    to quit the program */
    cout << "Please enter 'y' (yes) or 'n' (no)\n"
        << "Would you like to quit?  ";
    cin >> answer;

    /* The answer will now be evaluated using
    if/else statements */

    /* If the user confirms that they are ready to exit then
	the program will proceed to closing by returning to main()
	and terminating */
    if(answer == 'y') return;

	/* If user chooses they do not want to exit then they will
	be sent back to the main menu. */
    else if(answer == 'n')
    {
        system("clear");
		MainMenu();
    }
}

/*###############################################
Main menu
###############################################*/
void MainMenu()
{
    /* The main menu will consist of calculation
    options.  The option that the end user chooses
    will be stored in a variable 'menuOption'.*/
    int menuOption = 0;

    /* The main menu will be contained in a do-while
    loop that will repeat as long as the menuOption
    does not equal absolute value of the option used
    to exit the program */
    do
    {
        /* Main menu and options */
        cout << "What type of calculation would you like to do?\n\n"
            << "1.  Basic (add, subtract, multiply, divide)\n"
            << "2.  Quit\n\n";
        cout << "Enter your choice (1-2):  " << endl;
        cin >> menuOption;

        /* A switch will now evaluate 'menuOption' and call the
        appropriate function, given the end user's selection */
        switch (menuOption)
        {
        case 1: system("clear");
            BasicCalc();
            break;
        
        case 2: QuitProgram();
            break;
        
        default:system("clear");
            cout << "Invalid choice.  Please try again . . .\n\n";
            break;
        }
    } while (menuOption != abs(2));    
}

void BasicCalc()
{
    system("clear"); // Clear terminal

    /* Find out what type of basic calculation the user wants
    to perform */

    // USE VECTOR TO STORE INPUT
}