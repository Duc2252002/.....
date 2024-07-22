#include <iostream>
#include <vector>
#include "statistics.h"

using namespace std;

int main() {
    int num_numbers;

    cout << "Enter the number of elements (1-4): ";
    cin >> num_numbers;

    if (num_numbers < 1 || num_numbers > 4) {
        cerr << "Invalid number of elements. Please enter 1-4." << endl;
        return 1; // Indicate error
    }

    vector<double> numbers;
    double element;

    cout << "Enter the elements: ";
    for (int i = 0; i < num_numbers; ++i) {
        cin >> element;
        numbers.push_back(element);
    }

    double avg = mean(numbers);
    double var = variance(numbers);

    cout << "Mean: " << avg << endl;
    cout << "Variance: " << var << endl;

    return 0;
}
