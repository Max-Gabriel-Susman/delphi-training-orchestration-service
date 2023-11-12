
compile-service:
	g++ -std=c++14 summer.cpp summerMain.cpp -lgtest -lgtest_main -pthread -o sumProgram

test-service: 
	./sumProgram