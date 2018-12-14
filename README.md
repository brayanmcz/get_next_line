# get_next_line
"Reading a line on a fd is way too tedious"

## Table of Contents
* [Summary?](#summary)
* [What is gnl?](#what-is-gnl?)
* [How does it work?](#how-does-it-work)

## Summary
The aim of this project is to make you code a function that returns a line ending with a newline, read from a file descriptor.

## What is gnl?
This project 'get_next_line' is used to get a line from a file. To successfully read a line from a file we must understand file descriptors.
One limitation in this project was getting the function to work with a buffer of any size.

## How does it work?
If you have already cloned my repo cd into the corresponding directory, otherwise you can run:

	git clone https://github.com/brayanmcz/get_next_line.git
    cd get_next_line
    
Now clone the contents of the submodule libft by running:
    
    cd libft
    git submodule init 
    git submodule update
    
To compile the library from all the source files run:

	make && cd ..
    
To test the function is working properly:

	gcc main.c get_next_line.c libft/libft.a
    ./a.out
    
You will now be able to enjoy some of my favorite quotes from *Michael Scott* from the show __The Office__.
    
__* Disclaimer: *__ 
*This repo is __NOT__ here for you to just copy code! If you are having trouble with your project, talk to your peers. If you cannot figure it out together, come back, read the code and try your best to understand what is going on. Write tests. Run the functions yourself. Then code the function to your understanding. Don't forget to enjoy yourself as you solve these problems. Coding should be at least a little fun. :)*
