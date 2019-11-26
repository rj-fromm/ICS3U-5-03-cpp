// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: RJ Fromm
// Created on: Oct 2019
// This program uses return values

#include <iostream>
#include <string>

std::string CalculateArea(std::string grade) {
    // calculate area
    std::string mark;

    if (grade == "4+") {
        mark = "97%";
    } else if (grade == "4") {
        mark = "90%";
    } else if (grade == "4-") {
        mark = "83%";
    } else if (grade == "3+") {
        mark = "78%";
    } else if (grade == "3") {
        mark = "74%";
    } else if (grade == "3-") {
        mark = "71%";
    } else if (grade == "2+") {
        mark = "68%";
    } else if (grade == "2") {
        mark = "64%";
    } else if (grade == "2-") {
        mark = "61%";
    } else if (grade == "1+") {
        mark = "58%";
    } else if (grade == "1") {
        mark = "54%";
    } else if (grade == "1-") {
        mark = "51%";
    } else if (grade == "R") {
        mark = "30%";
    } else {
        mark = ("0");
    }

    return mark;
}


main() {
    // this function gets grade
    std::string mark;
    std::string gradeUser;
    std::string calculateArea;
    // input
    std::cout << "Enter your grade: ";
    std::cin >> gradeUser;
    std::cout << std::endl;

    // call functions
    mark = CalculateArea(gradeUser);

    // output
    std::cout << "Your mark is " << mark << std::endl;
}
