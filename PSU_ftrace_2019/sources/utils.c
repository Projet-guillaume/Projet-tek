/*
** EPITECH PROJECT, 2020
** utils
** File description:
** c
*/

#include "ftrace.h"

int print_usage(void)
{
    printf("USAGE: ftrace <command>\n");
    return (84);
}

char *cut_command(char *command)
{
    char *real_command = malloc(100);
    int i = strlen(command) - 1;
    int j = 0;

    for (; i != 0 && command[i] != '/'; i--);
    i++;
    for (; command[i] != '\0'; i++) {
        real_command[j] = command[i];
        j++;
    }
    real_command[j++] = '\0';
    return (real_command);
}

long long unsigned int get_mem_addr(long long unsigned int peek,
struct user_regs_struct user)
{
    int offset = (int)(peek >> 8);
    long long unsigned int addr = user.rip + offset + 5;
    return (addr);
}

int get_func_process(elf_t *elf_data,
list_t *real_list, struct user_regs_struct user_bis, norme_t var)
{
    long long unsigned int addr;
    char *name = NULL;
    char *dup_command = malloc(100);
    char *real_command = cut_command(var.name);

    addr = get_mem_addr(var.peek, user_bis);
    if ((name = get_symbol_tab(elf_data, addr)) == NULL) {
        sprintf(dup_command, "func_0x%llx@%s", addr, real_command);
        dprintf(2, "Entering function %s at 0x%llx\n",
        dup_command, addr);
        add_func_back(real_list, dup_command);
    } else {
        dprintf(2, "Entering function %s at 0x%llx\n", name, addr);
        add_func_back(real_list, name);
    } return (0);
}
