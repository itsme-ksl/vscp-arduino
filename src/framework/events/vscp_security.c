/* The MIT License (MIT)
 *
 * Copyright (c) 2014 - 2020, Andreas Merkle
 * http://www.blue-andi.de
 * vscp@blue-andi.de
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/*******************************************************************************
    DESCRIPTION
*******************************************************************************/
/**
@brief  VSCP class 1 type Security events
@file   vscp_security.c
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
@see vscp_security.h

This file is automatically generated. Don't change it manually.

*******************************************************************************/

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include "vscp_security.h"
#include "../core/vscp_core.h"
#include "../core/vscp_class_l1.h"
#include "../core/vscp_type_security.h"

/*******************************************************************************
    COMPILER SWITCHES
*******************************************************************************/

/*******************************************************************************
    CONSTANTS
*******************************************************************************/

/*******************************************************************************
    MACROS
*******************************************************************************/

/*******************************************************************************
    TYPES AND STRUCTURES
*******************************************************************************/

/*******************************************************************************
    PROTOTYPES
*******************************************************************************/

/*******************************************************************************
    LOCAL VARIABLES
*******************************************************************************/

/*******************************************************************************
    GLOBAL VARIABLES
*******************************************************************************/

/*******************************************************************************
    GLOBAL FUNCTIONS
*******************************************************************************/

/**
 * Undefined security issue.
 *
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendUndefinedEvent(void)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_UNDEFINED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 0;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A motion has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendMotionDetectEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_MOTION_DETECT, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A glass break event has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all subzones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendGlassBreakEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_GLASS_BREAK, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A beam break event has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendBeamBreakEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_BEAM_BREAK, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A sensor tamper has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendSensorTamperEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_SENSOR_TAMPER, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A shock sensor event has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendShockSensorEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_SHOCK_SENSOR, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A smoke sensor event has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendSmokeSensorEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_SMOKE_SENSOR, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A heat sensor event has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendHeatSensorEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_HEAT_SENSOR, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A panic switch event has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendPanicSwitchEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_PANIC_SWITCH, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Indicates a door sensor reports that a door is open.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendDoorContactEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_DOOR_CONTACT, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Indicates a window sensor reports that a window is open.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendWindowContactEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_WINDOW_CONTACT, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * CO sensor has detected CO at non secure level
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendCoSensorEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_CO_SENSOR, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * A frost sensor condition is detected
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendFrostDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_FROST_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Flame is detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendFlameDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_FLAME_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Low oxygen level detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendOxygenLowEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_OXYGEN_LOW, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Weight-detector triggered.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendWeightDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_WEIGHT_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Water has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendWaterDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_WATER_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Condensation (humidity) detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendCondensationDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_CONDENSATION_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Noise (sound) has been detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendNoiseDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_NOISE_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Harmful sound levels detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendHarmfulSoundLevelsDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_HARMFUL_SOUND_LEVELS_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * Tamper detected.
 *
 * @param[in] userData User defined data.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @return Status
 * @retval FALSE Failed to send the event
 * @retval TRUE  Event successul sent
 *
 */
extern BOOL vscp_security_sendTamperDetectedEvent(uint8_t userData, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_SECURITY, VSCP_TYPE_SECURITY_TAMPER_DETECTED, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 3;
    txMsg.data[0] = userData;
    txMsg.data[1] = zone;
    txMsg.data[2] = subZone;

    return vscp_core_sendEvent(&txMsg);
}

/*******************************************************************************
    LOCAL FUNCTIONS
*******************************************************************************/

