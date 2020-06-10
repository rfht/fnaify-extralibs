PREFIX ?=	/usr/local

all: AZSNotSFML FMOD_SDL_stub SDL_image_compact


install: all
	install AZSNotSFML/atomstb/libatomstb.so* $(PREFIX)/lib/
	install FMOD_SDL_stub/libfmod_SDL.so* $(PREFIX)/lib/
	install SDL_image_compact/libSDL2_image_compact.so* $(PREFIX)/lib/

.PHONY: clean uninstall AZSNotSFML FMOD_SDL_stub SDL_image_compact

AZSNotSFML:
	$(MAKE) -C AZSNotSFML/atomstb

FMOD_SDL_stub:
	$(MAKE) -C FMOD_SDL_stub

SDL_image_compact:
	$(MAKE) -C SDL_image_compact

clean:
	@$(MAKE) -C AZSNotSFML clean
	@$(MAKE) -C FMOD_SDL_stub clean
	@$(MAKE) -C SDL_image_compact clean

uninstall:
	rm -f $(PREFIX)/lib/libatomstb.so*
	rm -f $(PREFIX)/lib/libSDL2_image_compact.so*
	rm -f $(PREFIX)/lib/libfmod_SDL.so*
