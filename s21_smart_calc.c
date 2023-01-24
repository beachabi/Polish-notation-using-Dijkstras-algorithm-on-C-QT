#include "s21_smart_calc.h"

int error_dot(char *string) {
  int return_code = 0;
  // printf("YES");
  // if (strlen(string) > 0) {
  // printf("%lf", strlen(string));
  if (string[strlen(string) - 1] < '0' || string[strlen(string) - 1] > '9') {
    return_code = 1;
  }
  for (int len = strlen(string) - 1; len != -1 && string[len] != ' '; len--) {
    if (string[len] == '.') {
      return_code = 1;
      break;
    }
  }

  return return_code;
}

int check_for_X(char *line_edit) {
  int return_code = 0;
  for (; *line_edit; line_edit++) {
    if (*line_edit == 'X') {
      return_code = 1;
      break;
    }
  }
  return return_code;
}

char *back_last_symb(char *line_edit) {

  int len = strlen(line_edit) - 1;
  int flag = 0;

  char A[255] = {0};
  if (line_edit[len] == ' ' || line_edit[len] == '(') {
    len--;
  }

  for (; len > -1; len--) {
    if (line_edit[len] == '(') {
      break;
    }

    if (line_edit[len] == ' ') {
      flag = 1;
    }

    if (line_edit[len] == '+' || line_edit[len] == '-' ||
        line_edit[len] == '/' || line_edit[len] == '*' ||
        line_edit[len] == '^') {
      if (flag) {
        len++;
        break;
      }
    }

    if ((line_edit[len] >= '0' && line_edit[len] <= '9') ||
        line_edit[len] == ')' || line_edit[len] == 'X') {
      if (!flag) {
        len--;
      }
      break;
    }
  }

  for (int i = 0; i <= len; i++) {
    A[i] = line_edit[i];
  }

  char *B = A;

  return B;
}

int count_char_in_line(char *line, char SYMB) {
  int count = 0;
  if (line) {
    for (; *line; line++) {
      if (*line == SYMB) {
        count++;
      };
    }
  }

  // printf("@%d@", count);
  return count;
}

int close_br(char *line_edit) {

  if (count_char_in_line(line_edit, '(') <=
      count_char_in_line(line_edit, ')')) {
    return 0;
  }
  // "12331 + "
  // char * for_check = " + ";
  int return_code = 0;
  for (int len_line_edit = strlen(line_edit) - 1; len_line_edit > -1;
       len_line_edit--) {
    if (line_edit[len_line_edit] == ' ') {
      continue;
    }
    if ((line_edit[len_line_edit] >= '0' && line_edit[len_line_edit] <= '9') ||
        line_edit[len_line_edit] == ')' || line_edit[len_line_edit] == 'X') {
      return_code = 1;
    }
    break;
  }
  // printf("RETURN %d\n", return_code);
  return return_code;
}

int print_X_in_line(char *line_edit) {

  int return_code = 1;
  for (int len_line_edit = strlen(line_edit) - 1; len_line_edit > -1;
       len_line_edit--) {
    if (line_edit[len_line_edit] == ' ') {
      continue;
    }
    if ((line_edit[len_line_edit] >= '0' && line_edit[len_line_edit] <= '9') ||
        line_edit[len_line_edit] == ')') {
      return_code = 0;
    }
    break;
  }

  // printf("RETURN %d\n", return_code);
  return return_code;
}

int open_br(char *line_edit) {

  int return_code = 1;
  for (int len_line_edit = strlen(line_edit) - 1; len_line_edit > -1;
       len_line_edit--) {
    if (line_edit[len_line_edit] == ' ') {
      continue;
    }
    if ((line_edit[len_line_edit] >= '0' && line_edit[len_line_edit] <= '9') ||
        line_edit[len_line_edit] == '(' || line_edit[len_line_edit] == ')') {
      return_code = 0;
    }
    break;
  }

  // printf("RETURN %d\n", return_code);
  return return_code;
}

int error_math(char *line_edit) {
  // "12331 + "
  // char * for_check = " + ";

  int return_code = 1;

  for (int len_line_edit = strlen(line_edit) - 1; len_line_edit > -1;
       len_line_edit--) {

    if (line_edit[len_line_edit] == ' ') {
      continue;
    }
    if ((line_edit[len_line_edit] >= '0' && line_edit[len_line_edit] <= '9') ||
        line_edit[len_line_edit] == ')' || line_edit[len_line_edit] == 'X') {
      return_code = 0;
    }

    break;
    // if (line_edit[len_line_edit] < '0' || line_edit[len_line_edit] > '9') {
    // printf("CHAR %c\n", line_edit[len_line_edit]); break;}
  }
  // printf("%d\n", return_code);
  return return_code;
}

void push(stack **plink, tdata num) {
  stack *place_alloc = (stack *)calloc(1, sizeof(stack));
  if (place_alloc) {
    place_alloc->data = num;
    place_alloc->next = *plink;
    *plink = place_alloc;
  } else {
    exit(1);
  }
}

void print(stack *plink) {

  for (stack *p = plink; p != NULL; p = p->next) {
    // printf("%f\n", p->data);
  }
}

tdata pop(stack **plink) {

  tdata return_last = 0;

  if (*plink != NULL) {
    stack *tmp = *plink;
    return_last = tmp->data;
    *plink = tmp->next;
    free(tmp);
  }

  return return_last;
}

// void free_stack (stack ** plink) {
//     if (*plink!=NULL){
//         stack * tmp = *plink;
//         *plink = tmp->next;
//         free(tmp);
//     }
// }

double stod(char *string, char *point) {

  int count_exp = 0;
  long double temp = 0;
  int flag_unar_minus = 0;
  if (*string == '-') {
    flag_unar_minus = 1;
  }

  for (; string != point; string++) {
    if (*string == '.') {
      count_exp = -1;
      for (char *pdot = string; pdot != point; pdot++) {
        count_exp++;
        // printf("EXP %d\n", count_exp);
      }
      // printf("EXP %d", count_exp);
    }
    if (*string >= 48 && *string <= 57) {
      // int cast_to_int = *string;
      temp = (temp * 10) + ((int)*string - 48);
    }
  }

  // printf("_%d_", fabsl(temp) == 1e-7);

  if (count_exp) {
    temp = temp / pow(10, count_exp);
  }

  if (flag_unar_minus) {
    temp *= -1;
  }
  // printf("!%d!", count_exp);
  // printf("!%Lf!", temp);
  return temp;
}

void action(stack **stack_for_num, stack **stack_for_sign) {

  tdata pop_last_sign = pop(stack_for_sign), y = 0, x = 0;

  if ((int)pop_last_sign == 3) {
    x = pop(stack_for_num);
  } else {
    y = pop(stack_for_num);
    x = pop(stack_for_num);
  }

  if (pop_last_sign == ADD) {
    push(stack_for_num, x + y);
  } else if (pop_last_sign == SUB) {
    push(stack_for_num, x - y);
  } else if (pop_last_sign == MUL) {
    push(stack_for_num, x * y);
  } else if (pop_last_sign == DIV) {
    push(stack_for_num, x / y);
  } else if (pop_last_sign == SQR) {
    push(stack_for_num, pow(x, y));
  } else if (pop_last_sign == SQRT) {
    push(stack_for_num, sqrt(x));
  } else if (pop_last_sign == SIN) {
    push(stack_for_num, sin(x));
  } else if (pop_last_sign == COS) {
    push(stack_for_num, cos(x));
  } else if (pop_last_sign == ASIN) {
    push(stack_for_num, asin(x));
  } else if (pop_last_sign == ACOS) {
    push(stack_for_num, acos(x));
  } else if (pop_last_sign == TAN) {
    push(stack_for_num, tan(x));
  } else if (pop_last_sign == ATAN) {
    push(stack_for_num, atan(x));
  } else if (pop_last_sign == LOG) {
    push(stack_for_num, log10(x));
  } else if (pop_last_sign == LN) {
    push(stack_for_num, log(x));
  }
}

void check_stack(tdata code_sign, stack **stack_for_num,
                 stack **stack_for_sign) {
  // int flag = 0;

  if (!*stack_for_sign) {
    push(stack_for_sign, code_sign);
  }

  else if ((int)(*stack_for_sign)->data < (int)code_sign) {
    push(stack_for_sign, code_sign);
  }

  else if ((int)(*stack_for_sign)->data >= (int)code_sign) {

    if ((*stack_for_sign)->data == OPEN) {

      if (code_sign == CLOSE) {
        // printf("YES\n");
        pop(stack_for_sign);
      } else {
        push(stack_for_sign, code_sign);
      }

    } else {
      action(stack_for_num, stack_for_sign);
      check_stack(code_sign, stack_for_num, stack_for_sign);
    }
  }
  // print(*stack_for_sign);
  // printf("\n");
}

tdata parse_string(char *string_for_parse) {

  stack *stack_for_num = NULL;
  stack *stack_for_sign = NULL;

  // char * string = "COS( 1230 * 2131 + 213123) + 1";
  char *string = string_for_parse;

  // printf("+%d+", error_dot(string));
  char *point = string;

  do {

    if (*point == ' ' || *point == '\0' || *point == '(' || *point == ')') {

      for (; string != point; string++) {

        if (*string == ' ') {
          continue;
        }
        // check numbers
        if (!strncmp(string, "+ ", 2)) {
          check_stack(ADD, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "- ", 2)) {
          check_stack(SUB, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        }

        else if ((*string >= 48 && *string <= 57) || *string == '-') {
          push(&stack_for_num, stod(string, point));
          string = point;
          break;
        }

        // check_signs
        else if (*string == '*') {
          check_stack(MUL, &stack_for_num, &stack_for_sign);
        } else if (*string == '/') {
          check_stack(DIV, &stack_for_num, &stack_for_sign);
        } else if (*string == '%') {
          check_stack(MOD, &stack_for_num, &stack_for_sign);
        } else if (*string == '(') {
          check_stack(OPEN, &stack_for_num, &stack_for_sign);
        } else if (*string == ')') {
          check_stack(CLOSE, &stack_for_num, &stack_for_sign);
        } else if (*string == '^') {
          check_stack(SQR, &stack_for_num, &stack_for_sign);
        } else if (!strncmp(string, "SQRT", 4)) {
          check_stack(SQRT, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "SIN", 3)) {
          check_stack(SIN, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "COS", 3)) {
          check_stack(COS, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "ASIN", 4)) {
          check_stack(ASIN, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "ACOS", 4)) {
          check_stack(ACOS, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "ATAN", 3)) {
          check_stack(ATAN, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "TAN", 3)) {
          check_stack(TAN, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "LOG", 3)) {
          check_stack(LOG, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        } else if (!strncmp(string, "LN", 2)) {
          check_stack(LN, &stack_for_num, &stack_for_sign);
          string = point;
          break;
        }
      }
    }

    point++;
  } while (*string);

  while (stack_for_sign != NULL) {
    action(&stack_for_num, &stack_for_sign);
  }

  // if (stack_for_num->next) {free_stack(&stack_for_num);}
  // if (stack_for_sign->next) {free_stack(&stack_for_sign);}

  // printf("\nEND SIGN: \n");
  // print(stack_for_sign);

  // printf("\nEND NUM: \n");
  // print(stack_for_num);

  // print(stack_for_sign);
  //
  return stack_for_num->data;
}

// int main () {
//     printf("%s|\n", back_last_symb("12345 + cos(1 "));
// back_last_symb("12345 + cos(1");
//     // printf("%s|\n", back_last_symb("12345 + cos(12 "));
// back_last_symb("12345 + cos(12 ");
// back_last_symb("12345 + 1cos(");

//     // printf("=%f", parse_string("SQRT (3 + 6)"));
//     // printf("%d", error_math(" + ", "123 123 +"));
// }