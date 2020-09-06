#include <graphx.h>

#include "grid.h"

void drawGrid(unsigned char grid[GRID_HEIGHT][GRID_WIDTH]) {
    for (int y = 0; y < GRID_HEIGHT; y++) {
        for (int x = 0; x < GRID_WIDTH; x++) {
            gfx_SetColor(grid[y][x]);
            gfx_FillRectangle_NoClip(x*CELL_SIZE+GRID_MARGIN, y*CELL_SIZE+GRID_MARGIN, CELL_SIZE, CELL_SIZE);
        }
    }
}

void drawPiece(Piece *piece) {
    // Loops through the blocks of the piece
    for (int i = 0; i < 4; i++) {
        Pos position = piece->blocks[i];
        gfx_SetColor(piece->color);
        gfx_FillRectangle_NoClip(position.x*CELL_SIZE+GRID_MARGIN, position.y*CELL_SIZE+GRID_MARGIN, CELL_SIZE, CELL_SIZE);
    }
}
