#include <stdio.h>

/**
  * pre_main_exe - uses the constructor attribute to execute function
  * before the main function.
  */
void __attribute__((constructor)) pre_main_exe(void);

/**
  * pre_main_exe - implementing the function.
  */
void pre_main_exe(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
