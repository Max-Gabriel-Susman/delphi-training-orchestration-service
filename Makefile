
compile-service:
	g++ -std=c++14 summer.cpp summerMain.cpp -lgtest -lgtest_main -pthread -o sumProgram

test-service: 
	./sumProgram

# compile orchestration
comp-orch:
	g++ -std=c++14 main.cpp -o main 

# execute orchestration 
exec-orch:
	./main