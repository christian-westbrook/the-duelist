build:
	g++ ./src/*.cpp \
	-o game.exe \
	-Llib/SDL2/lib -I lib/SDL2/include \
	-lmingw32 -lSDL2main -lSDL2
	
run:
	./game.exe

clean:
	rm game.exe

lint:
	pylint ./src/**/*.pyx