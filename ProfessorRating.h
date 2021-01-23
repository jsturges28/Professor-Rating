//
//  ProfessorRating.h
//  ProfessorRating
//
//  Created by Jett Sturges on 7/19/20.
//  Copyright © 2020 Jacob Sturges. All rights reserved.
//

#ifndef ProfessorRating_h
#define ProfessorRating_h
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ProfessorRating class declaration

class ProfessorRating {
    private:
    string profName;
    int easiness;
    int helpfulness;
    int clarity;
    
    public:
        // Constructor
    ProfessorRating();
        void setName(string);
        void setEasiness(int);
        void setHelpfulness(int);
        void setClarity(int);
    
    
    // Initialized contructor
    ProfessorRating(string name, int easy, int help, int clear) {
        profName = name;
        easiness = easy;
        helpfulness = help;
        clarity = clear;
    }
    
    // Copy contructor
    ProfessorRating(const ProfessorRating &obj) {
        profName = obj.profName;
        easiness = obj.easiness;
        helpfulness = obj.helpfulness;
        clarity = obj.clarity;
    }
    
    // Destructor
    ~ProfessorRating()
    { }
        
    // Accessor methods
    string getProfName() const
    { return profName; }
    
    int getEasiness() const
    { return easiness; }
    
    int getHelpfulness() const
    { return helpfulness; }
    
    int getClarity() const
    { return clarity; }
    
    // Method to calculate rating
    double calcRating() const
    { return (easiness+helpfulness+clarity)/3.0; }
    
    // Method that prints out the attributes of the professor
    void print() const {
        cout << "Professor: " << getProfName() << endl;
        cout << "Easiness Rating: " << getEasiness() << endl;
        cout << "Helpfulness Rating: " << getHelpfulness() << endl;
        cout << "Clarity Rating: " << getClarity() << endl;
        cout << "Average Rating: " << fixed << setprecision(2) << calcRating() << endl;
        cout << endl;
    }
    
    // Method to set new values for each professor
    void setData(string name, int easy, int help, int clear) {
        profName = name;
        easiness = easy;
        helpfulness = help;
        clarity = clear;
    }
    
    // Overloaded operator function
    bool operator==(const ProfessorRating &rval) {
        bool compared = false;
        if (this->profName == rval.profName && this->easiness == rval.easiness && this->helpfulness == rval.helpfulness && this->clarity == rval.clarity) {
            compared = true;
        }
        return compared;
    }
};
#endif
