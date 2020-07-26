//     TITLE:             Overloading Operaters
//     FILENAME:          DVD.hpp
//     PREPARED FOR:      CS215 CS13-02
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Oct 9, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS


#ifndef DVD_hpp
#define DVD_hpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include <sstream>

#include <stdio.h>

#endif /* DVD_hpp */


class DVD {
    
public:
    DVD();
    
    DVD(string InTitle, string InDVDType, float InCost);
    
    void LoadInformation();
    
    void SetTitle(string NewTitle);
    
    string GetTitle() const;
    
    void SetType(string NewType);
    
    string GetType() const;
    
    void SetCost(float NewCost);
    
    float GetCost() const;
    
    string PrintCost() const;
    
    void ListValidDVDTypes();
    
    string TypeSelection(string TypeSel);
    
    
    
private:
    string Title;
    string DVDType;
    float Cost;


};
