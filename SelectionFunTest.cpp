// This #define tells Catch to provide a main().
// Only do this in one, and only one cpp file.
#define CATCH_CONFIG_MAIN

#include "catch.hpp" // for the testing framework named Catch2

#include <string> // for class string
#include "SelectionFun.hpp" // for the 12 functions under test

/*
 * This unit test has at least one test method for each of
 * the 12 methods in SelectionFun.hpp. However, they are
 * incomplete and do not represent 100% code coverage.
 * This is meant to encourage you to think of other
 * needed test cases and add your own REQUIREs.
 * The TEST_CASES() should average about 12 REQUIRES each.
 *
 * We will run a unit test that is much much larger unit test
 * than this starter unit test (we have about 140 REQUIRE
 * or REQUIRE_FALSE macros.
 *
 * Think of as many test cases as you can.
 *
 * Programmers: Rick Mercer and YourFirstName YourLastName
 */

/////////////////////////////////////////////////////////
// Unit test some calendar functions using primitive types

// The argument is the name of the function being tested.
// In this first TEST_CASE, thanksDate is under test.
TEST_CASE ("thanksDate") {
    //REQUIRE(25 == thanksDate(1));
}


TEST_CASE ("dayOfWeek") {
     // REQUIRE("Monday" == dayOfWeek(1));
    // REQUIRE("Unknown" == dayOfWeek(8));
}


TEST_CASE ("daysInMonth") {
     REQUIRE(31 == daysInMonth(1, 2018));
     REQUIRE(28 == daysInMonth(2, 2019));
     REQUIRE(28 == daysInMonth(2, 2100));
     REQUIRE(29 == daysInMonth(2, 2000));
     REQUIRE(29 == daysInMonth(2, 2400));
}


TEST_CASE ("season") {
    // REQUIRE("Winter" == season(12, true));
}


TEST_CASE ("validDate when valid") {
     // REQUIRE(validDate("2014/08/01"));
    // Many, many more REQUIRES are need to fully test validDate
}

TEST_CASE ("validDate when not valid") {
    // This passes because the function stub always returns !true
    // REQUIRE_FALSE(validDate("02/29/2019"));
    // Many, many more REQUIRES are need to fully test validDate
}

TEST_CASE ("dayNumber") {
//     REQUIRE(365 == dayNumber("12/31/2018"));
//     REQUIRE(60 == dayNumber("02/29/2020"));
//     REQUIRE(61 == dayNumber("03/01/2020"));
//     REQUIRE(60 == dayNumber("03/01/2021"));
//     REQUIRE(-1 == dayNumber("02/29/2018"));
//     REQUIRE(366 == dayNumber("12/31/2020"));
//     REQUIRE(-1 == dayNumber("13/11/2020"));
}


////////////////////////////////////////////////////////
// Test some string functions using string messages

TEST_CASE("string combo(std::string, string") {
//      REQUIRE("hiHellohi" == combo("Hello", "hi"));
//      REQUIRE("hiHellohi" == combo("hi", "Hello"));
//      REQUIRE(" Hello " == combo("Hello", " "));
//      REQUIRE("hi" == combo("", "hi"));
}


TEST_CASE("concatMin") {
//     REQUIRE("123456" == concatMin("123", "456"));
//     REQUIRE("loHi" == concatMin("Hello", "Hi"));
//     REQUIRE("Javaello" == concatMin("Java", "Hello"));
//     REQUIRE("" == concatMin("", ""));
//     REQUIRE("" == concatMin("", "456"));
//     REQUIRE("" == concatMin("123", ""));
}


TEST_CASE("firstOf3") {
//     REQUIRE("0123" == firstOf3("0123", "hz123", "0123y"));
//     REQUIRE("a" == firstOf3("a", "b", "c"));
     REQUIRE("123 0" == firstOf3("x123", "1232", "123 0"));
//     REQUIRE("X" == firstOf3("X", "b", "c"));
}


TEST_CASE("fizzBuzz") {
    // REQUIRE("Fizz" == fizzBuzz("Fairy"));
    // REQUIRE("Buzz" == fizzBuzz("barB"));
    // REQUIRE("FizzBuzz" == fizzBuzz("FumB"));
    // REQUIRE("Fizz" == fizzBuzz("F"));
    // REQUIRE("b" == fizzBuzz("b"));
    // REQUIRE("mother" == fizzBuzz("mother"));
}