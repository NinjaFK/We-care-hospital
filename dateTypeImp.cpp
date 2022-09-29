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
#include "dateType.h"
// Constructor to set the date
// The member variables dMonth, dDay, and dYear are set
// according to the parameters.
dateType::dateType(int month = 1, int day = 1, int year = 1910)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}
// Function to set the date.
// The member variables dMonth, dDay, and dYear are set
// according to the parameters.
void dateType::setDate(int month, int day, int year)
{
    dMonth = month;
    dDay = day;
    dYear = year;
}
// Function to return the day.
int dateType::getDay() const
{
    return dDay;
}
// Function to return the month.
int dateType::getMonth() const
{
    return dMonth;
}
// Function to return the year.
int dateType::getYear() const
{
    return dYear;
}
// Function to output the date in the form mm-dd-yyyy.
void dateType::printDate() const
{
    std::cout << dMonth << "-" << dDay << "-" << dYear << '\n';
}
