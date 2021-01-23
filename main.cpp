//
//  main.cpp
//  ProfessorRating
//
//  Created by Jett Sturges on 7/19/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
#include "ProfessorRating.h"

// Global variable(s)

int SIZE;

// function prototypes
void fillProfList(ProfessorRating*);
int getRating(string ratingType);
void displayHighestRating(ProfessorRating*);

int main() {
    cout << "How many professors do you want to rate? (Enter 3 to fall in line with project specification): " << endl;
    cin >> SIZE;
    ProfessorRating csProfs[SIZE];
    fillProfList(csProfs);
    for (int i = 0; i < SIZE; i++) {
        csProfs[i].print();
    }
    displayHighestRating(csProfs);
    return 0;
}

void fillProfList(ProfessorRating* profList) {
    string name;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter professor " << (i + 1) << "'s name: " << endl;
        cin >> name;
        profList[i].setName(name);
        profList[i].setEasiness(getRating("Easiness"));
        profList[i].setHelpfulness(getRating("Helpfulness"));
        profList[i].setClarity(getRating("Clarity"));
    }
}

int getRating(string ratingType) {
    int rating = 0;
    if (ratingType == "Clarity") {
        cout << "Enter in a clarity rating: " << endl;
        cin >> rating;
    }
    else if (ratingType == "Helpfulness") {
        cout << "Enter in a helpfulness rating: " << endl;
        cin >> rating;
    }
    else if (ratingType == "Easiness") {
        cout << "Enter in an easiness rating: " << endl;
        cin >> rating;
    }
    return rating;
}

void displayHighestRating(ProfessorRating* profList) {
    double max = 0.0;
    int maxIndex = -1;
    for (int i = 0; i < SIZE; i++) {
        if (profList[i].calcRating() > max) {
            max = profList[i].calcRating();
            maxIndex = i;
        }
    }
    cout << "The professor with the highest average rating is " << profList[maxIndex].getProfName() << " with an average rating of " << fixed << setprecision(2) << max << "!" << endl;
}
