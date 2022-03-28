#ifndef __MAIN_H__
#define __MAIN_H__

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * enum error_e - Enum for error codes
 * @ERR_USAGE: Usage
 * @ERR_READ: Read
 * @ERR_WRITE: Write
 * @ERR_CLOSE: Close
 */
typedef enum	error_e
{
	ERR_USAGE = 97,
	ERR_READ = 98,
	ERR_WRITE = 99,
	ERR_CLOSE = 100
}				error_t;

ssize_t		read_textfile(const char *filename, size_t letters);
int			create_file(const char *filename, char *text_content);
int			append_text_to_file(const char *filename, char *text_content);
#endif /* __MAIN_H__ */
