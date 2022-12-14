/*
Name: Brian Nieh, NSHE: 5008139573, CLASS-SECTION: 1005, ASSIGNMENT:3
Description: To set the patients and doctors data; print the bill of a
patient
Input: Develop personType class that can be useful to set first and last
names from personType class; set the patients data using setters or
constructors from patienType class; set the doctors data using setters
or constructors from doctorType class; set the birth date(mm, dd, year)
of a patient from dateType class; set the charges(pharmacy, room rent,
doctor fee) of a patient from billType class
Output: Write output to console; print error messages for Invalid IDs,
missing specialty, invalid biryh month and year;
check the sample output for reference
*/
#include <iostream>
#include "personType.h"
// Creates an object that has a first and last name
//  the parameters are initialized to empty strings
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}
// sets the first and last name from the paramters
void personType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}
// returns first name
string personType::getFirstName() const
{
    return firstName;
}
// returns last name
string personType::getLastName() const
{
    return lastName;
}
// prints first and last name in that order
void personType::print() const
{
    cout << firstName << " " << lastName << '\n';
}