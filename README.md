# Meet Me In Midway

Between railway stations A and B, there are n stations, with the railroad codes
A = a0, a1, . . . , an− 1, an, an+1 = B.

The distance between stations is given in table D = {d0, . . . , dn}, where di = distance(ai, ai+1). The city in the midway of 
the railway line between A to B is to be named by the railroad company, Midway, of course. This city ai should satisfy: 
|distance(A, ai) − distance(ai, B)| is minimal over all choices of 1 ≤ i ≤ n.

The task is to ﬁnd which of the cities will be named Midway.

This program was designed to complete the above problem. 
The user inputs an integer n, followed by n integers as distances from city to city.
The program will determine which city shall be named Midway.

Written in C++ for a class project at the University of Kentucky.
