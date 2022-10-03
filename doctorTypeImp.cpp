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
#include "doctorType.h"
// parameterized constructor
// Sets firstName, lastName and specialty according to the parameters
doctorType::doctorType(string first, string last, string spl)
{
    setName(first, last);
    if (spl == "")
    {
        cout << "Specialty is missing for Dr." << first << '\n';
    }
    specialty = spl;
}
// Function to set specialty according to the parameters.
void doctorType::setSpecialty(string spl)
{
    specialty = spl;
}
// Function to return the specialty.
string doctorType::getSpecialty() const
{
    return specialty;
}
// Function to output the doctor's first name, last name and specialty
void doctorType::print() const
{
    string fName = getFirstName();
    string lName = getLastName();
    cout << fName << ", " << lName << "; Specialty: " << specialty;
}