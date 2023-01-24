
#ifndef SRC_S21_SMART_CALC_H_
#define SRC_S21_SMART_CALC_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// chislo do '.' prioritet, polnoye chislo eto id
#define CLOSE -1.1

#define ADD 0.1
#define SUB 0.2

#define MUL 1.1
#define DIV 1.2
#define MOD 1.3

#define SQR 2.1

#define SQRT 3.1
#define SIN 3.2
#define COS 3.3
#define ASIN 3.4
#define ACOS 3.5
#define TAN 3.6
#define ATAN 3.7
#define LOG 3.8
#define LN 3.9

#define OPEN 5.9

//

typedef double tdata;

typedef struct stack {
  tdata data;
  struct stack *next;
} stack;

tdata parse_string(char *string_for_parse);

void push(stack **plink, tdata num);
void print(stack *plink);
tdata pop(stack **plink);
// void free_stack (stack ** plink);

void action(stack **stack_for_num, stack **stack_for_sign);
void check_stack(tdata code_sign, stack **stack_for_num,
                 stack **stuck_for_sign);

double stod(char *string, char *point);

// for QT CHECK
int error_dot(char *string);
int count_char_in_line(char *line, char SYMB);
int error_math(char *line_edit);
char *back_last_symb(char *line_edit);
int open_br(char *line_edit);
int close_br(char *line_edit);
int print_X_in_line(char *line_edit);
int check_for_X(char *line_edit);

#endif //  SRC_S21_SMART_CALC_H
