/**
 * @file canIdle.h
 *
 * TODO: Comment.
 */
#ifndef CANIDLE_H_
#define CANIDLE_H_

/*---------------------------------------------------------------------------------------------------------------------
 *                                                 INCLUDES
 *-------------------------------------------------------------------------------------------------------------------*/

#include <stdint.h>
#include "canIdle_Config.h"
#include "canIdle_types.h"

/*---------------------------------------------------------------------------------------------------------------------
 *                                                 DEFINES
 *-------------------------------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------------------------------
 *                                             GLOBAL VARIABLES
 *-------------------------------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------------------------------
 *                                               TYPES DEFINE
 *-------------------------------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------------------------------
 *                                           VARIABLES DECLARATION
 *-------------------------------------------------------------------------------------------------------------------*/



/*---------------------------------------------------------------------------------------------------------------------
 *                                            FUNCTION DECLARATION
 *-------------------------------------------------------------------------------------------------------------------*/

extern void canIdle_Init (tCanIdle_Module * const module);
extern void canIdle_MainFunction(tCanIdle_Module * const module);
extern bool canIdle_IsDevWorking (tCanIdle_DeviceId id);
extern bool canIdle_Send (tCanIdle_DeviceId id, const uint8_t * payload, uint8_t size);
extern bool canIdle_Read (tCanIdle_DeviceId id, const uint8_t * payload, uint8_t * size);

extern bool canIdle_SetFunctionCallbackIsr ( tCanIdle_DeviceId id,
                                             callbackFunction func);

#endif /* CANIDLE_H_ */
