#include "obstruction.h"


const obstruction_t obstruction_types[7] = {
	{"block",
	{{0,0,0,0},
	{0,1,1,0},
	{0,1,1,0},
	{0,0,0,0}},
	0,
	0,
	'#',
	{0,0,0}},
	{"tee",
	{{0,0,0,0},
	 {1,1,1,0},
	 {0,1,0,0},
	 {0,0,0,0}},
	0,
	0,
	'#',
	{0,0,0}},
	{"zigzag_l",
	{{0,0,1,0},
	{0,1,1,0},
	{0,1,0,0},
	{0,0,0,0}},
	0,
	0,
	'#',
	{0,0,0}},
	{"zigzag_r",
	{{0,1,0,0},
	{0,1,1,0},
	{0,0,1,0},
	{0,0,0,0}},
	0,
	0,
	'#',
	{0,0,0}},
	{"lform_l",
	{{0,0,1,0},
	{0,0,1,0},
	{0,1,1,0},
	{0,0,0,0}},
	0,
	0,
	'#',
	{0,0,0}},
	{"lform_r",
	{{0,1,0,0},
	{0,1,0,0},
	{0,1,1,0},
	{0,0,0,0}},
	0,
	0,
	'#',
	{0,0,0}},
	{"pipe",
	{{0,1,0,0},
	{0,1,0,0},
	{0,1,0,0},
	{0,1,0,0}},
	0,
	0,
	'#',
	{0,0,0}}
};