/* The MIT License (MIT)
 *
 * Copyright (c) 2014 - 2021, Andreas Merkle
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
@brief  Measurement
@file   vscp_evt_measurement.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
Measurements are fetched from the SI units and from SI derived units. The SI unit (or the SI
derived unit) is also used as the default unit. As in the SI unit standard, names for a unit is in
lower case ("newton") and the unit ("N") is in upper case.

This file is automatically generated. Don't change it manually.

*******************************************************************************/

#ifndef __VSCP_EVT_MEASUREMENT_H__
#define __VSCP_EVT_MEASUREMENT_H__

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include <stdint.h>
#include "..\user\vscp_platform.h"

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
extern BOOL vscp_evt_measurement_sendGeneralEvent(void);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendCount(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendLengthDistance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendMass(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendTime(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricCurrent(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendTemperature(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendAmountOfSubstance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendLuminousIntensityIntensityOfLight(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendFrequency(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRadioactivityAndOtherRandomEvents(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendForce(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendPressure(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendEnergy(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendPower(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricalCharge(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricalPotentialVoltage(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricalCapacitance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricalResistance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricalConductance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendMagneticFieldStrength(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendMagneticFlux(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendMagneticFluxDensity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendInductance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendLuminousFlux(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendIlluminance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRadiationDose(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendCatalyticActivity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendVolume(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSoundIntensity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendAngle(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendPositionWgs84(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSpeed(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendAcceleration(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendTension(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendDampMoistHygrometerReading(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendFlow(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendThermalResistance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRefractiveOpticalPower(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendDynamicViscosity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSoundImpedance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSoundResistance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendElectricElastance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendLuminousEnergy(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendLuminance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendChemicalConcentration(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/* "Reserved" not supported. No frame defined. */

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendDoseEquivalent(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/* "Reserved" not supported. No frame defined. */

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendDewPoint(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRelativeLevel(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendAltitude(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendArea(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRadiantIntensity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRadiance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendIrradianceExitanceRadiosity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSpectralRadiance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSpectralIrradiance(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSoundPressureAcousticPressure(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSoundEnergyDensity(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendSoundLevel(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRadiationDoseEquivalent(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendRadiationDoseExposure(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] unit The unit of the data.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurement_sendPowerFactor(uint8_t index, uint8_t unit, int32_t data, int8_t exp);

#endif  /* __VSCP_EVT_MEASUREMENT_H__ */
