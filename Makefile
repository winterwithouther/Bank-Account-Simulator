CC = g++
CFLAGS = -std=c++20 -Wall

# EXECUTABLE FILE
TARGET = BankAccountSimulator
TEST_TARGET = test_bankaccount

OBJS = main.o BankAccount.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

main.o: main.cc BankAccount.h
	$(CC) $(CFLAGS) -c main.cc

BankAccount.o: BankAccount.cc BankAccount.h
	$(CC) $(CFLAGS) -c BankAccount.cc

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): test_bankaccount.cc BankAccount.cc BankAccount.h
	$(CC) $(CFLAGS) test_bankaccount.cc BankAccount.cc -o $(TEST_TARGET)

clean:
	rm -rf $(OBJS) $(TARGET) $(TEST_TARGET)