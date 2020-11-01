# problemset2
This problem set will give you more practice with arithmetic in C++. In this problem set, you will use variables to store data
input by a user, perform arithmetic on the data contained within the variables, and output your findings using the terminal. Be
sure to read this problem set thoroughly, especially the sections of Collaboration and the Hand-in Procedure.
Collaboration
Collaboration amongst students is allowed to the extent outlined in the syllabus. That being the case, the goal of these
assignments is not to share code, but to learn the tools you need to succeed as a computer scientist. Students are expected to
write their own code free of plagiarism from any other student past or current. All assignments will be cross referenced across
all sections of CS135 using the Measure Of Software Similarity (Moss) to automatically determine the similarity of programs.
Refer to the syllabus for further details and consequences of breaking this policy.
Program: Octagon Measurements
Problem 1
Octagons pop up rather frequently in everyday life. You can find them on stop signs, tiles, windows, mirrors, etc. Your
objective in this problem set is to create a calculator that can calculate some useful measurements of octagons. Before you can
start calculating any measurements, you need some initial information to run the calculations on. For this problem set we will
only worry about octagons that all 8 side lengths are equal. You will need to start your program by prompting the user to enter
the length of the sides (1 side only), then you will be able to run your computations.
In this problem you will need to calculate the perimeter, area, circumcircle radius, incircle radius, and height of an octagon. of 1 2
the octagon the user input. The equations for perimeter and area can be found below. Build a program that:
1. Prompts the user to enter the side length of an octagon, then intakes that side length from the user.
2. Calculates the perimeter of the octagon input.
3. Calculates the area of the octagon input.
4. The ability to calculate the circumcircle radius of the input octagon.
5. The ability to calculate the incircle radius of the input octagon.
6. The ability to calculate the height of the input octagon.
The equation for perimeter of an octagon is:
perimeter = 8 * a
The equation for area of an octagon is:
area = 2 * a² * (1 + √2)
1 https://mathworld.wolfram.com/Circumcircle.html
2 https://mathworld.wolfram.com/Incircle.html
The equation for circumcircle radius of an octagon is:
radius 1/2 ) c = ( * a * √4 + 2 * √2
The equation for the incircle radius of an octagon is:
radius 1/2 ) 1 )
i = ( * a * ( + √2
The equation for the height of an octagon is:
height = 2 * radius i
Problem 2
The last thing you need to do as usual is output your calculations to the screen so that the user can see them. In order to make
the output line up nicely you may want to use iomanip (setw() ) to output the data in each column. In order to round each 3
decimal place in the output, you will need to use the setprecision() function from iomanip. Lastly, setfill() will need to be used 4 5
to place ‘.’ in the blank spaces not filled from setw(). Do not forget to make sure your output matches the example output
exactly. Add to your program:
1. The ability to display the calculated measurements in problems 1/2 to the screen.
