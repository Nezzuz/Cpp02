NAME = ORTHODOX1
ORTHODOX1= ORTHODOX1

SRC = 	main.cpp \
		Fixed.cpp

CXX = c++ 

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(ORTHODOX1)

$(NAME): all 

$(ORTHODOX1):
	$(CXX) $(CXXFLAGS) $(SRC) -o $(ORTHODOX1)
        
clean:
	rm -rf $(ORTHODOX1)

re: fclean all 

fclean: clean

.PHONY: all fclean clean re
