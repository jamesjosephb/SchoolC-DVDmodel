//     TITLE:             Overloading Operaters
//     FILENAME:          Functions.cpp
//     PREPARED FOR:      CS215 CS13-02
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Oct 9, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS


#include "Functions.hpp"
#include <iostream>



void Display_DVD_Information(unique_ptr<DVD> & UPtr_DVD1,
                             unique_ptr<DVD> & UPtr_DVD2,
                             unique_ptr<DVD> & UPtr_DVD3)
{
    
    cout << sPad("DVD:", 12);
    cout << sPad("ONE", 12);
    cout << sPad("TWO", 12);
    cout << sPad("THREE", 12) << endl;
    
    cout << sPad("Title:", 12);
    cout << sPad(UPtr_DVD1->GetTitle(), 12);
    cout << sPad(UPtr_DVD2->GetTitle(), 12);
    cout << sPad(UPtr_DVD3->GetTitle(), 12) << endl;
    
    cout << sPad("Type:", 12);
    cout << sPad(UPtr_DVD1->GetType(), 12);
    cout << sPad(UPtr_DVD2->GetType(), 12);
    cout << sPad(UPtr_DVD3->GetType(), 12) << endl;
    
    cout << sPad("Cost:", 12);
    cout << sPad(UPtr_DVD1->PrintCost(), 12);
    cout << sPad(UPtr_DVD2->PrintCost(), 12);
    cout << sPad(UPtr_DVD3->PrintCost(), 12) << endl << endl << endl << endl;

    }

string sPad(string Title , int pad)
{
    while (Title.size() < pad)
        Title.append(" ");
    return Title;
}


void ChangeDVD(unique_ptr<DVD> & UPtr_DVD)
{
    string NewTitle;
    string NewType;
    float NewCost;
    
    cout << "You will be prompted below to change the information of the DVD information." << endl << endl;
    cout << "Current Title is " << UPtr_DVD->GetTitle()<< "." << endl << "Enter new Title: " ;
    cin >> NewTitle;
    UPtr_DVD->SetTitle(NewTitle);
    cout << endl;
    
    cout << "Current Type is " << UPtr_DVD->GetType()<< "." << endl << "Enter new Type: " ;
    cin >> NewType;
    UPtr_DVD->SetType(NewType);
    cout << endl;
    
    cout << "Current Cost is " << UPtr_DVD->PrintCost()<< "." << endl << "Enter new Cost: " ;
    cin >> NewCost;
    UPtr_DVD->SetCost(NewCost);
    cout << endl << endl;
    
}


void DisplayTotalAndAverageCosts(unique_ptr<DVD> & UPtr_DVD1,
                                 unique_ptr<DVD> & UPtr_DVD2,
                                 unique_ptr<DVD> & UPtr_DVD3)
{
    float TotalCost;
    float AverageCost;
    TotalCost = UPtr_DVD1->GetCost() + UPtr_DVD2->GetCost() + UPtr_DVD3->GetCost();
    AverageCost = TotalCost/3;
    
    cout << "The Total cost of the three DVDs is $" << setprecision(4) << TotalCost << endl;
    cout << "The Average cost of the three DVDs is $" << setprecision(4) << AverageCost << endl << endl;;
}



