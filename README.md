# terminal-terrain-generation

A simple terminal side-scroller with random terrain generation.

Use the following keybindings to move:

- W (Jump)
- A (Left)
- D (Right)

This program uses a very basic way to generate the terrain. A random
number determines which direction the terrain should go in for each
consecutive column. The number generated each time also determines if
the terrain increases/decreases by 1 or 2 blocks or if it stays the same.

## Running

On Linux and macOS:

```bash
# Clone the repo
git clone https://github.com/alex-laycalvert/terminal-terrain-generation

# cd into the repo directory
cd /path/to/terminal-terrain-generation

# Compile with make
make

# Optionally use the dev option
make dev

# Or manually compile
g++ src/*.cpp -lncurses -o ./ttg

# Run
./ttg
```
