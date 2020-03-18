# _Printf project for Holberton School students_
In this project, we created an emulation of the printf function from C, named "_ _printf"_. This function allows you to print diferents kind of formats on the console just as the original printf does. This function specially works with integers, decimals, characteres, and strings.
![](https://images.squarespace-cdn.com/content/v1/5a4bfe8bf09ca4228ceca3b7/1539139199598-ANH454IHZI1OKWONKRXY/ke17ZwdGBToddI8pDm48kNp8pt3EdxuCXc7Btqw6aCUUqsxRUqqbr1mOJYKfIPR7LoDQ9mXPOjoJoqy81S2I8N_N4V1vUb5AoIIIbLZhVYxCRW4BPu10St3TBAUQYVKc582kKJI7R4YoEbaG0ar5y9SuJlHH4BCe-KXYJFHtaWtSg47dcfuoHTlsl7xAkdij/logo.jpg?format=2500w)

## _Code Features_
- Edited using vi and emacs.
- All the files has been compiled on Ubuntu 14.04 LTS with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic.
- The code has been writen using betty-style.pl and betty-doc.pl.
- There are not global variables.
- There are no more than 5 functions per file.
- The prototypes of all theese functions has been included in the header file called holberton.h.

## _Function Features_
- Prototype: int _printf(const char *format, ...);
- Prints single characters contain in the ASCCI code usig the "%i" format.
- Prints simple strings or strings saved in a variable using " " or %s respectivly.
- Prints integers using the %i format.
- Prints decimal numbers using the %d format.
- Returns the lenght os the strings.

## _Files description_ 
### _holberton.h_
Is the header of this project, and contains all the portotypes of the functions used to created _ _printf_, also contains the structures and the libraries that we used.
###  _printf.c_
Here is our main function. _printf.c_ is the file that contains the function in charge of conect with the propper function to print an specific format. 
### _str.c_
In this file, you are gonna find the function to print strings (\_str) using loops and if else conditionals.
### _char.c_
char.c is the file that contains the function to print a simple character (\_char) on the console.
### _int.c_
This file contains all the functions related to print numbers in diferents formats, as integers (\_print_number), doubles (\_print_numd), and unsigned numbers (\_print_unsigned).

## Examples
### 1
- char author = ["Pablo Picasso"];
- input: \_printf("Learn the rules like a pro, so you can break them like an artist. -%s", author);
- output: Learn the rules like a pro, so you can break them like an artist. -Pablo Picasso
### 2
- int n = 4;
- input: \_printf("I have %i duaghters", n);
- output: I have 4 daughters
# By:
### David Alejandro Hincapié and Rene Mauricio Olarte for Holberton School.
