# Makefile for ecs36b S2024 hw2 reference
#

CC = g++ -std=c++14

# for WSL/Ubuntu
CFLAGS = -g -I/usr/include/jsoncpp -I/opt/homebrew/include

# CFLAGS = -g -D_ECS35B_DEBUG_ -I/usr/include/jsoncpp
# CFLAGS = -g -Wall -Wstrict-prototypes
# CFLAGS = -O3

# for Mac
LDFLAGS = 	-L/opt/homebrew/lib -ljsoncpp -L/opt/homebrew/lib

CORE_INCS =	Core.h GPS.h JvTime.h					\
		ecs36b_Common.h ecs36b_Exception.h

CORE_OBJS =	Core.o GPS.o JvTime.o ecs36b_JSON.o			\
		ecs36b_Exception.o

# rules.
all: 	hw2part2

#
#

hw2part2.o:	hw2part2.cpp $(CORE_INCS)
	$(CC) -c $(CFLAGS) hw2part2.cpp

ecs36b_JSON.o:		ecs36b_JSON.cpp $(CORE_INCS)
	$(CC) -c $(CFLAGS) ecs36b_JSON.cpp

ecs36b_Exception.o:	ecs36b_Exception.cpp $(CORE_INCS)
	$(CC) -c $(CFLAGS) ecs36b_Exception.cpp

Core.o:			Core.cpp Core.h $(CORE_INCS)
	$(CC) -c $(CFLAGS) Core.cpp

GPS.o:			GPS.cpp GPS.h $(CORE_INCS)
	$(CC) -c $(CFLAGS) GPS.cpp

JvTime.o:		JvTime.cpp JvTime.h $(CORE_INCS)
	$(CC) -c $(CFLAGS) JvTime.cpp

hw2part2:		$(CORE_OBJS) hw2part2.o
	$(CC) -o hw2part2 $(CORE_OBJS) hw2part2.o $(LDFLAGS)

clean:
	rm -f	*.o *~ core hw2part2


