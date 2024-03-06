#include <stdio.h>

const char* getOperatorName(char op) {
    switch (op) {
        case '+':
            return "Addition";
        case '-':
            return "Subtraction";
        case '*':
            return "Multiplication";
        case '/':
            return "Division";
        default:
            return "Invalid operator!!!";
    }
}

int main() {
    char op;
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    const char* opName = getOperatorName(op);
    printf("The operator '%c' is %s.\n", op, opName);
    
	}
