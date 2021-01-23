//
//  ProfessorRating.cpp
//  ProfessorRating
//
//  Created by Jett Sturges on 7/19/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#include "ProfessorRating.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Creates another constructor as proposed by the book. I'm not sure if this is necessary, however, as I already defined the constructor in "ProfessorRating.h".

ProfessorRating::ProfessorRating() {
    profName = "";
    easiness = 0;
    helpfulness = 0;
    clarity = 0;
}

// setName method to set the name of each professor

void ProfessorRating::setName(string name) {
    profName = name;
}

// setEasiness method to set the easiness of each professor

void ProfessorRating::setEasiness(int easy) {
    easiness = easy;
}

// setHelpfulness method to set the helpfulness of each professor

void ProfessorRating::setHelpfulness(int help) {
    helpfulness = help;
}

// setClarity method to set the clarity of each professor

void ProfessorRating::setClarity(int clear) {
    clarity = clear;
}
