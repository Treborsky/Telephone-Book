app:
	rm -rf build
	mkdir build
	g++ -std=c++17 src/main.cc -o build/Phonebook

clean:
	rm -rf build
