NAME := btc
SRC_FILES := main.cpp BitcoinExchange.cpp
OBJ_FILES := $(SRC_FILES:.cpp=.o)
HEADER_FILES := BitcoinExchange.hpp
CPPC = c++
STD := -std=c++98
CPPFLAGS := -Wall -Wextra -Werror $(STD)
RM := rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(SRC_FILES) $(HEADER_FILES)
	$(CPPC) $(CPPFLAGS) $(SRC_FILES) -o $(NAME)

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
