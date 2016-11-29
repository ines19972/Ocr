void init_sdl(void);

SDL_Surface *load_image(char *path);

void grayscale(SDL_Surface *img);

void binarize(SDL_Surface *img);

int **matrix_from_img(SDL_Surface *img);
