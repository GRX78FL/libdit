#pragma once

#define _GNU_SOURCE
#define NULL 0x0000000000000000
#define LOG_PATH "/dev/shm/log.dit"

#include <dlfcn.h>
#include <stdarg.h>

void *get_fp (const char *filename, const char *mode);
int close_fp (void *fp); 
void report (const char *format, ...);

