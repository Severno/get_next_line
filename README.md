# get_next_line
### Score 125/100
##### Mandatory
100/100
##### Bonus
25/25
![Score](Score.png)
***
### Challenge

To create a function which returns the next line from a file descriptor each time the function is called, without losing the reading thread.  
  
The project achieved bonus score for using just one static variable, and handling multiple file descriptors without losing thread of reading on any.  
  
The project is very helpful for parsing exercises, in examples where there is one piece of data per line.  
With a simple program, **get_next_line** can behave like `cat`.

For example: The following main:
```c
#include "get_next_line.h"

int   main(int ac, char **av)
{
  char  *line;
  int   fd1;

  fd1 = open(av[1], O_RDONLY);
  while ((get_next_line(fd1, &line)) != 0)
	  printf(RED"%s\n"END, line);
  close(fd1);
  return (0);
}
```
The following would result from the above simple main:
```console
$> ./run_gnl big_bang.txt
Our whole universe was in a hot, dense state
Then nearly fourteen billion years ago expansion started, wait
The earth began to cool, the autotrophs began to drool
Neanderthals developed tools
We built a wall (we built the pyramids)
Math, science, history, unraveling the mysteries
That all started with the big bang! Hey! ...
```
Which would be the same as:
```console
$> cat big_bang.txt
Our whole universe was in a hot, dense state
Then nearly fourteen billion years ago expansion started, wait
The earth began to cool, the autotrophs began to drool
Neanderthals developed tools
We built a wall (we built the pyramids)
Math, science, history, unraveling the mysteries
That all started with the big bang! Hey! ...
```
The function must conform to 21's norm.  
The function cannot leak. All errors must be handled carefully. In no way can the function quit in an unexpected manner (Segmentation fault, bus error, double free, etc).  
Allowed functions are `read`, `malloc` and `free`. Everything else is forbidden.
***
### Using the project
The project must be submitted without both a Makefile and a main. A main has been supplied but you can use your own. To compile first run:
```console
git clone https://github.com/Severno/get_next_line
cd get_next_line/
cd libft/
make
cp libft.a ..
cd ..
gcc main.c get_next_line.c -I get_next_line.h libft.a -o run_gnl
./run_gnl big_bang.txt
```

This will compile **run_gnl**. Execute with a file as a parameter. If you modify the main to call `get_next_line` with `fd` parameter set to 0, get_next_line will wait for input on `stdin`
```console
./test_gnl [input_file]
```
As the first test run I chose lyrics from my most favorite show *The Big Bang Theory*. It should show lyrics like this:
```console
Our whole universe was in a hot, dense state
Then nearly fourteen billion years ago expansion started, wait
The earth began to cool, the autotrophs began to drool
Neanderthals developed tools
We built a wall (we built the pyramids)
Math, science, history, unraveling the mysteries
That all started with the big bang! Hey!
```
And so on.

------------
Enjoy)
