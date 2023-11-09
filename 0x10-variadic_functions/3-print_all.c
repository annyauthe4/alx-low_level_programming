#include "variadic_functions"

/**
 * print_all - prints all format
 * @format: specific format for printed spring
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, flag;
	char *str;
	va_list all;

	va_list(all, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(all, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(all, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(all, dkouble));
				flag = 0;
				break;
			case 's':
				str = va_arg(all, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(all);
}
