NAME = ORTHODOX2
ORTHODOX2= ORTHODOX2

SRC = 	main.cpp \
	Fixed.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ORTHODOX2)

$(NAME): all 

$(ORTHODOX2):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ORTHODOX2)
        
clean:
	rm -rf $(ORTHODOX2)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
