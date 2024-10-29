#include <stdio.h>

int add_integers(int, int);
float add_floats(float, float);
float compute_circle_area(float);
float compute_rectangle_area(float, float);
int compute_factorial(int);

int main() {
    int first_int;
    int second_int;
    printf("Enter your first integer:\n");
    scanf("%d", &first_int);
    printf("Enter your second integer:\n");
    scanf(" %d", &second_int);

    int int_sum = add_integers(first_int, second_int);
    printf("The addition of integers: %d\n", int_sum);

    float first_float;
    float second_float;
    printf("Enter your first float:\n");
    scanf("%f", &first_float);
    printf("Enter your second float:\n");
    scanf(" %f", &second_float);

    float float_sum = add_floats(first_float, second_float);
    printf("The addition of floats: %.2f\n", float_sum);

    float radius;
    printf("Enter your radius:\n");
    scanf("%f", &radius);

    float circle_area_result = compute_circle_area(radius);
    printf("The circular area: %.2f\n", circle_area_result);	

    float width;
    float length;
    printf("Enter your width:\n");
    scanf("%f", &width);
    printf("Enter your length:\n");
    scanf("%f", &length);

    float rectangle_area_result = compute_rectangle_area(width, length);
    printf("The rectangular area: %.2f\n", rectangle_area_result);

    int number_for_factorial;
    printf("Enter your number for factorial:\n");
    scanf(" %d", &number_for_factorial);

    int factorial_result = compute_factorial(number_for_factorial);
    printf("The factorial is: %d\n", factorial_result);

    return 0;
}

int add_integers(int a, int b) {
    return a + b;
}

float add_floats(float c, float d) {
    return c + d;
}

float compute_circle_area(float r) {
    return 3.14 * r * r;
}

float compute_rectangle_area(float w, float l) {
    return w * l; 
}

int compute_factorial(int N) {
    if (N == 0)
        return 1;
    else
        return N * compute_factorial(N - 1);
}
