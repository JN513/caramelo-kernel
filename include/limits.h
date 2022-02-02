/* Arquivo de cabeçalho com algumas definições de limite, tanto limites de dados basicos  
* a tamanho maximo de strings, quanto limites de tamanho de arquivos.
* exemplo, o numero de caracteres que o nome de um arquivo pode ter.
*/ 

#ifndef _LIMITS_H_
#define _LIMITS_H_

/* Definições de limites de dados basicos */
/* Limites de dados do tipo char (1 byte / 8 bits) */
#define CHAR_BIT 8 // numero de bits de um char
#define CHAR_MAX 127 // valor maximo de um char
#define CHAR_MIN -128 // valor minimo de um char
#define SCHAR_MAX 127 // valor maximo de um signed char
#define SCHAR_MIN -128 // valor minimo de um signed char
#define UCHAR_MAX 255 // valor maximo de um unsigned char
#define MB_LEN_MAX 1 // numero maximo de bytes de um caractere multibyte

/* Limites de dados do tipo short int (2 bytes / 16 bits) */
#define SHRT_MAX 32767 // valor maximo de um short int
#define SHRT_MIN -32768 // valor minimo de um short int
#define USHRT_MAX 65535 // valor maximo de um unsigned short int

/* Limites de dados do tipo int (4 bytes / 32 bits) */
#define INT_MAX 2147483647 // valor maximo de um long int
#define INT_MIN -2147483648 // valor minimo de um long int
#define UINT_MAX 4294967295 // valor maximo de um unsigned long int

/* Limites de dados do tipo long int (8 bytes / 64 bits) */
#define LONG_MAX 9223372036854775807 // valor maximo de um long int
#define LONG_MIN -9223372036854775808 // valor minimo de um long int
#define ULONG_MAX 18446744073709551615 // valor maximo de um unsigned long int

#include <sys/dir.h>

#ifdef _POSIX_SOURCE
/* Limites exigidos pelo padrão POSIX P1003.1 */
#define _POSIX_ARG_MAX 4096 // numero maximo de argumentos que podem ser passados para um programa
#define _POSIX_CHILD_MAX 6 // numero maximo de processos filhos que podem ser criados por um processo
#define _POSIX_LINK_MAX 8 // numero maximo de vinculos que podem ser criados por um processo
#define _POSIX_MAX_CANON 255 // tamanho da fila de entrada canonica
#define _POSIX_MAX_INPUT 255 // numero maximo de caracteres que podem ser lidos de um terminal
#define _POSIX_NAME_MAX 14 // numero maximo de caracteres que o nome de um arquivo pode ter
#define _POSIX_NGROUPS_MAX 0 // as IDs de grupos complementares são opcionais
#define _POSIX_OPEN_MAX 16 // numero maximo de arquivos que podem ser abertos por um processo
#define _POSIX_PATH_MAX 255 // numero maximo de caracteres que um path pode ter
#define _POSIX_PIPE_BUF 512 // numero maximo de bytes que podem ser escritos em um pipe
#define _POSIX_STREAM_MAX 8 // numero maximo de streams que podem ser abertos por um processo
#define _POSIX_TZNAME_MAX 3 // numero maximo de caracteres que o nome do fuso horario pode ter
#define _POSIX_SSIZE_MAX 32767 // numero maximo de bytes que podem ser lidos por read()

/* Limites personalizados do caramelo-kernel */

#define _NO_LIMIT 100 // numero arbitrario; limite não definido

#define NGROUPS_MAX 0 // as IDs de grupos complementares são opcionais
#define ARG_MAX 16384 // numero maximo de argumentos que podem ser passados para um programa
#define CHILD_MAX _NO_LIMIT // numero maximo de processos filhos que podem ser criados por um processo
#define OPEN_MAX 20 // numero maximo de arquivos que podem ser abertos por um processo
#define LINK_MAX SHRT_MAX // numero maximo de vinculos que podem ser criados por um processo
#define MAX_CANON 255 // tamanho da fila de entrada canonica
#define MAX_INPUT 255 // numero maximo de caracteres que podem ser lidos de um terminal
#define NAME_MAX 14 // numero maximo de caracteres que o nome de um arquivo pode ter
#define PATH_MAX 255 // numero maximo de caracteres que um path pode ter
#define PIPE_BUF 7168 // numero maximo de bytes que podem ser escritos em um pipe
#define STREAM_MAX 20 // numero maximo de streams que podem ser abertos por um processo
#define TZNAME_MAX 3 // numero maximo de caracteres que o nome do fuso horario pode ter
#define SSIZE_MAX 32767 // numero maximo de bytes que podem ser lidos por read()


#endif // _POSIX_SOURCE

#endif // _LIMITS_H_