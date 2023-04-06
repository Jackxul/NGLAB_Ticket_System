# -*- Sub Makefile -*-
# Time-stamp: <2016-03-31 16:32:00 kmodi>

CC:=gcc
CFLAGS:=-Wall -c
B_DIR := ../build
E_DIR := ../exe
SRC=${wildcard *.c}
OBJ = $(patsubst %.c,$(B_DIR)/%.o,$(SRC))

exe:=start

$(exe): $(OBJ)
	$(CC) $(OBJ) -o ./../exe/$@
	@echo "Makefile: Done."
$(B_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

