# -*- Makefile -*-

# Variables
CC = gcc
CFLAGS = -Wall -g

# files
src_files = $(wildcard *.c)			#cmd returns list of files with .c extension in current directory
obj_files = $(src_files:.c=.o)		# cmd returns list of files with name same as src files but changes extension from .c to .o
executable = main

all: $(executable)

$(executable): $(obj_files)
	@gcc -w -o $@ $^
	@echo "compiled & built $(@)"

%.o: %.c
	@gcc -w -c $< -o $@
	@echo "compiled $(@)"

clean:
	rm -f $(obj_files) $(executable)