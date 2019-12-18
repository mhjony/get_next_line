# get_next_line
• Write a function that returns a line read from a file descriptor.

• What we call a “line” is a succession of characters that end with ’\n’ (ascii code
0x0a) or with End Of File (EOF).

 • The first parameter is the file descriptor that will be used to read.

• The second parameter is the address of a pointer to a character that will be used
to save the line read from the file descriptor.

• The return value can be 1, 0 or -1 depending on whether a line has been read,
when the reading has been completed, or if an error has happened respectively.

• Your function get_next_line must return its result without ’\n’.

• Calling your function get_next_line in a loop will then allow you to read the text
available on a file descriptor one line at a time until the end of the text, no matter
the size of either the text or one of its lines.

• Make sure that your function behaves well when it reads from a file, from the
standard output, from a redirection etc.

• In you header file get_next_line.h you must have at least the prototype of the
function get_next_line and a macro that allows to choose the size of the reading
buffer for the read function. This value will be modified during the defence to
evaluate the strength of your function. That macro must be named BUFF_SIZE.

To run this project:

run: bash compile.sh

run: ./test_gnl filename
