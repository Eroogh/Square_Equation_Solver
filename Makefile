all: Square_Main.o Solver.o Functions_Compare_Numbers.o UI_Input.o Unit_Test.o Color_Lib.o File_Reader.o Start_Settings.o buildh
	echo hello from makefile!

Square_Main.o: Square_Main.cpp
	g++ Square_Main.cpp -c
	echo Square_Main.o compiled

Solver.o: Solver.cpp
	g++ Solver.cpp -c
	echo Solver.o compiled

Functions_Compare_Numbers.o: Functions_Compare_Numbers.cpp
	g++ Functions_Compare_Numbers.cpp -c
	echo Functions_Compare_Numbers.o compiled

UI_Input.o: UI_Input.cpp
	g++ UI_Input.cpp -c
	echo UI_Input.o compiled

Unit_Test.o: Unit_Test.cpp
	g++ Unit_Test.cpp -c
	echo Unit_Test.o compiled

Color_Lib.o: Color_Lib.cpp
	g++ Color_Lib.cpp -c
	echo Color_Lib.o compiled

File_Reader.o: File_Reader.cpp
	g++ File_Reader.cpp -c
	echo File_Reader.o compiled

Start_Settings.o: Start_Settings.cpp
	g++ Start_Settings.cpp -c
	echo Start_Settings.o compiled

link:
	g++ Functions_Compare_Numbers.o Solver.o Square_Main.o UI_Input.o Unit_Test.o Color_Lib.o File_Reader.o Start_Settings.o

buildh:
	g++ Square_Header.h Functions_Compare_Numbers.h Solver.h Square_Main.h UI_Input.h Unit_Test.h Color_Lib.h File_Reader.h Start_Settings.h

start:
	./a.exe

clean:
	rm *.o
	rm *.exe
