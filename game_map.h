
#ifndef GAME_MAP_H
#define GAME_MAP_H

#include "CommonFunc.h"
#include "BaseObject.h"

#define MAX_TILES 30

typedef struct Map
{
	int start_x_;
	int start_y_;

	int max_x_;
	int max_y_;

	int tile[MAX_MAP_Y][MAX_MAP_X];
	const char* file_name_;
};


class TileMat : public BaseObject
{
public:
	TileMat() { ; }
	~TileMat() { ; }
};

class GameMap
{
public:
	GameMap();
	~GameMap();
	
	void LoadMap(const char* name); 
	void LoadTiles(SDL_Renderer* screen);
	void DrawMap(SDL_Renderer* screen);
private:
	Map game_map_;
	TileMat tile_mat[MAX_TILES];
};

#endif 