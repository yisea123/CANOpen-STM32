#include "misc.h"

#include "main.h"
#include "cmsis_os.h"

extern UART_HandleTypeDef huart2;
char vstr_buf[512];

void vprint(const char *fmt, va_list argp)
{
        if( vsprintf(vstr_buf, fmt, argp) > 0)
        {
                HAL_UART_Transmit(&huart2, (uint8_t *)vstr_buf, strlen(vstr_buf), 0xffffffff);
        }

}

void uart_printf(char *fmt, ...)
{
        va_list argp;
        va_start(argp, fmt);
        vprint(fmt, argp);
        va_end(argp);
}

