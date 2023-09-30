This project aims to write a function that returns a line read from a file descriptor.

Requirments:

•Repeated calls (e.g., using a loop) to your get_next_line() function should let
 you read the text file pointed to by the file descriptor, one line at a time. 

•Your function should return the line that was read. If there is nothing else to read or if an error occurred, 
 it should return NULL.

•Make sure that your function works as expected both when reading a file and when
 reading from the standard input.

•Please note that the returned line should include the terminating \n character,
 except if the end of file was reached and does not end with a \n character.
