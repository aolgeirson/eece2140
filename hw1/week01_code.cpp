#include <iostream>

int main(int argc, char *argv[]) {
  int operand1 = 10;
  int operand2 = -3;
  int op_code;
  int grade = -1;
  char letter_grade = 'Z';

  while (grade < 0 || grade > 100) {

    std::cout << "Enter your letter grade as an integer: ";
    std::cin >> grade;
  }
  switch (grade) {
  case 90 ... 100:
    letter_grade = 'A';
    break;
  case 80 ... 89:
    letter_grade = 'B';
    break;
  case 70 ... 79:
    letter_grade = 'C';
    break;
  case 60 ... 69:
    letter_grade = 'D';
    break;
  case 0 ... 59:
    letter_grade = 'F';
    break;
  }
  if (letter_grade == 'Z') {
    std::cout << "ERROR: this should be unreachable\n";
    return 1;
  }
  std::cout << "Your grade is: " << letter_grade << std::endl;
  return 0;
}
