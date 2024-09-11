CC = g++
EXEC = megaphone
CFLAGS = -Wall -Wextra -Werror
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
RESET = \033[0m

all: $(EXEC)

$(EXEC): megaphone.o
	@echo  "${YELLOW}Linking ${EXEC}...${RESET}"
	@$(CC) -o $(EXEC) megaphone.o
	@echo  "${GREEN}Build complete.${RESET}"

megaphone.o: megaphone.cpp
	@echo  "${YELLOW}Compiling megaphone.cpp...${RESET}"
	@$(CC) $(CFLAGS) -c megaphone.cpp
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
