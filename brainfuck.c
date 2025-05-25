#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
 *signe > bouge le curseur
 *signe < bouge le curseur
 *signe + ajoute 1 dans la case
 *signe - diminue 1 dans la case
 *signe . print la case
 *signe , prend un input
 *signe [ debut de la boucle
 *signe ] fin de la boucle
 */

#define size 30000


typedef struct	s_stack
{
	int	position;
	struct s_stack *next;
}	t_stack;

t_stack	*create_node(int cursor)
{
	t_stack *node = malloc(sizeof(t_stack));
	node -> position = cursor;
	node -> next = NULL;
	return node;
}


void	push(t_stack **top, int cursor)
{
	t_stack	*node = create_node(cursor);
	node -> next = *top;
	*top = node;
}

void	pop(t_stack **top)
{
	if (*top == NULL)
	{
		printf("Nothing to pop\n");
		exit(EXIT_FAILURE);
	}
	t_stack *temp = (*top) -> next;
	*top = (*top) -> next;
	free(temp);
}


void	print_array(unsigned char *vm)
{
	int	i;

	i = 0;
	while (vm[i])
	{
		printf("%d ", vm[i]);
		i++;
	}
	puts("\n");
}

void	brainfuck(char *code)
{
	int	i;
	int	cursor;
	t_stack	*top = NULL;
	unsigned char	vm[size] = {0};

	i = 0;
	cursor = 0;
	print_array(vm);
	while (code[i])
	{
		switch (code[i])
		{
			case '+':
				vm[cursor] += 1;
				break;
			case '-':
				vm[cursor] -= 1;
				break;
			case '>':
				cursor++;
				break;
			case '<':
				cursor--;
				break;
			case '.':
				write(1, &vm[cursor], 1);
				//write(1, "\n", 1);
				break;
			case '[':
				push(&top, i);				
				break;
			case ']':
				if (vm[cursor] > 0)
				{
					i = top -> position;
				}
				else
				{
					pop(&top);
				}
				break;

		}
		//print_array(vm);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Usage ./brf <brainfuck_code>\n");
		return (1);
	}
	brainfuck(argv[1]);
}
