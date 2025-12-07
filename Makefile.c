# Makefile for Number Conversion System

CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -O2

TARGET = ncs_app
SRCS = main.c
OBJS = main.o

.PHONY: all clean debug reset

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

debug: CFLAGS = -std=c99 -Wall -Wextra -g -O0
debug: clean $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

reset: clean all

