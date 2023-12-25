# File Handling 

## Data Files
- `Stream-oriented ddata files`
data is stored in the same manner as it appears on the screen.
- `System-oriented ddata files`
data files are more closely  associated with the OS.

## File Operations
- `Creating a new file`
- `Opening a file`
- `Reading a file`
- `Writing data into a file`
- `Closing a file`

## Steps to setup/process file operations
1. Declare a file pointer variable
2. Open file using `fopen()` method/function
3. Process the file using file using the suitable fxn
	- in `stdio.h` library
	
	`loading`

		- `fopen`: 
		- `fclose`:

	`reading`

		- `getc`: read a character from a file
		- `getw`: read an integer from a file
		- `fgets`: reads string of characters from a file

	`writing`

		- `putc`: write a character from a file
		- `putw`: write an integer to a file
		- `fprintf`: prints formated output into a file
		- `fputs`: write strings of characters into a file

	`inputing`

		- `fscanf`: reads formated input from a file

	`pointing`

		- `feof`: detects any file marker/pointer in a single file

4. Close the file using `fclosse()` fxn/method

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - creates a new file and writes a string of chars to it
 * Return: 0
 */

int main()
{
	// FILE *fopen(const char * filePath, const char * mode);
	// or ... you could just use the next declaration method
	FILE *fp;
	fp = fopen("filename.txt", "w") //w indicates the write method

	// start processing

	fprintf(fp, "%s", "Hello reader...")

	// end processing

	fclose(fp);
	return (0);
}
```

## More File Handling

- Read the contents of a file 

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - gets the contents of a file and prints it
 * Return: 0
 */

int main()
{
	// declare file pointer variable
	FILE *fileName;
	char ch[100]; // variable to hold file content

	fileName = fopen("filename.txt", "r"); // r indicated the read method

	printf("%s", fgets(ch, 50, filName));
	// below is the format of an fgets methos
	// fget(holder_variable, no_of_char_to_be_held, file_name);

	fclose(fileName);

	return (0);
}
```
