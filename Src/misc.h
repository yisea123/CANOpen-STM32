#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <sys/unistd.h>

void vprint(const char *fmt, va_list argp);
void uart_printf(char *fmt, ...);
