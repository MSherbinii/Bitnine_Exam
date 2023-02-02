//
// Created by Mohamed El Sherbini
//

#ifndef Bitnine_QUESTION_1_H
#define Bitnine_QUESTION_1_H

#define FIB_ERROR (-1)
#define ALLOC_ERROR (-2)
#define INVALID_NODE_ERROR (-3)
#define DIV_BY_ZERO_ERROR (-4)

#define ERR_MSG_INVALID_NODE "Error: invalid node pointer.\n"
#define ERR_MSG_ALLOC_FAILED "Error: memory allocation failed.\n"
#define ERR_MSG_INVALID_INPUT "Error: input must be a non-negative integer.\n"
#define ERR_MSG_DIV_BY_ZERO "Error: division by zero.\n"

typedef enum TypeTag {
    ADD,
    SUB,
    MUL,
    DIV,
    FIB
} TypeTag;

typedef struct Node
{
    TypeTag type;
    int value1;
    int value2;
    int result;
} Node;

void destroyNode(Node* node);
Node* makeFunc(TypeTag type, int value1, int value2);
int fibonacci(int n);
int calculate(Node *node);



#endif // Bitnine_QUESTION_1_H
