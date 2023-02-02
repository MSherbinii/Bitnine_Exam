#include <stdio.h>
#include <stdlib.h>
#include "Question_1.h"

// Destructor function
void destroyNode(Node* node) {
    free(node);
}

Node* makeFunc(TypeTag type, int value1, int value2)
{
    Node* node = (Node*)malloc(sizeof(Node));
    if (node == NULL) {
        fprintf(stderr, ERR_MSG_ALLOC_FAILED);
        return (Node *) ALLOC_ERROR;
    }

    node->type = type;
    node->value1 = value1;
    node->value2 = value2;
    return node;
}

int fibonacci(int n)
{
    if (n < 0) {
        fprintf(stderr, ERR_MSG_INVALID_INPUT);
        return FIB_ERROR;
    }

    int fibonacci_series[n],i;

    fibonacci_series[0] = 0;
    fibonacci_series[1] = 1;

    for (i = 2; i <= n; i++) {
        fibonacci_series[i] = fibonacci_series[i - 1] + fibonacci_series[i - 2];
    }

    return fibonacci_series[n-1];
}

int calculate(Node *node) {
    if (node == NULL) {
        fprintf(stderr, ERR_MSG_INVALID_NODE);
        return INVALID_NODE_ERROR;
    }
    switch (node->type) {
        case ADD:
            node->result = node->value1 + node->value2;
            printf("Addition result: %d\n", node->result);
            break;
        case SUB:
            node->result = node->value1 - node->value2;
            printf("Subtraction result: %d\n", node->result);
            break;
        case MUL:
            node->result = node->value1 * node->value2;
            printf("Multiplication result: %d\n", node->result);
            break;
        case DIV:
            if (node->value2 == 0) {
                fprintf(stderr, ERR_MSG_DIV_BY_ZERO);
                return DIV_BY_ZERO_ERROR;
            }
            node->result = node->value1 / node->value2;
            printf("Division result: %d\n", node->result);
            break;
        case FIB:
            node->result = fibonacci(node->value1);
            if (node->result == FIB_ERROR) {
                return FIB_ERROR;
            }
            printf("Fibonacci result: %d\n", node->result);
            break;
        default:
            fprintf(stderr, ERR_MSG_INVALID_NODE);
            return INVALID_NODE_ERROR;
    }
    return node->result;
}

int main()
{
    Node* addNode = makeFunc(ADD, 10, 6);
    calculate(addNode);

    Node* mulNode = makeFunc(MUL,5,4);
    calculate(mulNode);

    Node* subNode = makeFunc(SUB,addNode->result,mulNode->result);
    calculate(subNode);

    Node* fiboNode = makeFunc(FIB, abs(subNode->result),0);
    calculate(fiboNode);


    // Free memory
    destroyNode(addNode);
    destroyNode(mulNode);
    destroyNode(subNode);
    destroyNode(fiboNode);

    return 0;
}




