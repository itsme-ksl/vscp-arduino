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
@brief  Alert On LAN
@file   vscp_evt_aol.c
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
@see vscp_evt_aol.h

This file is automatically generated. Don't change it manually.

*******************************************************************************/

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include "vscp_evt_aol.h"
#include "..\core\vscp_core.h"
#include "..\core\vscp_class_l1.h"
#include "..\core\vscp_type_aol.h"

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
    VARIABLES
*******************************************************************************/

/*******************************************************************************
    FUNCTIONS
*******************************************************************************/

/**
 * General event
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendGeneralEvent(void)
{
    vscp_TxMessage  txMsg;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_GENERAL, VSCP_PRIORITY_3_NORMAL);

    txMsg.dataNum = 0;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendSystemUnpluggedFromPowerSource(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_UNPLUGGED_POWER, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendSystemUnpluggedFromNetwork(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_UNPLUGGED_LAN, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendChassisIntrusion(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_CHASSIS_INTRUSION, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendProcessorRemoval(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_PROCESSOR_REMOVAL, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendSystemEnvironmentalErrors(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_ENVIRONMENT_ERROR, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendHighTemperature(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_HIGH_TEMPERATURE, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendFanSpeedProblem(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_FAN_SPEED, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendVoltageFluctuations(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_VOLTAGE_FLUCTUATIONS, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendOperatingSystemErrors(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_OS_ERROR, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendSystemPowerOnError(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_POWER_ON_ERROR, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendSystemIsHung(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_SYSTEM_HUNG, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendComponentFailure(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_COMPONENT_FAILURE, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendRemoteSystemRebootUponReportOfACriticalFailure(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_REBOOT_UPON_FAILURE, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendRepairOperatingSystem(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_REPAIR_OPERATING_SYSTEM, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendUpdateBiosImage(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_UPDATE_BIOS_IMAGE, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

/**
 * System unplugged from power source
 * 
 * @param[in] index Index for record.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_aol_sendUpdatePerformOtherDiagnosticProcedures(uint8_t index, uint8_t zone, uint8_t subZone)
{
    vscp_TxMessage  txMsg;
    uint8_t         size    = 0;

    vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_UPDATE_DIAGNOSTIC_PROCEDURE, VSCP_PRIORITY_3_NORMAL);

    txMsg.data[0] = index;
    size += 1;

    txMsg.data[1] = zone;
    size += 1;

    txMsg.data[2] = subZone;
    size += 1;

    txMsg.dataNum = size;

    return vscp_core_sendEvent(&txMsg);
}

