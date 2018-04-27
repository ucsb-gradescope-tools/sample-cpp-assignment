A sample C++ assignment to show how diff-based autograding works. The corresponding autograder can be found at https://github.com/ucsb-gradescope-tools/sample-cpp-autograder. When student programs are run by the autograder, they will exist in the same directory as the files in provided-files.


## Assignment description

Create six .cpp files: helloWorld.cpp, helloStderr.cpp, helloFile.cpp, readStdin.cpp, and readFile.cpp. A makefile is provided.

### helloWorld.cpp

Write "Hello, world!" to stdout, ending in a newline.

### helloStderr.cpp

Write "Hello, stderr!" to stderr, ending in a newline.

### helloFile.cpp

Write "Hello, file!" to hello.txt, ending in a newline.

### readStdin.cpp

Prompt the user for two numbers and display the sum. It should follow this format:

> Enter an integer value for a: 4
> Enter an integer value for b: 5
> 4 + 5 = 9
>

If the user input is not an integer, write "Not an integer!" to stdout and terminate the program. Example:

> Enter an integer value for a: 4
> Enter an integer value for b: e
> Not an integer!
>

### readFile.cpp

Read the first line of text from file "input.txt" and print the length of the line to stdout, ending in a newline.

### countToN.cpp

Take an integer n as a command-line argument. Write integers 0 through n inclusive to stdout, each on a separate line. If n is not an integer, or if there are no arguments, write "usage: ./countToN int_to_count_to" to stderr. If n is negative, write nothing.