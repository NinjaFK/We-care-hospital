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
#include <iomanip>
#include "billType.h"
// Default Constructor
// The member variables ID, pharmacyCharges, roomRent, doctorFee,
// have to be initialized; no need to initialize pType here
billType::billType()
{
    ID = "A12345";
    pharmacyCharges = 0.0;
    roomRent = 0.0;
    doctorFee = 0.0;
}
// Parameterized Constructor
// The member variables ID, pharmacyCharges, roomRent, doctorFee,
// are set according to the parameters.
// Also set pType with patientObj
billType::billType(string id, double phCharges, double rRent,
                   double docFee, patientType patientObj)
{
    ID = id;
    pharmacyCharges = phCharges;
    roomRent = rRent;
    doctorFee = docFee;
    pType = patientObj;
}
// Function to setInfo of a bill
// The member variables ID, pharmacyCharges, roomRent, doctorFee,
// are set according to the parameters.
void billType::setInfo(string id, double phCharges, double rRent,
                       double docFee)
{
    ID = id;
    pharmacyCharges = phCharges;
    roomRent = rRent;
    doctorFee = docFee;
}
// Function to setID according to the parameter
void billType::setID(string id)
{
    ID = id;
}
// Function to return pharmacyCharges + roomRent + doctorFee
double billType::billingAmount()
{
    return pharmacyCharges + roomRent + doctorFee;
}
// Function to return the ID.
string billType::getID()
{
    return ID;
}
// Function to output the first name and last name using pType obj
// Function to output Billing details like ID, pharmacyCharges,
// roomRent, doctorFee and finally total charges
void billType::printBill()
{
    string stars;
    stars.append(65, '*');
    pType.print();
    cout << setprecision(2) << fixed
         << "Billing Charges for ID: "
         << ID << '\n'
         << "Pharmacy Charges: "
         << pharmacyCharges << '\n'
         << "Room Charges:     "
         << roomRent << '\n'
         << "Doctor's Fees:    "
         << doctorFee << '\n'
         << "______________________________" << '\n'
         << "Total Charges:    "
         << billingAmount() << '\n'
         << '\n'
         << stars << '\n';
}
