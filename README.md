What is get_next_line ?
===

The aim of this project is to make function that returns a line read from a file descriptor.  
What we call a “line” is a succession of characters that end with ’\n’ (ascii code 0x0a) or with End Of File (EOF).

![Screen Shot 2019-04-30 at 6 34 15 PM](https://user-images.githubusercontent.com/45974214/56977905-957fbb80-6b76-11e9-9744-e0d434259eb2.png)

---

The return value can be 1, 0 or -1 depending on whether a line has been read, when the reading has been completed, or if an error has happened respectively.

Calling your function get_next_line in a loop will then allow you to read the text available on a file descriptor one line at a time until the end of the text, no matter the size of either the text or one of its lines.

Usage
===

You can try my project with the following commands:  
First, clone the repository
```
git clone https://github.com/lgaultie/get_next_line
cd get_next_line
```
Then, create libft.a to compile it later
```
cd libft
make
```
Finally, compile all files with a main of your choice.  
Note: you can change BUFF_SIZE in get_next_line.h.
