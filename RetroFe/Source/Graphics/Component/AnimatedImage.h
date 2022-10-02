/*
ANIMATEDIMAGE.H
NICK WILSON
2020
*/

#include <thread>

//#include "../../Utility/Utils.h"	//utilities
#include "Image.h"	//base class

#include "gif_lib.h"	//gif support

#ifndef ANIMATEDIMAGE_H
#define ANIMATEDIMAGE_H

#define GIF_MIN_DELAY 0x02

class AnimatedImage : public Image{
private:
	GifFileType* gif_data = nullptr;
	SDL_Surface* surface = nullptr;

	uint8_t depth = 0;
	uint16_t frame_index = 0;
	uint16_t delay_val = 0;

#ifdef MAKE_NO_PRERENDER
	bool prerendered = false;
#else
	bool prerendered = true;
#endif

	std::vector<SDL_Texture*> frames;

	bool play = true;
	bool quit = false;

	std::thread animationThread;

	void setPalette(ColorMapObject* colorMap, SDL_Surface* surface);

	void setIndex(uint16_t index);

	uint16_t getDelay(uint16_t index);

	uint16_t getDelay();

	ExtensionBlock* getGraphicsBlock(uint16_t index);

	void animate();

	void prerender();

public:
	uint16_t frame_count = 0;
	bool playable;

	AnimatedImage() {}

	AnimatedImage(SDL_Renderer* renderer, std::filesystem::path path);

	~AnimatedImage();

	void prepare(uint16_t index);

	void prepare();

	void set_status(Image::state s);
};

#endif
