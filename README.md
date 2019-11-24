# Ebook
Ideas, work, homework, sketches
Commands and their meaning
firefox  -direct access to the browser from the terminal
whoami  - shows the username
whereami or pwd  -shows where the user is now
man (command)  -explains what a certain command does
sh  -activates shell command which has the same purpose, less convinient, but saves more space.
who- shows who is connected to this device ???


Ls -list of objects
Ls -l -detail list of objects
ls -a -list of all objects
ls -al -detailed list of all objects
cd -takes you directly to the "user" file
cd. -stays here
NOTE! Each directory has at least two directories inside it "." ".."
cd .. -takes you one folder back
cd nameofdirectory/ -takes you to the directory
cd ./name/ -takes to the directory
cd ~   -taskes to the user file
cd /   -to the main folder
mkdir name -creates a new directory
rmdir name/ -delete the directory


touch ccc.txt -creates a file 

rm name -remove a file or a directory

echo TEXT -simply creates a text

echo text > file name -creates a file and saves inside it 

echo -e "TEXT\tTEXT" a text with a space between texts

echo -e "text\vtext" -new paragraph

cp ccc.txt cccl.txt -create a copy

cat Directory/filename -can look inside a specific file without going there. Also can use similar strategy to delete or edit info.

mv ~/ccc.txt ~/Music/dd.tx -move with renaming. Need to be at the root.

nano NAME -create a new script

chmod 744 name -activate the code

PATH=$PATH:~/Ebook/ -CREATE A PATH THAT RESPONSES TO THE COMMAND WHEREIS

git clone LINK download a github file

Today we created a simple Hello world on c language. To begin with the most important thing to have in c code is "main () {}". this command is basically the head that alllows to find 
the location where everything has begun.
 The place for () is argument
 the code is written inside { }
 depending on variable (int void) the ending is return 0; or no
 all of the command lines should end with   ;
 the language is case sensitive
 // creates a line that is a comment ingored by the compiler
the text should be written in "", otherwise the cmpiler will confuse it with a command
\n"); after the text separates the resulting text from a new command line
gcc nasme.c -o anyname will compile the code and create the executor named "anyname"
to run the programm it is necessary to put ./ before anyname, because there is no path for the place providую

Cumputers use acsii tables to convert characters into binary.
Binary number is a number that consists of 0 and 1
Octal is the one from 0 to 7
Hexodecimal from 0-9-F
We laerned how to convert from one state to another
It is possible to make a conversion by using C language
Within a programm char a=(Any one character) have to be assigned
Then at the end of the printf static text sybmobls %d,o,x alongside with %n(to create a new line) need to be reated and quotes closed before mentioning "a"
NOTE !!! FOR each %d %o or %x a new line has to be created.

Operations 
<< or >> means that in binary the number has to be shifted either 2 d ecimals to the right or to the left
% shows the remainder obtained when dividing numbers
+= , -= etc. th result of the operations saved as a new number
> or < if the expression is true the result is 1, if incorrect 0
++  adds 1 to the number and saves the result as new one
in order to get a decimal result %(number)f should be used after %d / %d = this.

To write the code which alligns any 3 numbers in ascending order i could not use If else statements, because the operation of comparing three variables cannot be done. So, i had to use IF nested statements to get the desired result, by telling how respond in eahco ne of the cases. 
