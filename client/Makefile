build:
	python ./setup.py build_ext --inplace

run:
	python ./run.py

clean:
	rm ./*.so
	rm ./src/*.c
	rm -rf ./build/*

lint:
	pylint ./src/**/*.pyx