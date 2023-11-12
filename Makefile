
compile-service:
	g++ -std=c++14 summer.cpp summerMain.cpp -lgtest -lgtest_main -pthread -o sumProgram

test-service: 
	./sumProgram

# compile orchestration
comp-orch:
	g++ -std=c++14 main.cpp train.cpp setup.cpp create_loaders.cpp model_checkpoint.cpp -o delphi-training-orchestration-service

# execute orchestration 
exec-orch:
	./delphi-training-orchestration-service