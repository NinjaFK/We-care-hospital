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
patientType::patientType(string id, string fName, string lName,
                         int bDay, int bMth, int bYear,
                         string docFrName, string docLaName, string docSpl)
{
    // checks if id is vaild and if not it says who
    if (!checkPatientID(id))
    {
        cout << "Error: " << id << "  is invalid patientID for " << fName << '\n';
    }
    ID = id;
    setName(fName, lName);
    if (bMth < 1 || bMth > 12)
    {
        cout << "Error: Invalid month entry for " << getFirstName() << '\n';
    }
    if (bYear < 1910 || bYear > 2022)
    {
        cout << "Error: Invalid year entry for " << getFirstName() << '\n';
    }
    dateOfBirth = dateType(bMth, bDay, bYear);
    // checks if docpl has a value
    if (docSpl == "")
    {
        cout << "Doctor Specialty is missing for patient " << fName << '\n';
    }
    attendingPhysicain = doctorType(docFrName, docLaName, docSpl);
}
// Function to setInfo of a patient
// The patient details like ID, first name, last name,
// birthday(dd,mm,yr); doctor details like first name, last name,
// specialty are set according to the parameters passed.
void patientType::setInfo(string id, string fName, string lName,
                          int bDay, int bMth, int bYear,
                          string docFrName, string docLaName,
                          string docSpl)
{
    // checks if id is vaild and if not it says who
    if (!checkPatientID(id))
    {
        cout << "Error: " << id << "  is invalid patientID for " << fName << '\n';
    }
    ID = id;
    setName(fName, lName);
    if (bMth < 1 || bMth > 12)
    {
        cout << "Error: Invalid month entry for " << getFirstName() << '\n';
    }
    if (bYear < 1910 || bYear > 2022)
    {
        cout << "Error: Invalid year entry for " << getFirstName() << '\n';
    }
    dateOfBirth.setDate(bMth, bDay, bYear);
    attendingPhysicain.setName(docFrName, docLaName);
    // checks if docpl has a value
    if (docSpl == "")
    {
        cout << "Doctor Specialty is missing for patient " << fName << '\n';
    }
    attendingPhysicain.setSpecialty(docSpl);
}
// Function to set the ID according to the parameter.
void patientType::setID(string id)
{
    if (checkPatientID(id))
    {
        ID = id;
    }
    else
    {
        cout << "SetID invaild id" << '\n';
    }
}
// Function to set the birthDate.
// bDay, bMth, bYear are set according to the parameters.
// if none given they are set to the above default values
void patientType::setBirthDate(int bDay, int bMth, int bYear)
{
    if (bMth < 1 || bMth > 12)
    {
        cout << "Error: Invalid setmonth entry for " << getFirstName() << '\n';
    }
    if (bYear < 1910 || bYear > 2022)
    {
        cout << "Error: Invalid setyear entry for " << getFirstName() << '\n';
    }
    dateOfBirth.setDate(bMth, bDay, bYear);
}
// Function to set the doctor's first name and last name
// according to the parameters.
void patientType::setDoctorName(string fName, string lName)
{
    attendingPhysicain.setName(fName, lName);
}
// Function to set the doctor's specialty according to the parameter
void patientType::setDoctorSpl(string spl)
{
    attendingPhysicain.setSpecialty(spl);
}
// Function to return the ID
string patientType::getID() const
{
    return ID;
}
// Function to return the year
int patientType::getBirthYear() const
{
    return dateOfBirth.getYear();
}
// Function to return doctor's first name.
string patientType::getDoctorFName() const
{
    return attendingPhysicain.getFirstName();
}
// Function to output the first name and last name of patient
// Function to output doctors first name, last name, and specialty
// using doctorType object(attendingPhysicain)
void patientType::print() const
{
    string fName = getFirstName();
    string lName = getLastName();
    string stars;
    string lines;
    stars.append(65, '*');
    lines.append(50, '_');
    cout << '\n'
         << stars << '\n'
         << "Patient: " << fName << " "
         << lName << "\n"
         << "Patient ID: " << ID << '\n'
         << "Attending Physician: Dr."
         << attendingPhysicain.getFirstName() << " "
         << attendingPhysicain.getLastName() << "; Specialty: "
         << attendingPhysicain.getSpecialty() << '\n'
         << lines << '\n'
         << '\n';
}
// Function to check patientID; It has totally 6 characters;
// First character is upper case alphabet; Characters from 2 to 6
// can be digits from 0 to 9;
// Failing to fulfill above conditions should return false else true
bool patientType::checkPatientID(string patientIDTmp) const
{
    if (patientIDTmp.size() != 6)
    {
        return 0;
    }
    if (patientIDTmp[0] < 65 || patientIDTmp[0] > 90)
    {
        return 0;
    }
    for (int i = 1; i < 6; i++)
    {
        if (patientIDTmp[i] < 48 || patientIDTmp[i] > 57)
        {
            return 0;
        }
    }
    return 1;
}