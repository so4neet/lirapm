#include <stdio.h>
#include <stdarg.h>
#include "../global.h"

/* Once again, the same logging system I always use, based roughly off of the Kohi Game Engine tutorials on youtube. Thanks, Travis Vroman! */

static void print_log(log_level level, const char *msg, va_list args)
{
    const char* ansi_clear[6] = {"0;41", "1;31", "1;33", "1;34", "1;32", "0;37"};
    const char* level_string[6] = {"[!]: ", "[!]: ", "[!]: ", "[D]: ", ":: ", ":: "};
    char buffer[4096];
    vsnprintf(buffer, sizeof(buffer), msg, args);
    printf("\033[%sm%s%s\033[0m\n", ansi_clear[level], level_string[level], buffer);
}

void log_fatal(const char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    print_log(l_fatal, msg, args);
    va_end(args);
}
void log_error(const char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    print_log(l_error, msg, args);
    va_end(args);
}
void log_warning(const char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    print_log(l_warn, msg, args);
    va_end(args);
}
void log_debug(const char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    print_log(l_debug, msg, args);
    va_end(args);
}
void log_header(const char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    print_log(l_header, msg, args);
    va_end(args);
}

void log_general(const char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    print_log(l_general, msg, args);
    va_end(args);
}
