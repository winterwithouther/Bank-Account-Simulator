CC = g++
CFLAGS = -std=c++20 -Wall

# EXECUTABLE FILE
TARGET = BankAccountSimulator

OBJS = main.o BankAccount.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

main.o: main.cc BankAccount.h
	$(CC) $(CFLAGS) -c main.cc

BankAccount.o: BankAccount.cc BankAccount.h
	$(CC) $(CFLAGS) -c BankAccount.cc

clean:
	rm -rf $(OBJS) $(TARGET)