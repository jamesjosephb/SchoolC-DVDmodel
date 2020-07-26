//     TITLE:             Overloading Operaters
//     FILENAME:          DVD.cpp
//     PREPARED FOR:      CS215 CS13-02
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Oct 9, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS


#include "DVD.hpp"



// This is a way of initializing. I am keeping it here for future reference.

//DVD::DVD()
//{
//    Title = "Unknown";
//    DVDType = "UnKnown";
//    Cost = 0.0;
//}

// This initializes a DVD object. This does not accept arguments.
DVD::DVD(): DVD("Unknown","Unknown",0.0){}

// This initalizes a DVD object. That accepts arguments.
// The argument are checked by the called set functions.

DVD::DVD(string InTitle, string InDVDType, float InCost)
{
    SetTitle(InTitle);
    SetType(InDVDType);
    SetCost(InCost);
}
//--------------------------------------------------------------------------------

//
void DVD::LoadInformation()
{
    string dvdTitle;
    string dvdType;
    float dvdCost;
    
    cout << "Enter the Title of the DVD. \nTitle: ";
    cin >>  dvdTitle;
    SetTitle(dvdTitle);
    cout << endl;
    
    cout << "Enter the DVD type for " << GetTitle() << "." << endl;
    ListValidDVDTypes();
    cout << "Type: ";
    cin >> dvdType;
    SetType(dvdType);
    cout << endl;
    
    cout << "Enter the Cost of " << GetTitle() << "." << "\nCost: ";
    cin >> dvdCost;
    SetCost(dvdCost);
    cout << endl;
}
//--------------------------------------------------------------------------------


void DVD::SetTitle(string NewTitle)
{
    
    while (NewTitle.empty())
    {
        cout << "Enter the title of the DVD: ";
        cin >> NewTitle;
    }
    Title = NewTitle;
}
//--------------------------------------------------------------------------------


string DVD::GetTitle() const
{
    return Title;
}
//--------------------------------------------------------------------------------
void DVD::SetType(string NewType)
{
    int goodValue = 0;
    while (goodValue == 0)
    {
             if ((NewType == "1") || (NewType == "Game")         || (NewType == "game"))         {DVDType = "Game"; goodValue=1;}
        else if ((NewType == "2") || (NewType == "Word")         || (NewType == "word"))         {DVDType = "Word"; goodValue=1;}
        else if ((NewType == "3") || (NewType == "Compiler")     || (NewType == "compiler"))     {DVDType = "Compiler"; goodValue=1;}
        else if ((NewType == "4") || (NewType == "Spreadsheet")  || (NewType == "spreadsheet"))  {DVDType = "Spreadsheet"; goodValue=1;}
        else if ((NewType == "5") || (NewType == "Dbase")        || (NewType == "dbase"))        {DVDType = "Dbase"; goodValue=1;}
        else if ((NewType == "6") || (NewType == "Presentation") || (NewType == "presentation")) {DVDType = "Presentation"; goodValue=1;}
        else if ((NewType == "Unknown")) {DVDType = "Unknown"; goodValue=1;}
               else
           {
               cout <<"\n     ------- !!! -------\n";
               ListValidDVDTypes();
               cout << "Please select a valid DVD Type by entering the corresponding number. \n Enter DVD Type: ";
               cin >> NewType;
           }
    }
}
//--------------------------------------------------------------------------------


string DVD::GetType() const
{
    return DVDType;
}
//--------------------------------------------------------------------------------


void DVD::SetCost(float NewCost)
{
    // references:
    // http://www.dynamicguru.com/tips/cpp-check-if-input-is-valid-data-type-using-cin-fail/
    // https://stackoverflow.com/questions/10349857/how-to-handle-wrong-data-type-input
    
    while(NewCost < 0.0 || cin.fail())
    {
        cin.clear();                // This clears the error flags
        cin.ignore(999,'\n');       // Not to sure, I need to look into this. But I know this or somthing similiar to this
                                    // command needs to happen in the checking of the buffer and letting user try again
        cout <<"     ------- !!! -------\n"
        << "Invalid Amount! (Connot be a negative number) \nEnter correct cost of DVD: ";
        cin >> NewCost;
    }
    Cost = NewCost;
}
//--------------------------------------------------------------------------------


float DVD::GetCost() const
{
    return Cost;
}

string DVD::PrintCost() const
{
    string displayCost;
    ostringstream convert;
    convert << setprecision(4) << Cost;
    displayCost = "$" + convert.str();
    return  displayCost;

}

//--------------------------------------------------------------------------------


void DVD::ListValidDVDTypes()
{
    cout << "1) Game \n2) Word \n3) Compiler \n4) Spreadsheet \n5) Dbase \n6) Presentation " << endl;
}
//--------------------------------------------------------------------------------


string DVD::TypeSelection(string TypeSel)
{
         if ((TypeSel == "1") || (TypeSel == "Game")         || (TypeSel == "game"))         {return "Game";}
    else if ((TypeSel == "2") || (TypeSel == "Word")         || (TypeSel == "word"))         {return "Word";}
    else if ((TypeSel == "3") || (TypeSel == "Compiler")     || (TypeSel == "compiler"))     {return "Compiler";}
    else if ((TypeSel == "4") || (TypeSel == "Spreadsheet")  || (TypeSel == "spreadsheet"))  {return "Spreadsheet";}
    else if ((TypeSel == "5") || (TypeSel == "Dbase")        || (TypeSel == "dbase"))        {return "Dbase";}
    else if ((TypeSel == "6") || (TypeSel == "Presentation") || (TypeSel == "presentation")) {return "Presentation";}
    else
    {
        cout << "This is not a Valid DVD Type." << endl;
        return "Bad Value";
    }
}
//--------------------------------------------------------------------------------












