cc = gcc
EXEC = useless_project
DEP = -I./include/
SRC		=	$(shell find src/ -name "*.c")
OBJ		=	$(SRC:.c=.o)
DEK = #flag

all : $(EXEC) 
	@echo "[MAKE]" $<
	@echo "To launch it please write ./"$<

$(EXEC) : $(OBJ)
	@$(cc) $(OBJ) $(DEK) $(DEP) -o $(EXEC) 


.c.o:
	@$(cc) $(DEP) $(DEK) -c $< -o $@ 
	@echo "[GCC]" $<

clean :
	@rm -f ${OBJ} 
	@rm -rf *.o 

fclean : clean
	@rm -rf $(EXEC)


re:		fclean all


.SUFFIXES: .c .o
