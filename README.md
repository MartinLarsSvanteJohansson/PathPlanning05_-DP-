Path Planning with Dynamic Programming
===================
Solving path planning problems with dynamic programming.


#### Problem Statement
Given a **width** x **height** road network. Each edge represents a road, and each vertex a road intersection in cartesian coordinates.

Find the number of paths going from (**0**,**0**) to (**width**, **height**) that uses exactly **width**+**height** number of roads. 

##### Restrictions 
Some roads are blocked and can not be traversed and can not be part of the final path. 

For example: Blocked input **{ "0 0 0 1", "4 4 5 4" }** represents a blockage on the road between vertices (**0**,**0**) and (**0**,**1**) as well as on the road between vertices (**4**,**4**) (**5**,**4**) (undirected graph assumed and a blockage for both directions).


#### Resulting output


```
INPUT                                                             OUTPUT
----------------------------------------------------------------------------------------------------------
6, 6,                                                             252
{"0 0 0 1", "6 6 5 6"}


2, 100,                                                           6406484391866534976      
{}


9, 100, 
{"0 2 0 3", "1 2 1 3", "2 2 2 3", "3 2 3 3",                      0
 "4 2 4 3", "5 2 5 3", "6 2 6 3", "7 2 7 3", 
 "8 2 8 3", "9 2 9 3"}


10, 100, 
{"0 2 0 3", "1 2 1 3", "2 2 2 3", "3 2 3 3",                      66
 "4 2 4 3", "5 2 5 3", "6 2 6 3", "7 2 7 3", 
 "8 2 8 3", "9 2 9 3"} 


24, 24, 
{"16 19 16 18", "11 7 11 6", "7 17 7 16", "20 8 20 7",            5402543193164
 "18 16 18 17", "8 21 8 22", "17 8 17 9", "9 21 8 21", 
 "10 4 10 3", "1 20 1 21", "18 13 18 14", "13 18 13 17", 
 "20 11 20 12", "20 7 20 8", "24 0 24 1", "5 23 4 23", 
 "5 2 5 1", "13 17 13 16", "17 8 17 7", "13 23 14 23", 
 "1 15 2 15", "3 12 3 11", "22 1 23 1", "7 24 6 24", 
 "5 8 6 8", "17 1 18 1", "18 6 19 6", "19 12 18 12", 
 "21 17 21 18", "17 10 17 9", "10 2 10 1", "4 7 3 7", 
 "11 22 11 21", "20 22 20 23", "10 9 10 8", "1 3 1 4", 
 "4 10 4 9", "14 8 15 8", "14 21 14 20", "12 20 12 21", 
 "10 18 9 18", "13 16 13 17", "24 5 24 4", "17 15 17 16", 
 "8 7 7 7", "1 9 0 9", "5 14 5 15", "10 5 11 5", "1 2 2 2", 
 "1 15 1 16"}


24, 34, 
{"23 16 23 15", "22 13 21 13", "21 14 22 14", "21 16 22 16",      12427699681836075
 "20 18 20 19", "24 13 24 12", "20 19 20 20", "21 12 22 12", 
 "23 17 23 18", "22 15 21 15", "22 19 22 18", "22 19 22 18", 
 "23 20 22 20", "20 19 20 20", "20 19 21 19", "23 20 23 21", 
 "21 20 20 20", "21 21 22 21", "21 17 20 17", "21 19 22 19", 
 "23 21 22 21", "23 15 23 16", "21 21 21 20", "24 19 24 18", 
 "22 15 22 14", "21 13 20 13", "22 17 23 17", "21 18 20 18", 
 "23 13 24 13", "21 13 21 12", "22 12 22 13", "21 14 22 14", 
 "22 17 22 18", "21 12 21 11", "23 14 23 13", "24 13 23 13", 
 "20 18 21 18", "24 19 24 18", "23 17 22 17", "24 12 24 13", 
 "20 18 19 18", "22 19 23 19", "23 21 23 20", "20 17 20 16", 
 "20 17 21 17", "20 16 19 16", "20 15 20 16", "22 13 22 12", 
 "24 21 24 22", "24 21 23 21"}

```


