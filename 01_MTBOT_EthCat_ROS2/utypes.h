#ifndef __UTYPES_H__
#define __UTYPES_H__

#include "cc.h"

/* Object dictionary storage */

typedef struct
{
   /* Identity */

   uint32_t serial;

   /* Inputs */

   uint32_t md80_addrs[6];
   struct
   {
      uint8_t md80_dev_no;
      uint8_t command;
      uint8_t size;
      uint32_t timestamp;
      uint32_t dataRet0;
      uint32_t dataRet1;
      uint32_t dataRet2;
      uint32_t dataRet3;
      uint32_t dataRet4;
   } md80_Respond;
   struct
   {
      uint8_t Mode;
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Temperature;
      uint8_t Error;
      uint8_t enabled;
   } md80_0_DataReturn;
   struct
   {
      uint8_t Mode;
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Temperature;
      uint8_t Error;
      uint8_t enabled;
   } md80_1_DataReturn;
   struct
   {
      uint8_t Mode;
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Temperature;
      uint8_t Error;
      uint8_t enabled;
   } md80_2_DataReturn;
   struct
   {
      uint8_t Mode;
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Temperature;
      uint8_t Error;
      uint8_t enabled;
   } md80_3_DataReturn;

   /* Outputs */

   struct
   {
      uint8_t md80_dev_no;
      uint8_t command;
      uint8_t size;
      uint32_t timestamp;
      uint32_t dataSet0;
      uint32_t dataSet1;
      uint32_t dataSet2;
      uint32_t dataSet3;
      uint32_t dataSet4;
   } md80_Command;
   struct
   {
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Mode;
      uint8_t enable;
   } md80_0_DataControl;
   struct
   {
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Mode;
      uint8_t enable;
   } md80_1_DataControl;
   struct
   {
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Mode;
      uint8_t enable;
   } md80_2_DataControl;
   struct
   {
      uint16_t Position;
      uint16_t Velocity;
      uint16_t Torque;
      uint8_t Mode;
      uint8_t enable;
   } md80_3_DataControl;

} _Objects;

extern _Objects Obj;

#endif /* __UTYPES_H__ */
