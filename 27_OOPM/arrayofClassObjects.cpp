#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string name;
    int age;
    int testMatches;
    double averageRuns;
};

int main() {
    int numCricketers = 20;

    // Dynamically allocate an array of Cricketer objects
    Cricketer* cricketers = new Cricketer[numCricketers];

    // Read records for each cricketer
    for (int i = 0; i < numCricketers; i++) {
        cout << "Enter details for Cricketer " << i + 1 << endl;
        
        cout << "Name: ";
        cin >> cricketers[i].name;

        cout << "Age: ";
        cin >> cricketers[i].age;

        cout << "Number of Test Matches: ";
        cin >> cricketers[i].testMatches;

        cout << "Average Runs: ";
        cin >> cricketers[i].averageRuns;

        cout << endl;
    }

    // Displaying the entered records
    cout << "Cricketer Records: "<<endl;
    for (int i = 0; i < numCricketers; i++ ) {
        cout << "Cricketer " << i + 1 << ":"<<endl;
        cout << "Name: " << cricketers[i].name << endl;
        cout << "Age: " << cricketers[i].age <<endl;
        cout << "Number of Test Matches: " << cricketers[i].testMatches <<endl;
        cout << "Average Runs: " << cricketers[i].averageRuns << endl;
    }

    // Release dynamically allocated memory
    delete[] cricketers;

    return 0;
}