#include "statistics.h"

// Function definitions
double mean(const std::vector<double>& numbers) {
    double sum = 0.0;
    for (double number : numbers) {
        sum += number;
    }
    return sum / numbers.size();
}

double variance(const std::vector<double>& numbers) {
    double avg = mean(numbers);
    double squared_deviations = 0.0;
    for (double number : numbers) {
        squared_deviations += pow(number - avg, 2); // Efficiently calculate square of difference
    }
    return squared_deviations / numbers.size();
}
