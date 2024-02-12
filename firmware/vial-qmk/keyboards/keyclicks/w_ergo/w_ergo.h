#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array

#define LAYOUT( \
	K000, K001, K002, K003, K004, K005, K006, K007, K008, K009, K010, K011, K012, K013, \
	K100, K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, \
	      K201, K202, K203, K204, K205, K206,       K208, K209, K210, K211, K212, K213, \
	K300, K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, \
	            K402, K403, K404, K405, K406,             K409, K410, K411, K412, K413, \
	      K501, K502, K503, K504, K505, K506,       K508, K509, K510, K511, K512, K513  \
) \
{ \
	{ K000,  K001,  K002,  K003,  K004,  K005,  K006,  K007,  K008,  K009,  K010,  K011,  K012,  K013 }, \
	{ K100,  K101,  K102,  K103,  K104,  K105,  K106,  K107,  K108,  K109,  K110,  K111,  K112,  K113 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  KC_NO, K208,  K209,  K210,  K211,  K212,  K213 }, \
	{ K300,  K301,  K302,  K303,  K304,  K305,  K306,  K307,  K308,  K309,  K310,  K311,  K312,  K313 }, \
	{ KC_NO, KC_NO, K402,  K403,  K404,  K405,  K406,  KC_NO, KC_NO, K409,  K410,  K411,  K412,  K413 }, \
	{ KC_NO, K501,  K502,  K503,  K504,  K505,  K506,  KC_NO, K508,  K509,  K510,  K511,  K512,  K513 }  \
}
