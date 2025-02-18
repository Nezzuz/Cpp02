NAME = ORTHODOX3
ORTHODOX3= ORTHODOX3

SRC = 	main.cpp \
	Fixed.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ORTHODOX3)

$(NAME): all 

$(ORTHODOX3):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ORTHODOX3)
        
clean:
	rm -rf $(ORTHODOX3)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
