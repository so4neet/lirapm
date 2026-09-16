#include "log/log.h"

int main(int argc, char **argv)
{
    log_fatal("This is a fatal message.");
    log_error("This is an error message.");
    log_warning("This is a warning message.");
    log_debug("This is a debug message.");
    log_header("This is a green header message.");
    log_general("This is a general message.");
	return 0;
}
