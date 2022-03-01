//
// Created by Александр Шоршин on 01.03.2022.
//

#ifndef EX_CTYPES_EX_LIB_H
#define EX_CTYPES_EX_LIB_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//Функция simple_function просто возвращает подсчитанные числа.
//Каждый раз, когда она вызывается в счетчике increments, она выдает следующее значение.
int simple_function(void);

//Функция add_one_to_string добавляет единицу к каждому символу в переданном массиве char.
void add_one_to_string(char *input);

//Выделяет освобождает строку в контексте С.
char * alloc_C_string(void);

//Освобождает строку в контексте С.
void free_C_string(char* ptr);

#endif //EX_CTYPES_EX_LIB_H
