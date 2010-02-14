#ifndef MAIN_H__
#define MAIN_H__

#include <iostream>

using std::cout;
using std::cerr;
using std::endl;

#include <sys/stat.h>
#include <fcntl.h>
#include <linux/input.h>
#include <linux/uinput.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

#define gerr() std::string err(strerror(errno))
#define cErr gerr(); cerr
#define testbit(in, bit) (!!( ((in)[bit/8]) & (1<<(bit&7)) ))

#endif
