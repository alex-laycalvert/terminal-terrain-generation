#ifndef TTG_HPP
#define TTG_HPP

#define EMPTY ' '
#define BLOCK 'B'
#define PLAYER 'X'

#define BLOCK_CP 1
#define PLAYER_CP 2

#define JUMP_STRENGTH 5

void init_map(const int rows, const int cols);
void print_map();
void play();
void jump();

#endif  // TTG_HPP
