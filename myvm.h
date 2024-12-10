#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>


typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;



#define $1 (int8 *) //this is 1 byte
#define $2 (int16) //this is 2 byte
#define $4 (int32) // this is 4 byte
#define $8 (int64) //this is 8 byte
#define $c (char *)
#define $i (int)

/*

    we are building a 16 bit vm
    AX  this is a gerenal purpose register
    BX  this is a gerenal purpose register
    CX  this is a gerenal purpose register
    DX  this is a gerenal purpose register
    SP  editor point to the top of the stack
    IP  points to the next instruction in the program
    65 kb memory

*/

typedef unsigned short int Reg;

struct s_registers {
    Reg ax;
    Reg dx;
    Reg cx;
    Reg dx;
    Reg sp;
    Reg ip;
}

typedef struct s_registers REGISTERS;

struct s_cpu {
    REGISTERS r;
};

typedef MachineCode Program;
typedef struct s_cpu CPU;
typedef int8 Stack
typedef Instruction Program;

struct s_vm {
    CPU cpu;
    Stack *s;
    Program *instr;
};

typedef struct s_vm VM;

int main(int, char**);



