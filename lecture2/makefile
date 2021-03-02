#a test???
all: test

test: main1 main2 tou.h
	g++ ex1.obj tou.obj tou.h -o test

main1: ex1.cpp tou.h
	g++ -c ex1.cpp -o ex1.obj

main2: tou.cpp tou.h
	g++ -c tou.cpp -o tou.obj

clean:
	del *.obj test
