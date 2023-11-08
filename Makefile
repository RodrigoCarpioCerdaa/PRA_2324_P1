bin/testListArray: testListArray.cpp ListArray.h List.h 
	mkdir -p bin
	g++ -o bin/testListArray testListArray.cpp ListArray.h
bin/testNode: testNode.cpp Node.h
	mkdir -p bin
	g++ -o bin/testNode testNode.cpp Node.h
bin/testListLinked: ListLinked.h testListLinked.cpp
	mkdir -p bin 
	g++ -o bin/testListLinked testListLinked.cpp ListLinked.h
clean:
	rm -r *.o *.gch bin
