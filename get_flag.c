#include "main.h"

/**
 * get_flag - get incoming flag
 * @s: char s
 * @f: flags_t pointer
 *
 * Return: an integer(0, 1)
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
