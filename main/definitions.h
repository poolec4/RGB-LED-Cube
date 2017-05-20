// #define b_00 19
// #define b_01 20
// #define b_02 10
// #define b_03 11
// #define b_10 26
// #define b_11 27
// #define b_12 4
// #define b_13 5
// #define b_20 31
// #define b_21 35
// #define b_22 45
// #define b_23 0
// #define b_30 36
// #define b_31 39
// #define b_32 46
// #define b_33 40

int bMap[4][4] = {
	{19,20,10,11},
	{36,27,4,5},
	{31,35,45,0},
	{36,39,46,40}
};

// #define g_00 17
// #define g_01 16
// #define g_02 14
// #define g_03 15
// #define g_10 23
// #define g_11 22
// #define g_12 8
// #define g_13 9
// #define g_20 29
// #define g_21 30
// #define g_22 1
// #define g_23 3
// #define g_30 34
// #define g_31 37
// #define g_32 44
// #define g_33 47

int gMap[4][4] = {
	{17,16,14,15},
	{23,22,8,9},
	{29,30,1,3},
	{34,37,44,47}
};

// #define r_00 21
// #define r_01 18
// #define r_02 12
// #define r_03 13
// #define r_10 25
// #define r_11 24
// #define r_12 6
// #define r_13 7
// #define r_20 28
// #define r_21 33
// #define r_22 43
// #define r_23 2
// #define r_30 32
// #define r_31 38
// #define r_32 42
// #define r_33 41

int rMap[4][4] = {
	{21,18,12,13},
	{25,24,6,7},
	{28,33,43,2},
	{32,38,42,41}
};

int layer0_state[4][4][3]; //row,column,(r,g,b)
int layer1_state[4][4][3];
int layer2_state[4][4][3];
int layer3_state[4][4][3];

#define l_0 2
#define l_1 4
#define l_2 17
#define l_3 15

#define DELAY 2
