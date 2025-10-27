#ifndef _INSTRUCTIONS_H_
#define _INSTRUCTIONS_H_

#include "Joystick.h"

#if !defined(ARRAY_SIZE)
#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

typedef enum
{
	SYNC_CONTROLLER,
	BATTLE_RESTAURANT,
	BATTLE,
	BENCH,
	TELEPORT5,
	CLEANUP,
	DONE
} State_t;

typedef enum
{         // All of the commands for controlls that you want to use go here.
    L_UP, // Don't forget to add them to the case statement at the bottom to tell the computer what the commands mean
    L_DOWN,
    L_LEFT,
    L_RIGHT,
    R_UP,
    R_DOWN,
    R_LEFT,
    R_RIGHT,
    A,
    B,
    Y,
    X,
    L,
    R,
    ZL,
    ZR,
    MINUS,
    PLUS,
    TARGET,
    ATTACK,
    SUSPEND,
    SYNC,
    NOTHING
} Buttons_t;

typedef struct
{
    Buttons_t button;
    uint16_t duration;
} command_t;

static const command_t sync_controller[] = {
    {SYNC, 5},
    {NOTHING, 25},
    {SYNC, 5},
    {NOTHING, 25},
    {A, 5},
    {NOTHING, 100}};

static const int counter_iteration = 30;
static const command_t basic_interact[] = {
    {A, 5},
    {NOTHING, 30}};

static const int battle_iteration = 3000;
static const command_t battle[] = {
    {TARGET, 15},
    {ATTACK, 5},
    {NOTHING, 30}};

static const command_t teleport_5[] = {
    {PLUS, 5},
    {NOTHING, 30},
    {L_UP, 5},
    {L_RIGHT, 5},
    {NOTHING, 30},
    {A, 5},
    {NOTHING, 100},
    {R_RIGHT, 50}};

#endif