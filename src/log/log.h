#pragma once
#include <stdarg.h>

void log_fatal(const char* msg, ...);
void log_error(const char* msg, ...);
void log_warning(const char* msg, ...);
void log_debug(const char* msg, ...);
void log_header(const char* msg, ...);
void log_general(const char* msg, ...);
