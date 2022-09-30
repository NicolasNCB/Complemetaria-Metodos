all: outputcpp outputpy
outputcpp: parabolico.cpp; g++ parabolico.cpp -o outputcpp; ./outputcpp
outputpy: animation.py; python animation.py
clean: ; rm x_values.csv parabolico.gif outputcpp
