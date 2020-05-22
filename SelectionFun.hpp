// Programmer: Jessmer John Palanca
/*
 * This file has 12 free functions related by the fact that
 * CSC 382 students are reviewing C, functions, and algorithmic
 * patterns such as Guarded Selection, Alternative Selection,
 * and Multiple Selection using C++. You will also be learning
 * std::string objects and messages that you probably did not
 * study in a C course.
 *
 * The functions will specifically use the if and if..else
 * statements written is virtually all languages because these
 * algorithmic patterns occur so frequently while developing software.
 *
 * @author Rick Mercer and YOUR NAME
 */

#ifndef SELECTIONFUN_HPP_
#define SELECTIONFUN_HPP_

#include <string>
#include <iostream>

using namespace std;

/////////////////////////////////////////////////////
// Some Calendar functions with primitive types

/*
 * In the US, Thanksgiving falls on the 4th Thursday of each November.
 *
 * Function thanksDate determines the day of the month that Thanksgiving falls on,
 *    no matter the day on which November begins.
 *
 * November can begin on ANY named day where 1 represents Monday, through 7 that represents Sunday.
 *
 * A valid call would be thanksDate(2) to indicate the first day of November is Tuesday.
 *
 * thanksDate should then return the day of the month upon which Thanksgiving falls,
 *    which is 24 (as shown in the calendar below).
 *
 * Arguments can only be 1 (for Monday) through 7 (for Sunday).
 *
 * If the argument is out of the range of 1 through 7, return -1.
 *
 * thanksDate(2) returns 24 // 1-Nov is Tue
 * thanksDate(5) returns 28 // 1-Nov is Fri
 * thanksDate(7) returns 26 // 1-Nov is Sun
 */
int thanksDate(int d) {
    if (d == 1) {
        return 25;
    } else if (d == 2) {
        return 24;
    } else if (d == 3) {
        return 23;

    } else if (d == 4) {
        return 22;

    } else if (d == 5) {
        return 28;

    } else if (d == 6) {
        return 27;

    } else if (d == 7) {
        return 26;

    }
    return -999;
}

/*
 * Return the std::string "Monday" if the int argument
 * passed to the parameter dayNumber is 1.
 *   return "Unknown" if the argument is not 1 through 7
 *   return "Tuesday" if the argument 2
 *   And so on up through returning "Sunday" if argument == 7

 * dayOfWeek(0) returns "Unknown"
 * dayOfWeek(3) returns "Wednesday"
 * dayOfWeek(4) returns "Thursday"
 * dayOfWeek(6) returns "Saturday"
 * dayOfWeek(8) returns "Unknown"
 */
std::string dayOfWeek(int dayNumber) {
    if (dayNumber == 1) {
        return "Monday";
    } else if (dayNumber == 2) {
        return "Tuesday";
    } else if (dayNumber == 3) {
        return "Wednesday";
    } else if (dayNumber == 4) {
        return "Thursday";
    } else if (dayNumber == 5) {
        return "Friday";
    } else if (dayNumber == 6) {
        return "Saturday";
    } else if (dayNumber == 7) {
        return "Sunday";
    } else {
        return "Unknown";
    }
}


/*
 * Complete function daysInMonth to return the number of
 * days in a month for the given year. There are 30 days in
 * the months September, April, June, and November (or months
 * 9, 4, 6, and 11). All other months 1, 3, 5, 7, 8, 10,
 * and 12 (December) have 31 days.
 *
 * February has 28 days unless it is a leap year when it
 * has 29 (Google leap year definition. Assume the year is
 * always >= 1582, which is the first year in the Gregorian Calendar.
 *
 * Return -1 if month is not in the range of 1 through 12.
 * daysInMonth(1, 2020) returns 31
 * daysInMonth(2, 2019) returns 28
 * daysInMonth(2, 2000) returns 29
 * daysInMonth(2, 2100) returns 28 // 2100 is not a leap year.
 *
 */
int daysInMonth(int m, int year) {

    if (m == 1) {
        return 31;
    } else if (m == 2) {
        if ((year % 4 != 0)) {
            return 28;
        } else if (year % 4 == 0) {
            if ((year % 100 == 0) and (year % 400 == 0)) {
                return 29;
            } else if ((year % 100 == 0) and ((year % 400 != 0))) {
                return 28;
            } else {
                return 29;
            }
        }

    } else if (m == 3) {
        return 31;
    } else if (m == 4) {
        return 30;
    } else if (m == 5) {
        return 31;
    } else if (m == 6) {
        return 30;
    } else if (m == 7) {
        return 31;
    } else if (m == 8) {
        return 31;
    } else if (m == 9) {
        return 30;
    } else if (m == 10) {
        return 31;
    } else if (m == 11) {
        return 30;
    } else if (m == 12) {
        return 31;
    } else {
        return -1;
    }

}


/*
* You are given an integer for the month as on 1 for January
* and 12 is December. You are also given a bool argument.
* When the boolean argument is true, it means the month is
* happening in the northern hemisphere.
* Return the current season in that hemisphere using this table:
*
* month        inNorthernHemisphere   !inNorthernHemisphere
* ============ ====================   =====================
* 12, 1, or 2    "Winter"               "Summer"
*  3, 4, or 5    "Spring"               "Fall"
*  6, 7, or 8    "Summer"               "Winter"
* 9, 10, or 11   "Fall"                "Spring"
*/

std::string season(int month, bool inNorthernHemisphere) {
    if (month == 12 or month == 1 or month == 2) {
        if (inNorthernHemisphere == true) {
            return "Winter";
        } else {
            return "Summer";
        }
    } else if (month == 3 or month == 4 or month == 5) {
        if (inNorthernHemisphere == true) {
            return "Spring";
        } else {
            return "Fall";
        }
    } else if (month == 6 or month == 7 or month == 8) {
        if (inNorthernHemisphere == true) {
            return "Summer";
        } else {
            return "Winter";
        }
    } else if (month == 9 or month == 10 or month == 11) {
        if (inNorthernHemisphere == true) {
            return "Fall";
        } else {
            return "Spring";
        }
    } else {
        return "Under Construction";
    }

}

// Write free function validDate so it returns true if the
// std::string argument is a valid calendar date.
//
// The arguments always take the form of month, day, and year
//    as positive integers separated by / as in "mm/dd/yyyy".
//
// If the std::string argument does not express a proper date, return FALSE.
//
// Use static function std::stoi(std::string possibleInt)
//    that returns the integer value of the std::string argument
//    with the precondition that the std::string argument is a valid integer.

// Example of stoi:
// std::stoi("08") returns 8 and std::stoi("2021") returns 2021.
//
// Examples of valid function returns:
// validDate("01/31/2016") returns true
// validDate("12/31/2017") returns true
// validDate("06/15/2018") returns true
// validDate("02/28/2019") returns true
// validDate("02/29/2019") returns false
// validDate("2019/06/06") returns false
bool validDate(std::string const &date) {
    if (date.length() == 10) {
        if (!(date[2] == '/') and !(date[5] == '/')) {
            return false;
        } else if (date[2] == '/' and date[5] == '/') {
            int mm = stoi(date.substr(0, 2));
            int dd = stoi(date.substr(3, 2));
            int yyyy = stoi(date.substr(6, 4));

            if (mm >= 1 and mm <= 12) {
                if (mm == 1) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 2) {
                    if (dd >= 1 and dd <= 28) {
                        if (!(yyyy & 4 == 0) or ((yyyy % 4 == 0) and (yyyy % 100 == 0) and !(yyyy % 400 == 0))) {
                            return true;
                        } else {
                            return false;
                        }
                    } else if (dd >= 1 and dd <= 29) {
                        if ((yyyy & 4 == 0) or ((yyyy % 4 == 0) and (yyyy % 100 == 0) and (yyyy % 400 == 0))) {
                            return true;
                        } else {
                            return false;
                        }
                    }
                } else if (mm == 3) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 4) {
                    if (dd >= 1 and dd <= 30) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 5) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 6) {
                    if (dd >= 1 and dd <= 30) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 7) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 8) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 9) {
                    if (dd >= 1 and dd <= 30) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 10) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 11) {
                    if (dd >= 1 and dd <= 30) {
                        return true;
                    } else {
                        return false;
                    }
                } else if (mm == 12) {
                    if (dd >= 1 and dd <= 31) {
                        return true;
                    } else {
                        return false;
                    }
                }
            } else {
                return false;
            }
        } else { return false; }

    } else {
        return false;
    }
}

// Complete function dayNumber.
// Return how many days a valid date is into the year.
//
// If the std::string argument is not a value date, return -1.
//
// dayNumber("01/03/2016")returns 3
// dayNumber("12/31/2017")returns 365
// dayNumber("12/31/2020") returns 366
// dayNumber("13/11/2020") returns -1
int dayNumber(std::string const &date) {
    if (date.length() == 10) {
        if ((date[2] != '/') and (date[5] != '/')) {
            return -1;
        } else if (date[2] == '/' and date[5] == '/') {
            int mm = stoi(date.substr(0, 2));
            int dd = stoi(date.substr(3, 2));
            int yyyy = stoi(date.substr(6, 4));

            if ((yyyy % 4 == 0) or ((yyyy % 4 == 0) and (yyyy % 100 == 0) and (yyyy % 400 == 0))) {   //leap year
                if (mm == 01) {
                    if (dd == 1) {
                        return 1;
                    } else if (dd == 2) {
                        return 2;
                    } else if (dd == 3) {
                        return 3;
                    } else if (dd == 4) {
                        return 4;
                    } else if (dd == 5) {
                        return 5;
                    } else if (dd == 6) {
                        return 6;
                    } else if (dd == 7) {
                        return 7;
                    } else if (dd == 8) {
                        return 8;
                    } else if (dd == 9) {
                        return 9;
                    } else if (dd == 10) {
                        return 10;
                    } else if (dd == 11) {
                        return 11;
                    } else if (dd == 12) {
                        return 12;
                    } else if (dd == 13) {
                        return 13;
                    } else if (dd == 14) {
                        return 14;
                    } else if (dd == 15) {
                        return 15;
                    } else if (dd == 16) {
                        return 16;
                    } else if (dd == 17) {
                        return 17;
                    } else if (dd == 18) {
                        return 18;
                    } else if (dd == 19) {
                        return 19;
                    } else if (dd == 20) {
                        return 20;
                    } else if (dd == 21) {
                        return 21;
                    } else if (dd == 22) {
                        return 22;
                    } else if (dd == 23) {
                        return 23;
                    } else if (dd == 24) {
                        return 24;
                    } else if (dd == 25) {
                        return 25;
                    } else if (dd == 26) {
                        return 26;
                    } else if (dd == 27) {
                        return 27;
                    } else if (dd == 28) {
                        return 28;
                    } else if (dd == 29) {
                        return 29;
                    } else if (dd == 30) {
                        return 30;
                    } else if (dd == 31) {
                        return 31;
                    } else {
                        return -1;
                    }
                } else if (mm == 2) {
                    if (dd == 1) {
                        return 32;
                    } else if (dd == 2) {
                        return 33;
                    } else if (dd == 3) {
                        return 34;
                    } else if (dd == 4) {
                        return 35;
                    } else if (dd == 5) {
                        return 36;
                    } else if (dd == 6) {
                        return 37;
                    } else if (dd == 7) {
                        return 38;
                    } else if (dd == 8) {
                        return 39;
                    } else if (dd == 9) {
                        return 40;
                    } else if (dd == 10) {
                        return 41;
                    } else if (dd == 11) {
                        return 42;
                    } else if (dd == 12) {
                        return 43;
                    } else if (dd == 13) {
                        return 44;
                    } else if (dd == 14) {
                        return 45;
                    } else if (dd == 15) {
                        return 46;
                    } else if (dd == 16) {
                        return 47;
                    } else if (dd == 17) {
                        return 48;
                    } else if (dd == 18) {
                        return 49;
                    } else if (dd == 19) {
                        return 50;
                    } else if (dd == 20) {
                        return 51;
                    } else if (dd == 21) {
                        return 52;
                    } else if (dd == 22) {
                        return 53;
                    } else if (dd == 23) {
                        return 54;
                    } else if (dd == 24) {
                        return 55;
                    } else if (dd == 25) {
                        return 56;
                    } else if (dd == 26) {
                        return 57;
                    } else if (dd == 27) {
                        return 58;
                    } else if (dd == 28) {
                        return 59;
                    } else if (dd == 29) {
                        return 60;
                    } else {
                        return -1;
                    }
                } else if (mm == 3) {
                    if (dd == 1) {
                        return 61;
                    } else if (dd == 2) {
                        return 62;
                    } else if (dd == 3) {
                        return 63;
                    } else if (dd == 4) {
                        return 64;
                    } else if (dd == 5) {
                        return 65;
                    } else if (dd == 6) {
                        return 66;
                    } else if (dd == 7) {
                        return 67;
                    } else if (dd == 8) {
                        return 68;
                    } else if (dd == 9) {
                        return 69;
                    } else if (dd == 10) {
                        return 70;
                    } else if (dd == 11) {
                        return 71;
                    } else if (dd == 12) {
                        return 72;
                    } else if (dd == 13) {
                        return 73;
                    } else if (dd == 14) {
                        return 74;
                    } else if (dd == 15) {
                        return 75;
                    } else if (dd == 16) {
                        return 76;
                    } else if (dd == 17) {
                        return 77;
                    } else if (dd == 18) {
                        return 78;
                    } else if (dd == 19) {
                        return 79;
                    } else if (dd == 20) {
                        return 80;
                    } else if (dd == 21) {
                        return 81;
                    } else if (dd == 22) {
                        return 82;
                    } else if (dd == 23) {
                        return 83;
                    } else if (dd == 24) {
                        return 84;
                    } else if (dd == 25) {
                        return 85;
                    } else if (dd == 26) {
                        return 86;
                    } else if (dd == 27) {
                        return 87;
                    } else if (dd == 28) {
                        return 88;
                    } else if (dd == 29) {
                        return 89;
                    } else if (dd == 30) {
                        return 90;
                    } else if (dd == 31) {
                        return 91;
                    } else {
                        return -1;
                    }
                } else if (mm == 4) {
                    if (dd == 1) {
                        return 92;
                    } else if (dd == 2) {
                        return 93;
                    } else if (dd == 3) {
                        return 94;
                    } else if (dd == 4) {
                        return 95;
                    } else if (dd == 5) {
                        return 96;
                    } else if (dd == 6) {
                        return 97;
                    } else if (dd == 7) {
                        return 98;
                    } else if (dd == 8) {
                        return 99;
                    } else if (dd == 9) {
                        return 100;
                    } else if (dd == 10) {
                        return 101;
                    } else if (dd == 11) {
                        return 102;
                    } else if (dd == 12) {
                        return 103;
                    } else if (dd == 13) {
                        return 104;
                    } else if (dd == 14) {
                        return 105;
                    } else if (dd == 15) {
                        return 106;
                    } else if (dd == 16) {
                        return 107;
                    } else if (dd == 17) {
                        return 108;
                    } else if (dd == 18) {
                        return 109;
                    } else if (dd == 19) {
                        return 110;
                    } else if (dd == 20) {
                        return 111;
                    } else if (dd == 21) {
                        return 112;
                    } else if (dd == 22) {
                        return 113;
                    } else if (dd == 23) {
                        return 114;
                    } else if (dd == 24) {
                        return 115;
                    } else if (dd == 25) {
                        return 116;
                    } else if (dd == 26) {
                        return 117;
                    } else if (dd == 27) {
                        return 118;
                    } else if (dd == 28) {
                        return 119;
                    } else if (dd == 29) {
                        return 120;
                    } else if (dd == 30) {
                        return 121;
                    } else {
                        return -1;
                    }
                } else if (mm == 5) {
                    if (dd == 1) {
                        return 122;
                    } else if (dd == 2) {
                        return 123;
                    } else if (dd == 3) {
                        return 124;
                    } else if (dd == 4) {
                        return 125;
                    } else if (dd == 5) {
                        return 126;
                    } else if (dd == 6) {
                        return 127;
                    } else if (dd == 7) {
                        return 128;
                    } else if (dd == 8) {
                        return 129;
                    } else if (dd == 9) {
                        return 130;
                    } else if (dd == 10) {
                        return 131;
                    } else if (dd == 11) {
                        return 132;
                    } else if (dd == 12) {
                        return 133;
                    } else if (dd == 13) {
                        return 134;
                    } else if (dd == 14) {
                        return 135;
                    } else if (dd == 15) {
                        return 136;
                    } else if (dd == 16) {
                        return 137;
                    } else if (dd == 17) {
                        return 138;
                    } else if (dd == 18) {
                        return 139;
                    } else if (dd == 19) {
                        return 140;
                    } else if (dd == 20) {
                        return 141;
                    } else if (dd == 21) {
                        return 142;
                    } else if (dd == 22) {
                        return 143;
                    } else if (dd == 23) {
                        return 144;
                    } else if (dd == 24) {
                        return 145;
                    } else if (dd == 25) {
                        return 146;
                    } else if (dd == 26) {
                        return 147;
                    } else if (dd == 27) {
                        return 148;
                    } else if (dd == 28) {
                        return 149;
                    } else if (dd == 29) {
                        return 150;
                    } else if (dd == 30) {
                        return 151;
                    } else if (dd == 31) {
                        return 152;
                    } else {
                        return -1;
                    }
                } else if (mm == 6) {
                    if (dd == 1) {
                        return 153;
                    } else if (dd == 2) {
                        return 154;
                    } else if (dd == 3) {
                        return 155;
                    } else if (dd == 4) {
                        return 156;
                    } else if (dd == 5) {
                        return 157;
                    } else if (dd == 6) {
                        return 158;
                    } else if (dd == 7) {
                        return 159;
                    } else if (dd == 8) {
                        return 160;
                    } else if (dd == 9) {
                        return 161;
                    } else if (dd == 10) {
                        return 162;
                    } else if (dd == 11) {
                        return 163;
                    } else if (dd == 12) {
                        return 164;
                    } else if (dd == 13) {
                        return 165;
                    } else if (dd == 14) {
                        return 166;
                    } else if (dd == 15) {
                        return 167;
                    } else if (dd == 16) {
                        return 168;
                    } else if (dd == 17) {
                        return 169;
                    } else if (dd == 18) {
                        return 170;
                    } else if (dd == 19) {
                        return 171;
                    } else if (dd == 20) {
                        return 172;
                    } else if (dd == 21) {
                        return 173;
                    } else if (dd == 22) {
                        return 174;
                    } else if (dd == 23) {
                        return 175;
                    } else if (dd == 24) {
                        return 176;
                    } else if (dd == 25) {
                        return 177;
                    } else if (dd == 26) {
                        return 178;
                    } else if (dd == 27) {
                        return 179;
                    } else if (dd == 28) {
                        return 180;
                    } else if (dd == 29) {
                        return 181;
                    } else if (dd == 30) {
                        return 182;
                    } else {
                        return -1;
                    }
                } else if (mm == 7) {
                    if (dd == 1) {
                        return 183;
                    } else if (dd == 2) {
                        return 184;
                    } else if (dd == 3) {
                        return 185;
                    } else if (dd == 4) {
                        return 186;
                    } else if (dd == 5) {
                        return 187;
                    } else if (dd == 6) {
                        return 188;
                    } else if (dd == 7) {
                        return 189;
                    } else if (dd == 8) {
                        return 190;
                    } else if (dd == 9) {
                        return 191;
                    } else if (dd == 10) {
                        return 192;
                    } else if (dd == 11) {
                        return 193;
                    } else if (dd == 12) {
                        return 194;
                    } else if (dd == 13) {
                        return 195;
                    } else if (dd == 14) {
                        return 196;
                    } else if (dd == 15) {
                        return 197;
                    } else if (dd == 16) {
                        return 198;
                    } else if (dd == 17) {
                        return 199;
                    } else if (dd == 18) {
                        return 200;
                    } else if (dd == 19) {
                        return 201;
                    } else if (dd == 20) {
                        return 202;
                    } else if (dd == 21) {
                        return 203;
                    } else if (dd == 22) {
                        return 204;
                    } else if (dd == 23) {
                        return 205;
                    } else if (dd == 24) {
                        return 206;
                    } else if (dd == 25) {
                        return 207;
                    } else if (dd == 26) {
                        return 208;
                    } else if (dd == 27) {
                        return 209;
                    } else if (dd == 28) {
                        return 210;
                    } else if (dd == 29) {
                        return 211;
                    } else if (dd == 30) {
                        return 212;
                    } else if (dd == 31) {
                        return 213;
                    } else {
                        return -1;
                    }
                } else if (mm == 8) {
                    if (dd == 1) {
                        return 214;
                    } else if (dd == 2) {
                        return 215;
                    } else if (dd == 3) {
                        return 216;
                    } else if (dd == 4) {
                        return 217;
                    } else if (dd == 5) {
                        return 218;
                    } else if (dd == 6) {
                        return 219;
                    } else if (dd == 7) {
                        return 220;
                    } else if (dd == 8) {
                        return 221;
                    } else if (dd == 9) {
                        return 222;
                    } else if (dd == 10) {
                        return 223;
                    } else if (dd == 11) {
                        return 224;
                    } else if (dd == 12) {
                        return 225;
                    } else if (dd == 13) {
                        return 226;
                    } else if (dd == 14) {
                        return 227;
                    } else if (dd == 15) {
                        return 228;
                    } else if (dd == 16) {
                        return 229;
                    } else if (dd == 17) {
                        return 230;
                    } else if (dd == 18) {
                        return 231;
                    } else if (dd == 19) {
                        return 232;
                    } else if (dd == 20) {
                        return 233;
                    } else if (dd == 21) {
                        return 234;
                    } else if (dd == 22) {
                        return 235;
                    } else if (dd == 23) {
                        return 236;
                    } else if (dd == 24) {
                        return 237;
                    } else if (dd == 25) {
                        return 238;
                    } else if (dd == 26) {
                        return 239;
                    } else if (dd == 27) {
                        return 240;
                    } else if (dd == 28) {
                        return 241;
                    } else if (dd == 29) {
                        return 242;
                    } else if (dd == 30) {
                        return 243;
                    } else if (dd == 31) {
                        return 244;
                    } else {
                        return -1;
                    }
                } else if (mm == 9) {
                    if (dd == 1) {
                        return 245;
                    } else if (dd == 2) {
                        return 246;
                    } else if (dd == 3) {
                        return 247;
                    } else if (dd == 4) {
                        return 248;
                    } else if (dd == 5) {
                        return 249;
                    } else if (dd == 6) {
                        return 250;
                    } else if (dd == 7) {
                        return 251;
                    } else if (dd == 8) {
                        return 252;
                    } else if (dd == 9) {
                        return 253;
                    } else if (dd == 10) {
                        return 254;
                    } else if (dd == 11) {
                        return 255;
                    } else if (dd == 12) {
                        return 256;
                    } else if (dd == 13) {
                        return 257;
                    } else if (dd == 14) {
                        return 258;
                    } else if (dd == 15) {
                        return 259;
                    } else if (dd == 16) {
                        return 260;
                    } else if (dd == 17) {
                        return 261;
                    } else if (dd == 18) {
                        return 262;
                    } else if (dd == 19) {
                        return 263;
                    } else if (dd == 20) {
                        return 264;
                    } else if (dd == 21) {
                        return 265;
                    } else if (dd == 22) {
                        return 266;
                    } else if (dd == 23) {
                        return 267;
                    } else if (dd == 24) {
                        return 268;
                    } else if (dd == 25) {
                        return 269;
                    } else if (dd == 26) {
                        return 270;
                    } else if (dd == 27) {
                        return 271;
                    } else if (dd == 28) {
                        return 272;
                    } else if (dd == 29) {
                        return 273;
                    } else if (dd == 30) {
                        return 274;
                    } else {
                        return -1;
                    }
                } else if (mm == 10) {
                    if (dd == 1) {
                        return 275;
                    } else if (dd == 2) {
                        return 276;
                    } else if (dd == 3) {
                        return 277;
                    } else if (dd == 4) {
                        return 278;
                    } else if (dd == 5) {
                        return 279;
                    } else if (dd == 6) {
                        return 280;
                    } else if (dd == 7) {
                        return 281;
                    } else if (dd == 8) {
                        return 282;
                    } else if (dd == 9) {
                        return 283;
                    } else if (dd == 10) {
                        return 284;
                    } else if (dd == 11) {
                        return 285;
                    } else if (dd == 12) {
                        return 286;
                    } else if (dd == 13) {
                        return 287;
                    } else if (dd == 14) {
                        return 288;
                    } else if (dd == 15) {
                        return 289;
                    } else if (dd == 16) {
                        return 290;
                    } else if (dd == 17) {
                        return 291;
                    } else if (dd == 18) {
                        return 292;
                    } else if (dd == 19) {
                        return 293;
                    } else if (dd == 20) {
                        return 294;
                    } else if (dd == 21) {
                        return 295;
                    } else if (dd == 22) {
                        return 296;
                    } else if (dd == 23) {
                        return 297;
                    } else if (dd == 24) {
                        return 298;
                    } else if (dd == 25) {
                        return 299;
                    } else if (dd == 26) {
                        return 300;
                    } else if (dd == 27) {
                        return 301;
                    } else if (dd == 28) {
                        return 302;
                    } else if (dd == 29) {
                        return 303;
                    } else if (dd == 30) {
                        return 304;
                    } else if (dd == 31) {
                        return 305;
                    } else {
                        return -1;
                    }
                } else if (mm == 11) {
                    if (dd == 1) {
                        return 306;
                    } else if (dd == 2) {
                        return 307;
                    } else if (dd == 3) {
                        return 308;
                    } else if (dd == 4) {
                        return 309;
                    } else if (dd == 5) {
                        return 310;
                    } else if (dd == 6) {
                        return 311;
                    } else if (dd == 7) {
                        return 312;
                    } else if (dd == 8) {
                        return 313;
                    } else if (dd == 9) {
                        return 314;
                    } else if (dd == 10) {
                        return 315;
                    } else if (dd == 11) {
                        return 316;
                    } else if (dd == 12) {
                        return 317;
                    } else if (dd == 13) {
                        return 318;
                    } else if (dd == 14) {
                        return 319;
                    } else if (dd == 15) {
                        return 320;
                    } else if (dd == 16) {
                        return 321;
                    } else if (dd == 17) {
                        return 322;
                    } else if (dd == 18) {
                        return 323;
                    } else if (dd == 19) {
                        return 324;
                    } else if (dd == 20) {
                        return 325;
                    } else if (dd == 21) {
                        return 326;
                    } else if (dd == 22) {
                        return 327;
                    } else if (dd == 23) {
                        return 328;
                    } else if (dd == 24) {
                        return 329;
                    } else if (dd == 25) {
                        return 330;
                    } else if (dd == 26) {
                        return 331;
                    } else if (dd == 27) {
                        return 332;
                    } else if (dd == 28) {
                        return 333;
                    } else if (dd == 29) {
                        return 334;
                    } else if (dd == 30) {
                        return 335;
                    } else {
                        return -1;
                    }
                } else if (mm == 12) {
                    if (dd == 1) {
                        return 336;
                    } else if (dd == 2) {
                        return 337;
                    } else if (dd == 3) {
                        return 338;
                    } else if (dd == 4) {
                        return 339;
                    } else if (dd == 5) {
                        return 340;
                    } else if (dd == 6) {
                        return 341;
                    } else if (dd == 7) {
                        return 342;
                    } else if (dd == 8) {
                        return 343;
                    } else if (dd == 9) {
                        return 344;
                    } else if (dd == 10) {
                        return 345;
                    } else if (dd == 11) {
                        return 346;
                    } else if (dd == 12) {
                        return 347;
                    } else if (dd == 13) {
                        return 348;
                    } else if (dd == 14) {
                        return 349;
                    } else if (dd == 15) {
                        return 350;
                    } else if (dd == 16) {
                        return 351;
                    } else if (dd == 17) {
                        return 352;
                    } else if (dd == 18) {
                        return 353;
                    } else if (dd == 19) {
                        return 354;
                    } else if (dd == 20) {
                        return 355;
                    } else if (dd == 21) {
                        return 356;
                    } else if (dd == 22) {
                        return 357;
                    } else if (dd == 23) {
                        return 358;
                    } else if (dd == 24) {
                        return 359;
                    } else if (dd == 25) {
                        return 360;
                    } else if (dd == 26) {
                        return 361;
                    } else if (dd == 27) {
                        return 362;
                    } else if (dd == 28) {
                        return 363;
                    } else if (dd == 29) {
                        return 364;
                    } else if (dd == 30) {
                        return 365;
                    } else if (dd == 31) {
                        return 366;
                    } else {
                        return -1;
                    }
                } else {
                    return -1;
                }
            } else if ((yyyy % 4 != 0) or
                       (yyyy % 4 == 0 and yyyy % 100 == 0 and (yyyy % 400 != 0))) {   //not a leap year
                if (mm == 01) {
                    if (dd == 1) {
                        return 1;
                    } else if (dd == 2) {
                        return 2;
                    } else if (dd == 3) {
                        return 3;
                    } else if (dd == 4) {
                        return 4;
                    } else if (dd == 5) {
                        return 5;
                    } else if (dd == 6) {
                        return 6;
                    } else if (dd == 7) {
                        return 7;
                    } else if (dd == 8) {
                        return 8;
                    } else if (dd == 9) {
                        return 9;
                    } else if (dd == 10) {
                        return 10;
                    } else if (dd == 11) {
                        return 11;
                    } else if (dd == 12) {
                        return 12;
                    } else if (dd == 13) {
                        return 13;
                    } else if (dd == 14) {
                        return 14;
                    } else if (dd == 15) {
                        return 15;
                    } else if (dd == 16) {
                        return 16;
                    } else if (dd == 17) {
                        return 17;
                    } else if (dd == 18) {
                        return 18;
                    } else if (dd == 19) {
                        return 19;
                    } else if (dd == 20) {
                        return 20;
                    } else if (dd == 21) {
                        return 21;
                    } else if (dd == 22) {
                        return 22;
                    } else if (dd == 23) {
                        return 23;
                    } else if (dd == 24) {
                        return 24;
                    } else if (dd == 25) {
                        return 25;
                    } else if (dd == 26) {
                        return 26;
                    } else if (dd == 27) {
                        return 27;
                    } else if (dd == 28) {
                        return 28;
                    } else if (dd == 29) {
                        return 29;
                    } else if (dd == 30) {
                        return 30;
                    } else if (dd == 31) {
                        return 31;
                    } else {
                        return -1;
                    }
                } else if (mm == 2) {
                    if (dd == 1) {
                        return 32;
                    } else if (dd == 2) {
                        return 33;
                    } else if (dd == 3) {
                        return 34;
                    } else if (dd == 4) {
                        return 35;
                    } else if (dd == 5) {
                        return 36;
                    } else if (dd == 6) {
                        return 37;
                    } else if (dd == 7) {
                        return 38;
                    } else if (dd == 8) {
                        return 39;
                    } else if (dd == 9) {
                        return 40;
                    } else if (dd == 10) {
                        return 41;
                    } else if (dd == 11) {
                        return 42;
                    } else if (dd == 12) {
                        return 43;
                    } else if (dd == 13) {
                        return 44;
                    } else if (dd == 14) {
                        return 45;
                    } else if (dd == 15) {
                        return 46;
                    } else if (dd == 16) {
                        return 47;
                    } else if (dd == 17) {
                        return 48;
                    } else if (dd == 18) {
                        return 49;
                    } else if (dd == 19) {
                        return 50;
                    } else if (dd == 20) {
                        return 51;
                    } else if (dd == 21) {
                        return 52;
                    } else if (dd == 22) {
                        return 53;
                    } else if (dd == 23) {
                        return 54;
                    } else if (dd == 24) {
                        return 55;
                    } else if (dd == 25) {
                        return 56;
                    } else if (dd == 26) {
                        return 57;
                    } else if (dd == 27) {
                        return 58;
                    } else if (dd == 28) {
                        return 59;
                    } else {
                        return -1;
                    }
                } else if (mm == 3) {
                    if (dd == 1) {
                        return 60;
                    } else if (dd == 2) {
                        return 61;
                    } else if (dd == 3) {
                        return 62;
                    } else if (dd == 4) {
                        return 63;
                    } else if (dd == 5) {
                        return 64;
                    } else if (dd == 6) {
                        return 65;
                    } else if (dd == 7) {
                        return 66;
                    } else if (dd == 8) {
                        return 67;
                    } else if (dd == 9) {
                        return 68;
                    } else if (dd == 10) {
                        return 69;
                    } else if (dd == 11) {
                        return 70;
                    } else if (dd == 12) {
                        return 71;
                    } else if (dd == 13) {
                        return 72;
                    } else if (dd == 14) {
                        return 73;
                    } else if (dd == 15) {
                        return 74;
                    } else if (dd == 16) {
                        return 75;
                    } else if (dd == 17) {
                        return 76;
                    } else if (dd == 18) {
                        return 77;
                    } else if (dd == 19) {
                        return 78;
                    } else if (dd == 20) {
                        return 79;
                    } else if (dd == 21) {
                        return 80;
                    } else if (dd == 22) {
                        return 81;
                    } else if (dd == 23) {
                        return 82;
                    } else if (dd == 24) {
                        return 83;
                    } else if (dd == 25) {
                        return 84;
                    } else if (dd == 26) {
                        return 85;
                    } else if (dd == 27) {
                        return 86;
                    } else if (dd == 28) {
                        return 87;
                    } else if (dd == 29) {
                        return 88;
                    } else if (dd == 30) {
                        return 89;
                    } else if (dd == 31) {
                        return 90;
                    } else {
                        return -1;
                    }
                } else if (mm == 4) {
                    if (dd == 1) {
                        return 91;
                    } else if (dd == 2) {
                        return 92;
                    } else if (dd == 3) {
                        return 93;
                    } else if (dd == 4) {
                        return 94;
                    } else if (dd == 5) {
                        return 95;
                    } else if (dd == 6) {
                        return 96;
                    } else if (dd == 7) {
                        return 97;
                    } else if (dd == 8) {
                        return 98;
                    } else if (dd == 9) {
                        return 99;
                    } else if (dd == 10) {
                        return 100;
                    } else if (dd == 11) {
                        return 101;
                    } else if (dd == 12) {
                        return 102;
                    } else if (dd == 13) {
                        return 103;
                    } else if (dd == 14) {
                        return 104;
                    } else if (dd == 15) {
                        return 105;
                    } else if (dd == 16) {
                        return 106;
                    } else if (dd == 17) {
                        return 107;
                    } else if (dd == 18) {
                        return 108;
                    } else if (dd == 19) {
                        return 109;
                    } else if (dd == 20) {
                        return 110;
                    } else if (dd == 21) {
                        return 111;
                    } else if (dd == 22) {
                        return 112;
                    } else if (dd == 23) {
                        return 113;
                    } else if (dd == 24) {
                        return 114;
                    } else if (dd == 25) {
                        return 115;
                    } else if (dd == 26) {
                        return 116;
                    } else if (dd == 27) {
                        return 117;
                    } else if (dd == 28) {
                        return 118;
                    } else if (dd == 29) {
                        return 119;
                    } else if (dd == 30) {
                        return 120;
                    } else {
                        return -1;
                    }
                } else if (mm == 5) {
                    if (dd == 1) {
                        return 121;
                    } else if (dd == 2) {
                        return 122;
                    } else if (dd == 3) {
                        return 123;
                    } else if (dd == 4) {
                        return 124;
                    } else if (dd == 5) {
                        return 125;
                    } else if (dd == 6) {
                        return 126;
                    } else if (dd == 7) {
                        return 127;
                    } else if (dd == 8) {
                        return 128;
                    } else if (dd == 9) {
                        return 129;
                    } else if (dd == 10) {
                        return 130;
                    } else if (dd == 11) {
                        return 131;
                    } else if (dd == 12) {
                        return 132;
                    } else if (dd == 13) {
                        return 133;
                    } else if (dd == 14) {
                        return 134;
                    } else if (dd == 15) {
                        return 135;
                    } else if (dd == 16) {
                        return 136;
                    } else if (dd == 17) {
                        return 137;
                    } else if (dd == 18) {
                        return 138;
                    } else if (dd == 19) {
                        return 139;
                    } else if (dd == 20) {
                        return 140;
                    } else if (dd == 21) {
                        return 141;
                    } else if (dd == 22) {
                        return 142;
                    } else if (dd == 23) {
                        return 143;
                    } else if (dd == 24) {
                        return 144;
                    } else if (dd == 25) {
                        return 145;
                    } else if (dd == 26) {
                        return 146;
                    } else if (dd == 27) {
                        return 147;
                    } else if (dd == 28) {
                        return 148;
                    } else if (dd == 29) {
                        return 149;
                    } else if (dd == 30) {
                        return 150;
                    } else if (dd == 31) {
                        return 151;
                    } else {
                        return -1;
                    }
                } else if (mm == 6) {
                    if (dd == 1) {
                        return 152;
                    } else if (dd == 2) {
                        return 153;
                    } else if (dd == 3) {
                        return 154;
                    } else if (dd == 4) {
                        return 155;
                    } else if (dd == 5) {
                        return 156;
                    } else if (dd == 6) {
                        return 157;
                    } else if (dd == 7) {
                        return 158;
                    } else if (dd == 8) {
                        return 159;
                    } else if (dd == 9) {
                        return 160;
                    } else if (dd == 10) {
                        return 161;
                    } else if (dd == 11) {
                        return 162;
                    } else if (dd == 12) {
                        return 163;
                    } else if (dd == 13) {
                        return 164;
                    } else if (dd == 14) {
                        return 165;
                    } else if (dd == 15) {
                        return 166;
                    } else if (dd == 16) {
                        return 167;
                    } else if (dd == 17) {
                        return 168;
                    } else if (dd == 18) {
                        return 169;
                    } else if (dd == 19) {
                        return 170;
                    } else if (dd == 20) {
                        return 171;
                    } else if (dd == 21) {
                        return 172;
                    } else if (dd == 22) {
                        return 173;
                    } else if (dd == 23) {
                        return 174;
                    } else if (dd == 24) {
                        return 175;
                    } else if (dd == 25) {
                        return 176;
                    } else if (dd == 26) {
                        return 177;
                    } else if (dd == 27) {
                        return 178;
                    } else if (dd == 28) {
                        return 179;
                    } else if (dd == 29) {
                        return 180;
                    } else if (dd == 30) {
                        return 181;
                    } else {
                        return -1;
                    }
                } else if (mm == 7) {
                    if (dd == 1) {
                        return 182;
                    } else if (dd == 2) {
                        return 183;
                    } else if (dd == 3) {
                        return 184;
                    } else if (dd == 4) {
                        return 185;
                    } else if (dd == 5) {
                        return 186;
                    } else if (dd == 6) {
                        return 187;
                    } else if (dd == 7) {
                        return 188;
                    } else if (dd == 8) {
                        return 189;
                    } else if (dd == 9) {
                        return 190;
                    } else if (dd == 10) {
                        return 191;
                    } else if (dd == 11) {
                        return 192;
                    } else if (dd == 12) {
                        return 193;
                    } else if (dd == 13) {
                        return 194;
                    } else if (dd == 14) {
                        return 195;
                    } else if (dd == 15) {
                        return 196;
                    } else if (dd == 16) {
                        return 197;
                    } else if (dd == 17) {
                        return 198;
                    } else if (dd == 18) {
                        return 199;
                    } else if (dd == 19) {
                        return 200;
                    } else if (dd == 20) {
                        return 201;
                    } else if (dd == 21) {
                        return 202;
                    } else if (dd == 22) {
                        return 203;
                    } else if (dd == 23) {
                        return 204;
                    } else if (dd == 24) {
                        return 205;
                    } else if (dd == 25) {
                        return 206;
                    } else if (dd == 26) {
                        return 207;
                    } else if (dd == 27) {
                        return 208;
                    } else if (dd == 28) {
                        return 209;
                    } else if (dd == 29) {
                        return 210;
                    } else if (dd == 30) {
                        return 211;
                    } else if (dd == 31) {
                        return 212;
                    } else {
                        return -1;
                    }
                } else if (mm == 8) {
                    if (dd == 1) {
                        return 213;
                    } else if (dd == 2) {
                        return 214;
                    } else if (dd == 3) {
                        return 215;
                    } else if (dd == 4) {
                        return 216;
                    } else if (dd == 5) {
                        return 217;
                    } else if (dd == 6) {
                        return 218;
                    } else if (dd == 7) {
                        return 219;
                    } else if (dd == 8) {
                        return 220;
                    } else if (dd == 9) {
                        return 221;
                    } else if (dd == 10) {
                        return 222;
                    } else if (dd == 11) {
                        return 223;
                    } else if (dd == 12) {
                        return 224;
                    } else if (dd == 13) {
                        return 225;
                    } else if (dd == 14) {
                        return 226;
                    } else if (dd == 15) {
                        return 227;
                    } else if (dd == 16) {
                        return 228;
                    } else if (dd == 17) {
                        return 229;
                    } else if (dd == 18) {
                        return 230;
                    } else if (dd == 19) {
                        return 231;
                    } else if (dd == 20) {
                        return 232;
                    } else if (dd == 21) {
                        return 233;
                    } else if (dd == 22) {
                        return 234;
                    } else if (dd == 23) {
                        return 235;
                    } else if (dd == 24) {
                        return 236;
                    } else if (dd == 25) {
                        return 237;
                    } else if (dd == 26) {
                        return 238;
                    } else if (dd == 27) {
                        return 239;
                    } else if (dd == 28) {
                        return 240;
                    } else if (dd == 29) {
                        return 241;
                    } else if (dd == 30) {
                        return 242;
                    } else if (dd == 31) {
                        return 243;
                    } else {
                        return -1;
                    }
                } else if (mm == 9) {
                    if (dd == 1) {
                        return 244;
                    } else if (dd == 2) {
                        return 245;
                    } else if (dd == 3) {
                        return 246;
                    } else if (dd == 4) {
                        return 247;
                    } else if (dd == 5) {
                        return 248;
                    } else if (dd == 6) {
                        return 249;
                    } else if (dd == 7) {
                        return 250;
                    } else if (dd == 8) {
                        return 251;
                    } else if (dd == 9) {
                        return 252;
                    } else if (dd == 10) {
                        return 253;
                    } else if (dd == 11) {
                        return 254;
                    } else if (dd == 12) {
                        return 255;
                    } else if (dd == 13) {
                        return 256;
                    } else if (dd == 14) {
                        return 257;
                    } else if (dd == 15) {
                        return 258;
                    } else if (dd == 16) {
                        return 259;
                    } else if (dd == 17) {
                        return 260;
                    } else if (dd == 18) {
                        return 261;
                    } else if (dd == 19) {
                        return 262;
                    } else if (dd == 20) {
                        return 263;
                    } else if (dd == 21) {
                        return 264;
                    } else if (dd == 22) {
                        return 265;
                    } else if (dd == 23) {
                        return 266;
                    } else if (dd == 24) {
                        return 267;
                    } else if (dd == 25) {
                        return 268;
                    } else if (dd == 26) {
                        return 269;
                    } else if (dd == 27) {
                        return 270;
                    } else if (dd == 28) {
                        return 271;
                    } else if (dd == 29) {
                        return 272;
                    } else if (dd == 30) {
                        return 273;
                    } else {
                        return -1;
                    }
                } else if (mm == 10) {
                    if (dd == 1) {
                        return 274;
                    } else if (dd == 2) {
                        return 275;
                    } else if (dd == 3) {
                        return 276;
                    } else if (dd == 4) {
                        return 277;
                    } else if (dd == 5) {
                        return 278;
                    } else if (dd == 6) {
                        return 279;
                    } else if (dd == 7) {
                        return 280;
                    } else if (dd == 8) {
                        return 281;
                    } else if (dd == 9) {
                        return 282;
                    } else if (dd == 10) {
                        return 283;
                    } else if (dd == 11) {
                        return 284;
                    } else if (dd == 12) {
                        return 285;
                    } else if (dd == 13) {
                        return 286;
                    } else if (dd == 14) {
                        return 287;
                    } else if (dd == 15) {
                        return 288;
                    } else if (dd == 16) {
                        return 289;
                    } else if (dd == 17) {
                        return 290;
                    } else if (dd == 18) {
                        return 291;
                    } else if (dd == 19) {
                        return 292;
                    } else if (dd == 20) {
                        return 293;
                    } else if (dd == 21) {
                        return 294;
                    } else if (dd == 22) {
                        return 295;
                    } else if (dd == 23) {
                        return 296;
                    } else if (dd == 24) {
                        return 297;
                    } else if (dd == 25) {
                        return 298;
                    } else if (dd == 26) {
                        return 299;
                    } else if (dd == 27) {
                        return 300;
                    } else if (dd == 28) {
                        return 301;
                    } else if (dd == 29) {
                        return 302;
                    } else if (dd == 30) {
                        return 303;
                    } else if (dd == 31) {
                        return 304;
                    } else {
                        return -1;
                    }
                } else if (mm == 11) {
                    if (dd == 1) {
                        return 305;
                    } else if (dd == 2) {
                        return 306;
                    } else if (dd == 3) {
                        return 307;
                    } else if (dd == 4) {
                        return 308;
                    } else if (dd == 5) {
                        return 309;
                    } else if (dd == 6) {
                        return 310;
                    } else if (dd == 7) {
                        return 311;
                    } else if (dd == 8) {
                        return 312;
                    } else if (dd == 9) {
                        return 313;
                    } else if (dd == 10) {
                        return 314;
                    } else if (dd == 11) {
                        return 315;
                    } else if (dd == 12) {
                        return 316;
                    } else if (dd == 13) {
                        return 317;
                    } else if (dd == 14) {
                        return 318;
                    } else if (dd == 15) {
                        return 319;
                    } else if (dd == 16) {
                        return 320;
                    } else if (dd == 17) {
                        return 321;
                    } else if (dd == 18) {
                        return 322;
                    } else if (dd == 19) {
                        return 323;
                    } else if (dd == 20) {
                        return 324;
                    } else if (dd == 21) {
                        return 325;
                    } else if (dd == 22) {
                        return 326;
                    } else if (dd == 23) {
                        return 327;
                    } else if (dd == 24) {
                        return 328;
                    } else if (dd == 25) {
                        return 329;
                    } else if (dd == 26) {
                        return 330;
                    } else if (dd == 27) {
                        return 331;
                    } else if (dd == 28) {
                        return 332;
                    } else if (dd == 29) {
                        return 333;
                    } else if (dd == 30) {
                        return 334;
                    } else {
                        return -1;
                    }
                } else if (mm == 12) {
                    if (dd == 1) {
                        return 335;
                    } else if (dd == 2) {
                        return 336;
                    } else if (dd == 3) {
                        return 337;
                    } else if (dd == 4) {
                        return 338;
                    } else if (dd == 5) {
                        return 339;
                    } else if (dd == 6) {
                        return 340;
                    } else if (dd == 7) {
                        return 341;
                    } else if (dd == 8) {
                        return 342;
                    } else if (dd == 9) {
                        return 343;
                    } else if (dd == 10) {
                        return 344;
                    } else if (dd == 11) {
                        return 345;
                    } else if (dd == 12) {
                        return 346;
                    } else if (dd == 13) {
                        return 347;
                    } else if (dd == 14) {
                        return 348;
                    } else if (dd == 15) {
                        return 349;
                    } else if (dd == 16) {
                        return 350;
                    } else if (dd == 17) {
                        return 351;
                    } else if (dd == 18) {
                        return 352;
                    } else if (dd == 19) {
                        return 353;
                    } else if (dd == 20) {
                        return 354;
                    } else if (dd == 21) {
                        return 355;
                    } else if (dd == 22) {
                        return 356;
                    } else if (dd == 23) {
                        return 357;
                    } else if (dd == 24) {
                        return 358;
                    } else if (dd == 25) {
                        return 359;
                    } else if (dd == 26) {
                        return 360;
                    } else if (dd == 27) {
                        return 361;
                    } else if (dd == 28) {
                        return 362;
                    } else if (dd == 29) {
                        return 363;
                    } else if (dd == 30) {
                        return 364;
                    } else if (dd == 31) {
                        return 365;
                    } else {
                        return -1;
                    }
                } else {
                    return -1;
                }
            } else {
                return -1;
            }
        } else {
            return -1;
        }
    } else {
        return -1;
    }
}


/*
 * You are given 2 std::strings, a and b.
 * Return a std::string of the form short+long+short.
 * The shorter std::string is on the outside.
 * The longer std::string is on the inside.
 * The std::strings WILL not be the same length.
 * The std::strings MAY be empty (length 0).
 *
 * combo("Hello", "hi") returns "hiHellohi"
 * combo("hi", "Hello") returns "hiHellohi"
 * combo("aaa", "b")    returns "baaab"
 *
 * precondition: a.length() != b.length()
 */
std::string
combo(std::string const &a, std::string const &b) {
    if (a.length() != b.length()) {
        if (a.length() < b.length()) {
            return a + b + a;
        } else if (b.length() < a.length()) {
            return b + a + b;
        }
    }
}


/*
 * You are given two std::strings.
 * Append them together ("concatenation").
 * a is left most and b is rightmost.
 * b is appended to a.
 * Under the following condition, return the result.
 *
 * If the std::strings are different lengths,
 *    omit chars FROM THE FRONT of the longer std::string so
 *    it is the same length as the shorter std::string.
 *
 * So "Hello" and "Hi" yield "loHi".
 *
 * The std::strings may be any length.
 *
 * concatMin("Hello", "Hi") returns "loHi"
 * concatMin("Hello", "java") returns "ellojava"
 * concatMin("java", "Hello") returns "javaello"
 */
std::string
concatMin(std::string const &a, std::string const &b) {
    if (a.length() != b.length()) {
        if (a.length() > b.length()) {
            return a.substr((a.length() - b.length()), b.length()) + b;
        } else if (a.length() < b.length()) {
            return a + b.substr((b.length() - a.length()), a.length());
        }
    } else {
        return a + b;
    }
}

/*
 * You are given three std::string arguments.
 * Return the std::string that alphabetically precedes
 * OR is equal to the other two std::string arguments
 *
 * std::string("a", "b", "c") returns "a"
 * std::string("X", "b", "c") returns "X"
 * std::string("123", "1232", "123 0") returns "123"
 */
//b>a>B>A>2>1
std::string
firstOf3(std::string const &a, std::string const &b,
         std::string const &c) {
    if (a <= b and b <= c and a <= c) {
        return a;
    } else if (a <= c and c <= b and a <= b) {
        return a;
    } else if (b <= a and a <= c and b <= c) {
        return b;
    } else if (b <= c and c <= a and b <= a) {
        return b;
    } else if (c <= a and a <= b and a <= b) {
        return c;
    } else if (c <= b and b <= a and c <= a) {
        return c;
    }
}

/*
 * You are given a std::string str.
 * If the std::string STARTS WITH "f" return "Fizz".
 * If the std::string ENDS   WITH "b" return "Buzz".
 * If BOTH the "f" and "b" conditions are true, return "FizzBuzz".
 * If NEITHER the "f" and "b" conditions are true, return the std::string unchanged.
 *
 * fizzBuzz("fig") returns "Fizz"
 * fizzBuzz("dib") returns "Buzz"
 * fizzBuzz("fib") returns "FizzBuzz"
 */
std::string fizzBuzz(std::string const &str) {
    if (str.length() == 1) {
        if (tolower(str[0]) == 'f') {
            return "Fizz";
        } else {
            return str;
        }
    } else if (str.length() > 1) {
        if (tolower(str[0]) == 'f' and tolower(str[str.length() - 1]) != 'b') {
            return "Fizz";
        } else if (tolower(str[str.length() - 1]) == 'b' and tolower(str[0]) != 'f') {
            return "Buzz";
        } else if (tolower(str[0]) == 'f' and tolower(str[str.length() - 1]) == 'b') {
            return "FizzBuzz";
        } else if (tolower(str[0]) != 'f' and tolower(str[str.length() - 1]) != 'b') {
            return str;
        }
    }
}


#endif
