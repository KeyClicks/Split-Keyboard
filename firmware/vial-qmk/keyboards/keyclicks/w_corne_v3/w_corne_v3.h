#pragma once

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array

#define LAYOUT( \
	K001, K002, K003, K004, K005, K006,       K008, K009, K010, K011, K012, K013, \
	      K101, K102, K103, K104, K105, K106,       K108, K109, K110, K111, K112, K113, \
	      K201, K202, K203, K204, K205, K206,       K208, K209, K210, K211, K212, K213, \
	                        K304, K305, K306,                         K311, K312, K313  \
) \
{ \
	{ KC_NO, K001,  K002,  K003,  K004,  K005,  K006,  KC_NO, K008,  K009,  K010,  K011,  K012,  K013 }, \
	{ KC_NO, K101,  K102,  K103,  K104,  K105,  K106,  KC_NO, K108,  K109,  K110,  K111,  K112,  K113 }, \
	{ KC_NO, K201,  K202,  K203,  K204,  K205,  K206,  KC_NO, K208,  K209,  K210,  K211,  K212,  K213 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, K304,  K305,  K306,  KC_NO, KC_NO, KC_NO, KC_NO, K311,  K312,  K313 }, \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}
