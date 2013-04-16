CC = g++
CXXFLAGSS =-I. -I../libraries

libtest: Servo.o BrushlessDC.o MotorAxis.o example.o
	$(CC) $^ -o $@ $(CXXFLAGS)

%.o: ../libraries/%.cpp
	$(CC) -c $< $(CXXFLAGS) -o $@

%.o: %.cpp
	$(CC) -c $< $(CXXFLAGS) -o $@

clean:
	rm -rf *.o libtest
