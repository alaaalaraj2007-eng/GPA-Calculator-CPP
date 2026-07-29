#include <iostream>
using namespace std;

int main() {
    int totalHours;
    cout << "Enter total number of hours: ";
    cin >> totalHours;

    int totalCourses;
    cout << "Enter number of courses: ";
    cin >> totalCourses;

    double weightedSum = 0;

    for (int i = 0; i < totalCourses; i++) {
        double mark;
        int courseHours;

        cout << "Enter your mark and the credit hours for course " << (i + 1) << ": ";
        cin >> mark >> courseHours;

        weightedSum += mark * courseHours;
    }

    if (totalHours > 0) {
        double average = weightedSum / totalHours;
        cout << "Your average is: " << average << endl;
    } else {
        cout << "Total hours must be greater than zero!" << endl;
    }

    return 0;
}

