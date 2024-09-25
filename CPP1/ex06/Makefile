MAKEFLAGS += -s

CC = g++
EXEC = harlFilter
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(wildcard srcs/*.cpp)
OBJ = $(SRCS:.cpp=.o)
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
RESET = \033[0m

all: check_up_to_date $(EXEC)

check_up_to_date:
	@if [ -f $(EXEC) ]; then \
		latest_obj_time=`stat -c %Y $(OBJ) 2>/dev/null | sort -nr | head -n1`; \
		exec_time=`stat -c %Y $(EXEC)`; \
		if [ "$$latest_obj_time" -le "$$exec_time" ]; then \
			cowsay "The executable is already up to date." | lolcat; \
			exit 0; \
		fi \
	fi

$(EXEC): $(OBJ)
	@cmatrix -b -u 1 | lolcat & 
	@sleep 1
	@pkill cmatrix 
	@echo "${YELLOW}Linking ${EXEC}...${RESET}" | lolcat 
	@$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)
	@echo "${GREEN}Build complete.${RESET}" | lolcat 

clean:
	@echo "${RED}Cleaning up object files...${RESET}" | lolcat
	@rm -rf srcs/*.o 
	@echo "${GREEN}Cleanup complete.${RESET}" | lolcat

fclean: clean
	@echo "${RED}Removing executable ${EXEC}...${RESET}" | lolcat
	@rm -rf $(EXEC)
	@echo "${GREEN}Executable removed.${RESET}" | lolcat

re: fclean all
