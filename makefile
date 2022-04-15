terminal-terrain-generation:
	g++ src/*.cpp -lncurses -o ./ttg
dev:
	g++ -g3 -Wall -Wextra -fsanitize=address,undefined src/*.cpp -lncurses -o ./ttg.dev
clean:
	rm -f ./ttg
	rm -f ./ttg.dev
	rm -f ./ttg.dev.dSYM
