MAKEFLAGS += -s

CXX = c++
EXEC = prog
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(wildcard srcs/*.cpp)
OBJ = $(SRCS:.cpp=.o)
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m
RESET = \033[0m

all: $(EXEC)

$(EXEC): $(OBJ)
	@echo "${YELLOW}Linking ${EXEC}...${RESET}"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC)
	@echo "${GREEN}Build complete.${RESET}"

clean:
	@echo "${RED}Cleaning up object files...${RESET}"
	@rm -rf srcs/*.o 
	@echo "${GREEN}Cleanup complete.${RESET}"

fclean: clean
	@echo "${RED}Removing executable ${EXEC}...${RESET}"
	@rm -rf $(EXEC)
	@echo "${GREEN}Executable removed.${RESET}"

re: fclean all
