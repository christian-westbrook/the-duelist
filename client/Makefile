build:
	g++ ./src/*.cpp \
	-o game.exe \
	-Llib/SDL2/lib -I lib/SDL2/include \
	-lmingw32 -lSDL2main -lSDL2
	
run:
	python ./run.py

clean:
	rm ./*.so
	rm ./src/*.c
	rm -rf ./build/*

lint:
	pylint ./src/**/*.pyx