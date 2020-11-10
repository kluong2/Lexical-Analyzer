#include "LexicalAnalyzer.h"

int main()
{
	//Here is a string of all the textfiles that came with the project. I also added on my own "testing" textfile to test other conditions.
	string filename[] = { "ab.txt", "ab2.txt", "bad_assignment.txt", "bad_decl.txt", "bad_exp.txt", "bad_exp2.txt","bad_exp3.txt","bad_exp4.txt","bad_exp5.txt","bad_exp6.txt",
						"bad_exp7.txt", "bad_exp8.txt", "bad_scoping1.txt", "bad_scoping2.txt", "euclid.txt", "hiding.txt", "if.txt", "print.txt", "testing.txt" };

	LexicalAnalyzer analyze(filename[18]);

	analyze.next();//Opens up the file and stores it line-by-line in a string(line feeds included)

	while (analyze.kind() != "end-of-state")
	{

		analyze.next();
		cout << analyze.position() << " " << analyze.kind() << " " << analyze.value() << endl;

	}

	return 0;

}