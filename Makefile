FILENAME=""

all: assemble simulate



assemble:
	@echo "Compiling assemble.c..."
	gcc -c assembler.c translation.c
	gcc assembler.o translation.o -o task_exe
	./task_exe $(FILENAME)

simulate:
	@echo "Compiling simulate.c..."
	gcc -c simulate.c
	gcc simulate.o -o task_exe
	./task_exe $(FILENAME)

clean:
	@echo "Cleaning up..."
	rm -rf 

help:
	@echo "Usage: make [target]"
	@echo "Targets:"
	@echo "  all      - Compile and run assemble and simulate"
	@echo "  assemble - Compile and run assemble"
	@echo "  simulate - Compile and run simulate"
	@echo "  clean    - Remove build files"
	@echo "  help     - Display this help message"

