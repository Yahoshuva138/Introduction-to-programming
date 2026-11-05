1| Planetary Colonisation Evaluation Module 
2| 
3| Write a program to implement a planetary colonization evaluation module using a structure array, for space scientists who are evaluating the suitability of other planets for human colonization.
4| 
5| This program should be capable of handling the following operations:
6| 
7| The program should prompt the user to enter the number of planets. This will determine the size of the array of structures.
8| 
9| Each structure should have the following fields:
10| 
11| planetName (array of characters) to store the name of the planet,
12| 
13| distanceFromEarth (float) for the distance of the planet from Earth, in light-years,
14| 
15| gravity (float) for the planet's gravity, as a factor of Earth’s gravity ‘g’ (1.2 implies 1.2g, 0.5 implies 0.5g, etc)
16| 
17| atmosphere (a nested structure) that includes oxygen level, carbon dioxide level, and nitrogen level in percentages (each stored as a float).
18| 
19| habitable (character) which is automatically evaluated by the program; a planet is habitable if its gravity is between 0.8 and 1.2 g (both inclusive) and its oxygen level is between 18% and 25% (b[...]
20| 
21| 
22| The program should present a menu to the user with the following options:
23| 
24| a) Find and print all habitable planets, sorted by their distance from Earth in ascending order.
25| 
26| b) Search for and print the names of all planets where the oxygen level is above a user-given threshold and the carbon dioxide level is below another user-given threshold.
27| 
28| c) Search for planets by a keyword or substring in their name (the keyword will be provided by the user) and print the planet names that match.
29| 
30| d) Exit the program.
31| 
32| The program should continue to display the menu after each operation until the user chooses to exit.
33| 
34| 
35| Important considerations for the operations:
36| 
37| Assume that the planet name consists of just one word, and there are no spaces in the name.
38| 
39| The menu and other formatting has already been provided to you in the template code. Only write in the space provided to you (denoted by the instructions in comments).
40| 
41| When sorting planets by distance, use the Selection Sort algorithm.
42| 
43| When searching by keyword or substring in planet names, use the strstr function to match the keyword.
44| 
45| If the user enters an invalid option, the program should display an "Invalid input" message.
46| 
47| Please go through the test case given below to design your MENU and understand how the expected outputs should be printed.
48| 
49| Testcase
50| 
51| Enter the number of planets: 3
52| Enter Planet Name: Mercury
53| Enter Distance from Earth (in light-years): 4.3
54| Enter Planet Gravity (in terms of g): 1.15
55| Enter Atmosphere Composition (Oxygen, Carbon Dioxide, Nitrogen) as percentages: 19
56| 0.03
57| 75
58| Enter Planet Name: Earth
59| Enter Distance from Earth (in light-years): 0
60| Enter Planet Gravity (in terms of g): 1
61| Enter Atmosphere Composition (Oxygen, Carbon Dioxide, Nitrogen) as percentages: 21
62| 0.02
63| 78
64| Enter Planet Name: Neptune
65| Enter Distance from Earth (in light-years): 12
66| Enter Planet Gravity (in terms of g): 0.7
67| Enter Atmosphere Composition (Oxygen, Carbon Dioxide, Nitrogen) as percentages: 16
68| 0.05
69| 80
70| 
71| MENU
72| 1. Find and print all habitable planets
73| 2. Search by oxygen and carbon dioxide levels
74| 3. Search by keyword in planet names
75| 4. Exit
76| 1
77| Habitable planets (sorted by distance from Earth):
78| Earth - 0.00 light-years
79| Mercury - 4.30 light-years
80| 
81| MENU
82| 1. Find and print all habitable planets
83| 2. Search by oxygen and carbon dioxide levels
84| 3. Search by keyword in planet names
85| 4. Exit
86| 3
87| Enter a keyword to search in planet names: Ear
88| Planets matching the keyword "Ear":
89| Earth
90| 
91| MENU
92| 1. Find and print all habitable planets
93| 2. Search by oxygen and carbon dioxide levels
94| 3. Search by keyword in planet names
95| 4. Exit
96| 4
97| Exiting...
