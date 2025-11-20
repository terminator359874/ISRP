#include <iostream>
#include <string>
using namespace std;

class GradeCalculator {
public:
    double calculateAverage(int grade1, int grade2, int grade3) {
        if (grade1 < 0 || grade1 > 100 || 
            grade2 < 0 || grade2 > 100 || 
            grade3 < 0 || grade3 > 100) {
            cout << "Ошибка: оценки должны быть от 0 до 100" << endl;
            return -1;
        }
        
        double average = (grade1 + grade2 + grade3) / 3.0;
        
        cout << "Оценки: " << grade1 << ", " << grade2 << ", " << grade3 << endl;
        cout << "Средний балл: " << average << endl;
        
        cout << getGradeLevel(average) << endl;
        
        return average;
    }

    string getGradeLevel(double average) {
        if (average >= 90) {
            return "Отлично!";
        } else if (average >= 75) {
            return "Хорошо";
        } else if (average >= 60) {
            return "Удовлетворительно";
        } else {
            return "Неудовлетворительно";
        }
    }
};


int main() {
    GradeCalculator calc;
    
    calc.calculateAverage(85, 90, 88);
    calc.calculateAverage(70, 65, 75);
    
    return 0;
}