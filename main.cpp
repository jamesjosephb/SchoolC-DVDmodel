//     TITLE:             Overloading Operaters
//     FILENAME:          main.cpp
//     PREPARED FOR:      CS215 CS13-02
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Oct 9, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#include <iostream>
#include <iomanip>
//#include "DVD.hpp"
#include <memory>
#include "Functions.hpp"


int main(int argc, const char * argv[]) {


    
    // Three unique pointers pointing towards 3 created DVD Objects
    // Resource for help -> http://en.cppreference.com/w/cpp/memory/unique_ptr
    
    unique_ptr<DVD> pDVD1(new DVD);
    unique_ptr<DVD> pDVD2(new DVD);
    unique_ptr<DVD> pDVD3(new DVD);
    
    // These functionsa are explained in there corresponding hpp files
    Display_DVD_Information(pDVD1, pDVD2, pDVD3);
    cout << "For DVD ONE enter the information below. \n";
    pDVD1->LoadInformation();
    cout << "For DVD TWO enter the information below. \n";
    pDVD2->LoadInformation();
    cout << "For DVD THREE enter the information below. \n";
    pDVD3->LoadInformation();
    Display_DVD_Information(pDVD1, pDVD2, pDVD3);
    DisplayTotalAndAverageCosts(pDVD1, pDVD2, pDVD3);
    ChangeDVD(pDVD1);
    ChangeDVD(pDVD2);
    Display_DVD_Information(pDVD1, pDVD2, pDVD3);
    DisplayTotalAndAverageCosts(pDVD1, pDVD2, pDVD3);
    
    
    
    
     return 0;
}



//DVD:        ONE         TWO         THREE
//Title:      Unknown     Unknown     Unknown
//Type:       Unknown     Unknown     Unknown
//Cost:       $0          $0          $0
//
//
//
//For DVD ONE enter the information below.
//Enter the Title of the DVD.
//Title: TitleOne
//
//Enter the DVD type for TitleOne.
//1) Game
//2) Word
//3) Compiler
//4) Spreadsheet
//5) Dbase
//6) Presentation
//Type: 1
//
//Enter the Cost of TitleOne.
//Cost: 2.34
//
//For DVD TWO enter the information below.
//Enter the Title of the DVD.
//Title: TitleTwo
//
//Enter the DVD type for TitleTwo.
//1) Game
//2) Word
//3) Compiler
//4) Spreadsheet
//5) Dbase
//6) Presentation
//Type: compiler
//
//Enter the Cost of TitleTwo.
//Cost: 4.32
//
//For DVD THREE enter the information below.
//Enter the Title of the DVD.
//Title: TitleThree
//
//Enter the DVD type for TitleThree.
//1) Game
//2) Word
//3) Compiler
//4) Spreadsheet
//5) Dbase
//6) Presentation
//Type: Dbase
//
//Enter the Cost of TitleThree.
//Cost: 9.32
//
//DVD:        ONE         TWO         THREE
//Title:      TitleOne    TitleTwo    TitleThree
//Type:       Game        Compiler    Dbase
//Cost:       $2.34       $4.32       $9.32
//
//
//
//The Total cost of the three DVDs is $15.98
//The Average cost of the three DVDs is $5.327
//
//You will be prompted below to change the information of the DVD information.
//
//Current Title is TitleOne.
//Enter new Title: Title1
//
//Current Type is Game.
//Enter new Type: 6
//
//Current Cost is $2.34.
//Enter new Cost: 6.43
//
//
//You will be prompted below to change the information of the DVD information.
//
//Current Title is TitleTwo.
//Enter new Title: OverClock
//
//Current Type is Compiler.
//Enter new Type: 4
//
//Current Cost is $4.32.
//Enter new Cost: 5.43
//
//
//DVD:        ONE         TWO         THREE
//Title:      Title1      OverClock   TitleThree
//Type:       PresentationSpreadsheet Dbase
//Cost:       $6.43       $5.43       $9.32
//
//
//
//The Total cost of the three DVDs is $21.18
//The Average cost of the three DVDs is $7.06
//
//Program ended with exit code: 0


