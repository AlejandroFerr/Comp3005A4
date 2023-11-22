objects = main.o Date.o Student.o StudentTable.o

a4: $(objects)
	g++ -o a4 $(objects)

main.o: main.cc
	g++ -c main.cc 

Date.o: Date.h Date.cc 
	g++ -c Date.cc

Student.o: Student.h Student.cc 
	g++ -c Student.cc

StudentTable.o: StudentTable.h StudentTable.cc
	g++ -c StudentTable.cc

clean:
	rm -f a4 *.o	
