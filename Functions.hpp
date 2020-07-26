//     TITLE:             Overloading Operaters
//     FILENAME:          Functions.hpp
//     PREPARED FOR:      CS215 CS13-02
//     PROGRAMMER:        James Burch
//     DEVELOPMENT DATE:  Oct 9, 2017
//     COMPILER USED:     xcode
//     TARGET PLATFORM:   MacOS

#ifndef Functions_hpp
#define Functions_hpp
#include "DVD.hpp"
#include <stdio.h>

#endif /* Functions_hpp */

// This Displays the three DVD objects info in a pretty format
void Display_DVD_Information(unique_ptr<DVD> & UPtr_DVD1,
                             unique_ptr<DVD> & UPtr_DVD2,
                             unique_ptr<DVD> & UPtr_DVD3);

// This displays the sum and average of the three DVD objects
void DisplayTotalAndAverageCosts(unique_ptr<DVD> & UPtr_DVD1,
                                 unique_ptr<DVD> & UPtr_DVD2,
                                 unique_ptr<DVD> & UPtr_DVD3);

// This prompts the user to edit the information held in the DVD object
void ChangeDVD(unique_ptr<DVD> & UPtr_DVD);

// This takes in a string then add padding " " to the left.
// The second peramter is an int the number of characters of padding
string sPad(string Title , int pad);
