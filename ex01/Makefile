CC = g++
EXEC = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m

all: $(EXEC)

$(EXEC): main.o
	@echo  "${YELLOW}Linking ${EXEC}...${RESET}"
	@$(CC) $(CFLAGS) -o $(EXEC) main.o
	@echo  "${GREEN}Build complete.${RESET}"

main.o: main.cpp
	@echo  "${YELLOW}Compiling main.cpp...${RESET}"
	@$(CC) $(CFLAGS) -c main.cpp
	@echo  "${GREEN}Compilation complete.${RESET}"

clean:
	@echo  "${RED}Cleaning up object files...${RESET}"
	@rm -rf *.o
	@echo  "${GREEN}Cleanup complete.${RESET}"

fclean: clean
	@echo  "${RED}Removing executable ${EXEC}...${RESET}"
	@rm -rf $(EXEC)
	@echo  "${GREEN}Executable removed.${RESET}"

re: fclean all
