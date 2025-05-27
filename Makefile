# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhenao-p < mhenao-p@student.42malaga.      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/23 16:55:52 by mhenao-p          #+#    #+#              #
#    Updated: 2025/05/27 20:33:28 by mhenao-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables

NAME	= libftprintf.a
SRC_DIR	= src/
OBJ_DIR	= obj/
CC	= cc
CFLAGS	= -Wall -Wextra -Werror -I$(INCLUDE)
INCLUDE = include
RM	= rm -f
AR	= ar rcs

# Colors

DEF_COLOR	= \033[0;39m
GRAY		= \033[0;90m
RED		= \033[0;91m
GREEN		= \033[0;92m
YELLOW		= \033[0;93m
BLUE		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN		= \033[0;96m
WHITE		= \033[0;97m

#sources

SRC_FILES	= ft_printf ft_printf_utils ft_printf_unsigned ft_printf_hex ft_print_ptr

SRC	= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ	= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJF	=	.cache_exists

all: $(NAME)

$(NAME):	$(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "$(GREEN) ft_printf compiled succesfully!$(DEF_COLOR)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJF)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)
	

clean:
	@$(RM) -rf $(OBJ_DIR)
	@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean:	clean
	@$(RM) -f $(NAME)
	@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:	fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

.PHONY:	all clean fclean re norm
