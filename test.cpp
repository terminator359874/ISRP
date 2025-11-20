#include <cassert>

void runTests() {
    GradeCalculator calc;


    double avg1 = calc.calculateAverage(90, 90, 90);
    assert(avg1 == 90.0);

    double avg2 = calc.calculateAverage(80, 70, 75);
    assert(avg2 == 75.0);

    cout << "Все тесты пройдены успешно!" << endl;
}
int main() {
    runTests();
    return 0;
}
