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
    SUSPEND,
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
    HOME,
    TARGET,
    ATTACK,
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
    {NOTHING, 50},
    {SYNC, 5},
    {NOTHING, 50},
    {A, 5},
    {NOTHING, 50},
    {B, 5},
    {NOTHING, 30},
    {L_LEFT, 25},
    {NOTHING, 20},
    {L_UP, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 70}};

static const int restaurant_iteration = 60;
static const command_t basic_interact[] = {
    {A, 5},
    {NOTHING, 10}};

static const int battle_iteration = 75;
static const command_t battle[] = {
    {TARGET, 30},
    {ATTACK, 10},
    {NOTHING, 20}};

static const command_t bench_loop[] = {
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 650},
    {L_DOWN, 10},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 20},
    {A, 5},
    {NOTHING, 650}};

static const command_t teleport_5[] = {
    {PLUS, 5},
    {NOTHING, 30},
    {L_UP, 5},
    {L_RIGHT, 5},
    {NOTHING, 30},
    {A, 5},
    {NOTHING, 100},
    {R_RIGHT, 50}};

static const command_t home_break[] = {
    {HOME, 5}};

#endif