#include "header.h"

void check_args(char *argv[], char *operand1, char *operation, char *operand2, char *result, 
                int operand1_length, int operation_length, int operand2_length, int result_length) 
                {

    for (int i = 0; i < operand1_length; i++) 
    {
        if (operand1[i] != '?' && !mx_isdigit(operand1[i])) 
        {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[1]);
            mx_printerr("\n");
            exit(-1);
        }
    }

    for (int i = 0; i < operand2_length; i++) 
    {
        if (operand2[i] != '?' && !mx_isdigit(operand2[i])) 
        {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[3]);
            mx_printerr("\n");
            exit(-1);
        }
    }

    for (int i = 0; i < result_length; i++) 
    {
        if (result[i] != '?' && !mx_isdigit(result[i])) 
        {
            mx_printerr("Invalid result: ");
            mx_printerr(argv[4]);
            mx_printerr("\n");
            exit(-1);
        }
    }

    if (*operand1 == '-' || *operand2 == '-' || *result == '-') 
    {
        mx_printerr("Operands and result must be positive values\n");
        exit(-1);
    }

    if (operation_length != 1 || 
        (*operation != '+' && *operation != '-' && *operation != '*' && *operation != '/')) 
        {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(-1);
    }
}

