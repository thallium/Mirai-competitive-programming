test: test.cpp ../src/*
	g++ -std=c++17 -DCPPHTTPLIB_OPENSSL_SUPPORT test.cpp \
	-I../single_include/ \
	-I../single_include/MiraiCP \
	-I../single_include/3rd_include \
	-I../src/ \
	-lssl -lcrypto -o test
