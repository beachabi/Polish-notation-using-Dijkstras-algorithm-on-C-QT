CC=gcc
FLAGS=-Wall -Wextra -Werror 
UBUNTU_FLAG=-lsubunit -lm -pthread


all: clean install
# test


clean:
	rm -rf *.o *.a *.css *.out *.html *.gcno *.gcda *.gcov tests s21_smart_calc_test.c smart_calc docs

s21_smart_calc.o:
	$(CC) $(FLAGS) -std=c11 -c *.c

s21_smart_calc.a: s21_smart_calc.o
	ar rc s21_smart_calc.a *.o

s21_smart_calc_test.o: 
	checkmk s21_smart_calc_test.check > s21_smart_calc_test.c
	$(CC) $(FLAGS) -c s21_smart_calc_test.c

# test1:
# 	$(CC) $(GCC) $(FLAGS) s21_smart_calc.c s21_smart_calc.h -o s21_smart_calc_test.o $(UBUNTU_FLAG)
# 	# s21_smart_calc.h 
# 	./s21_smart_calc_test.o
uninstall: clean
	cd qt/build-smart_calc-Desktop-Debug/ && make clean

install: uninstall
	cd qt/build-smart_calc-Desktop-Debug/ && make install
	mv qt/build-smart_calc-Desktop-Debug/smart_calc ./

dvi: 
	mkdir -p docs
	doxygen Doxyfile
	@mv html latex docs
	open docs/html/index.html

dist:
	@tar -cf $(ARCHIVE).tar $(C_FILES) project/*.h Makefile


test: s21_smart_calc.a s21_smart_calc_test.o
	$(CC) $(FLAGS) s21_smart_calc_test.o s21_smart_calc.a -o tests -lcheck -lsubunit -lm -pthread
	./tests

gcov_report: s21_smart_calc_test.o
	$(CC) $(FLAGS) -c -fprofile-arcs -ftest-coverage *.c
	$(CC) $(FLAGS) -fprofile-arcs *.o -o tests -lcheck -lsubunit -lm -pthread
	./tests
	# rm -rf *.gcda *.gcno
	gcovr -r . --html --html-details -o coverage_report.html
	# rm *.o
	
clang:
	clang-format -n *.c *.h

valgrind: all
	valgrind  --leak-check=full --show-leak-kinds=all -v ./tests
