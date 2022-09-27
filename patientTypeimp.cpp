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
#include "patientType.h"

// Parameterized Constructor
// The patient details like ID, first name, last name,
// birthday(dd,mm,yr); doctor details like first name, last name,
// specialty are set according to the parameters passed.
patientType::patientType(string id = "", string fName = "", string lName = "",
                         int bDay = 1, int bMth = 1, int bYear = 1910,
                         string docFrName = "", string docLaName = "", string docSpl = "")
{
}
// Function to setInfo of a patient
// The patient details like ID, first name, last name,
// birthday(dd,mm,yr); doctor details like first name, last name,
// specialty are set according to the parameters passed.
void patientType::setInfo(string id = "", string fName = "", string lName = "",
                          int bDay = 1, int bMth = 1, int bYear = 1910,
                          string docFrName = "", string docLaName = "",
                          string docSpl = "")
{
}
// Function to set the ID according to the parameter.
void patientType::setID(string id)
{
}
// Function to set the birthDate.
// bDay, bMth, bYear are set according to the parameters.
// if none given they are set to the above default values
void patientType::setBirthDate(int bDay = 1, int bMth = 1, int bYear = 1910)
{
}
// Function to set the doctor's first name and last name
// according to the parameters.
void patientType::setDoctorName(string fName = "", string lName = "")
{
}
// Function to set the doctor's specialty according to the parameter
void patientType::setDoctorSpl(string spl = "")
{
}
// Function to return the ID
string patientType::getID() const
{
}
// Function to return the year
int patientType::getBirthYear() const
{
}
// Function to return doctor's first name.
string patientType::getDoctorFName() const
{
}
// Function to output the first name and last name of patient
// Function to output doctors first name, last name, and specialty
// using doctorType object(attendingPhysicain)
void patientType::print() const
{
}