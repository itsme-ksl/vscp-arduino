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
@brief  Information
@file   vscp_type_information.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
Most of the events below have an index parameter that can be used to indicate which of several SECO
(sensor/control) units on a node originated the event. Set to zero if the node only control one
item.

This file is automatically generated. Don't change it manually.

*******************************************************************************/

#ifndef __VSCP_TYPE_INFORMATION_H__
#define __VSCP_TYPE_INFORMATION_H__

/** @defgroup vscp_type_information Information
 * Level 1 protocol class types
 * @{
 * @ingroup vscp_l1
 */

/*******************************************************************************
    INCLUDES
*******************************************************************************/

#ifdef __cplusplus
extern "C"
{
#endif

/*******************************************************************************
    COMPILER SWITCHES
*******************************************************************************/

/*******************************************************************************
    CONSTANTS
*******************************************************************************/

/**
 * General Event.
 */
#define VSCP_TYPE_INFORMATION_GENERAL                             0

/**
 * A button has been pressed/released.
 */
#define VSCP_TYPE_INFORMATION_BUTTON                              1

/**
 * A mouse movement has occurred.
 */
#define VSCP_TYPE_INFORMATION_MOUSE                               2

/**
 * A node indicates that a condition is in its on state. Heater on, lights on are two examples.
 */
#define VSCP_TYPE_INFORMATION_ON                                  3

/**
 * A node indicates that a condition is in its off state. Heater off, lights off are two examples.
 */
#define VSCP_TYPE_INFORMATION_OFF                                 4

/**
 * A node tells the world that it is alive.
 */
#define VSCP_TYPE_INFORMATION_ALIVE                               5

/**
 * A node tells the world that it is terminating.
 */
#define VSCP_TYPE_INFORMATION_TERMINATING                         6

/**
 * A node indicates that an open has occurred. This can be a door/window open, a modem line open etc.
 */
#define VSCP_TYPE_INFORMATION_OPENED                              7

/**
 * A node indicates that a close has occurred. This can be a door/window close, a modem line closure
 * etc.
 */
#define VSCP_TYPE_INFORMATION_CLOSED                              8

/**
 * Heartbeats can be used to indicate that a unit is alive or to send periodic data. This can be sent
 * out at predefined intervals to indicate that the node is alive, however, it does not necessarily
 * mean the node is functioning as it should. It simply states that the node is connected to the
 * network. To check if a node is functioning, other properties such as a measurement event or
 * registry should be used. This event should be sent as a response to a “Segment Status Heartbeat”
 * (CLASS1.PROTOCOL, Type=1) in order to provide a method of finding out what is connected to the
 * network. The data bytes from byte 3 and forward can be used to send a descriptive/user friendly
 * name if desired.
 * Mandatory. All nodes should send this event at least once each minute. A Level II node should
 * normally not send this event but instead send Level II node heartbeat. Recommended interval is
 * 30-60 seconds but in a node that need to sleep longer to save resources a longer interval can be
 * used.
 */
#define VSCP_TYPE_INFORMATION_NODE_HEARTBEAT                      9

/**
 * This indicates that the node has a condition that is below a configurable limit.
 */
#define VSCP_TYPE_INFORMATION_BELOW_LIMIT                         10

/**
 * This indicates that the node has a condition that is above a configurable limit.
 */
#define VSCP_TYPE_INFORMATION_ABOVE_LIMIT                         11

/**
 * This can be used for slow pulse counts. This can be an S0-pulse interface or something similar.
 */
#define VSCP_TYPE_INFORMATION_PULSE                               12

/**
 * A node indicates that an error occurred.
 */
#define VSCP_TYPE_INFORMATION_ERROR                               13

/**
 * A node indicates that it has resumed operation.
 */
#define VSCP_TYPE_INFORMATION_RESUMED                             14

/**
 * A node indicates that it has paused.
 */
#define VSCP_TYPE_INFORMATION_PAUSED                              15

/**
 * A node indicates that it entered a sleeping state.
 */
#define VSCP_TYPE_INFORMATION_SLEEP                               16

/**
 * The system should enter its morning state. This can be a user pressing a button to set his/her
 * house to its morning state.
 */
#define VSCP_TYPE_INFORMATION_GOOD_MORNING                        17

/**
 * The system should enter its day state. This can be a user pressing a button to set his/her house to
 * its day state.
 */
#define VSCP_TYPE_INFORMATION_GOOD_DAY                            18

/**
 * The system should enter its afternoon state. This can be a user pressing a button to set his/her
 * house to its afternoon state.
 */
#define VSCP_TYPE_INFORMATION_GOOD_AFTERNOON                      19

/**
 * The system should enter its evening state. This can be a user pressing a button to set his/her
 * house to its evening state.
 */
#define VSCP_TYPE_INFORMATION_GOOD_EVENING                        20

/**
 * The system should enter its night state. This can be a user pressing a button to set his/her house
 * to its night state.
 */
#define VSCP_TYPE_INFORMATION_GOOD_NIGHT                          21

/**
 * The system should be on a temporary alert. This can be a user locking the door to go out to the
 * waste bin or similar situation. An alarm system should not be activated in this situation.
 */
#define VSCP_TYPE_INFORMATION_SEE_YOU_SOON                        22

/**
 * The system should be on a goodbye alert. This can be a user locking the door to go out for a days
 * work or similar situation. All alarm systems should be activated in this situation.
 */
#define VSCP_TYPE_INFORMATION_GOODBYE                             23

/**
 * A node indicates that a stop event occurred. This can for example be a motor stopping.
 */
#define VSCP_TYPE_INFORMATION_STOP                                24

/**
 * A node indicates that a start event occurred. This can be a motor starting.
 */
#define VSCP_TYPE_INFORMATION_START                               25

/**
 * A node indicates that a reset occurred. This can be a node doing a warm start.
 */
#define VSCP_TYPE_INFORMATION_RESET_COMPLETED                     26

/**
 * A node indicates that a reset occurred. This can also be a node doing a warm start.
 */
#define VSCP_TYPE_INFORMATION_INTERRUPTED                         27

/**
 * A node indicates that a sleep event occurred. This can be a node going to its inactive state.
 */
#define VSCP_TYPE_INFORMATION_PREPARING_TO_SLEEP                  28

/**
 * A node indicates that a wakeup event occurred. This can be a node going to it awake state.
 */
#define VSCP_TYPE_INFORMATION_WOKEN_UP                            29

/**
 * A node indicates that the system should enter its dusk state.
 */
#define VSCP_TYPE_INFORMATION_DUSK                                30

/**
 * A node indicates that the system should enter its dawn state.
 */
#define VSCP_TYPE_INFORMATION_DAWN                                31

/**
 * A node indicates that its active.
 */
#define VSCP_TYPE_INFORMATION_ACTIVE                              32

/**
 * A node indicates that its inactive.
 */
#define VSCP_TYPE_INFORMATION_INACTIVE                            33

/**
 * A node indicates that its busy.
 */
#define VSCP_TYPE_INFORMATION_BUSY                                34

/**
 * A node indicates that its idle.
 */
#define VSCP_TYPE_INFORMATION_IDLE                                35

/**
 * A steam of information from a node can be reported with this event. This can be a serial RS-232
 * channel or some other sequential stream.
 */
#define VSCP_TYPE_INFORMATION_STREAM_DATA                         36

/**
 * This event is used for cards, RFID's, iButtons, GSM phones and other identification devices. The
 * event is generated when the token device is attached/detached to/from the system. Level II has a
 * counterpart to this event that can take more data. CLASS2.INFORMATION Type=1
 * Depending on the Token device type a number of this event are sent on the segment with frame index
 * increase for each event. The total expected number can be deduced from the type.
 */
#define VSCP_TYPE_INFORMATION_TOKEN_ACTIVITY                      37

/**
 * A steam of information from a node can be reported with this event. This can be a serial RS-232
 * channel or some other sequential stream.
 */
#define VSCP_TYPE_INFORMATION_STREAM_DATA_WITH_ZONE               38

/**
 * This event can be used as a general confirm event for zoned and stream data.
 */
#define VSCP_TYPE_INFORMATION_CONFIRM                             39

/**
 * Response/confirmation from ex. a dimmer control after a dimmer command or some other unit that
 * change a level.
 */
#define VSCP_TYPE_INFORMATION_LEVEL_CHANGED                       40

/**
 * A node indicates that a warning condition occurred.
 */
#define VSCP_TYPE_INFORMATION_WARNING                             41

/**
 * A node indicates that a state change has occurred. Th numerical ID for the current state and the
 * state that is about to become active is supplied.
 */
#define VSCP_TYPE_INFORMATION_STATE                               42

/**
 * A node indicates that an action has been triggered by this event.
 */
#define VSCP_TYPE_INFORMATION_ACTION_TRIGGER                      43

/**
 * A node indicates that sunrise is detected/calculated.
 */
#define VSCP_TYPE_INFORMATION_SUNRISE                             44

/**
 * A node indicates that sunset is detected/calculated.
 */
#define VSCP_TYPE_INFORMATION_SUNSET                              45

/**
 * This event is used to mark the start of a multi-frame data transfer. This can typically be a GPS
 * received which sends a train of events from one GPS record. The index byte can be used to
 * distinguish record between each other.
 */
#define VSCP_TYPE_INFORMATION_START_OF_RECORD                     46

/**
 * This event is used to mark the end of a multi-frame data transfer. The index byte can be used to
 * distinguish record between each other.
 */
#define VSCP_TYPE_INFORMATION_END_OF_RECORD                       47

/**
 * This event is used to tell the system that a pre-set configuration is active. Usually a response
 * from a node after a CLASS1.CONTROL, Type=28 has been received by a node.
 */
#define VSCP_TYPE_INFORMATION_PRESET_ACTIVE                       48

/**
 * This event is used to tell the system that a detection of some kind has occurred.
 */
#define VSCP_TYPE_INFORMATION_DETECT                              49

/**
 * This event is used to tell the system that an overflow of some kind has occurred.
 */
#define VSCP_TYPE_INFORMATION_OVERFLOW                            50

/**
 * This is meant to be used as a confirmation event for CLASS1.CONTROL, Type=33 events.
 */
#define VSCP_TYPE_INFORMATION_BIG_LEVEL_CHANGED                   51

/**
 * Civil twilight is the period when the Sun is below the horizon but its center is less than 6
 * degrees below. The "Civil Twilight Starts" time is the dawn or civil dawn, with the center of the
 * Sun at exactly 6 degrees below the horizon. Equally, the "Civil Twilight Ends" time is dusk or
 * civil dusk, when the Sun is 6 degrees below the horizon in the evening.
 * During civil twilight, the sky is still illuminated, and with clear weather it is brightest in the
 * direction of the Sun. The Moon and the brightest stars and planets may be visible. It is usually
 * bright enough for outdoor activities without additional lighting.
 * Near the equator, where the Sun sets and rises in an almost vertical direction, the civil twilight
 * period can last only 21 minutes, a very fast nightfall compared to the much longer periods at
 * southern and northern latitudes. In regions north of 60°24' N or south of 60°24' S, there will be
 * at least one night when it does not get darker than this.
 * Technically, the start and end times are when the true geocentric position of the Sun is 96 degrees
 * from the zenith position.
 * A node indicates that sunrise twilight time is detected/calculated.
 */
#define VSCP_TYPE_INFORMATION_SUNRISE_TWILIGHT_START              52

/**
 * A node indicates that sunset twilight time is detected/calculated.
 * Civil twilight is the period when the Sun is below the horizon but its center is less than 6
 * degrees below. The "Civil Twilight Starts" time is the dawn or civil dawn, with the center of the
 * Sun at exactly 6 degrees below the horizon. Equally, the "Civil Twilight Ends" time is dusk or
 * civil dusk, when the Sun is 6 degrees below the horizon in the evening.
 * During civil twilight, the sky is still illuminated, and with clear weather it is brightest in the
 * direction of the Sun. The Moon and the brightest stars and planets may be visible. It is usually
 * bright enough for outdoor activities without additional lighting.
 * Near the equator, where the Sun sets and rises in an almost vertical direction, the civil twilight
 * period can last only 21 minutes, a very fast nightfall compared to the much longer periods at
 * southern and northern latitudes. In regions north of 60°24' N or south of 60°24' S, there will be
 * at least one night when it does not get darker than this.
 * Technically, the start and end times are when the true geocentric position of the Sun is 96 degrees
 * from the zenith position.
 */
#define VSCP_TYPE_INFORMATION_SUNSET_TWILIGHT_START               53

/**
 * A node indicates that nautical sunrise twilight time is detected/calculated.
 * Nautical twilight is the period when the center of the Sun is between 6 and 12 degrees below the
 * horizon, when bright stars are still visible in clear weather and the horizon is becoming visible.
 * It is too dark to do outdoor activities without additional lighting.
 * In the morning, nautical twilight starts at nautical dawn, when the Sun rises above 12 degrees
 * below the horizon; it ends when the Sun's center reaches 6 degrees below the horizon. In the
 * evening, nautical twilight begins when the Sun sinks below 6 degrees; it ends at nautical dusk,
 * when the Sun is lower than 12 degrees below the horizon.
 * For locations north of 54°34' N or south of 54°34' S latitude, the Sun will never be lower than 12
 * degrees below the horizon for a period in the summer.
 * Technically, the start and end times are when the true geocentric position of the Sun is 102
 * degrees from the zenith position.
 */
#define VSCP_TYPE_INFORMATION_NAUTICAL_SUNRISE_TWILIGHT_START     54

/**
 * A node indicates that nautical sunset twilight time is detected/calculated.
 * Nautical twilight is the period when the center of the Sun is between 6 and 12 degrees below the
 * horizon, when bright stars are still visible in clear weather and the horizon is becoming visible.
 * It is too dark to do outdoor activities without additional lighting.
 * In the morning, nautical twilight starts at nautical dawn, when the Sun rises above 12 degrees
 * below the horizon; it ends when the Sun's center reaches 6 degrees below the horizon. In the
 * evening, nautical twilight begins when the Sun sinks below 6 degrees; it ends at nautical dusk,
 * when the Sun is lower than 12 degrees below the horizon.
 * For locations north of 54°34' N or south of 54°34' S latitude, the Sun will never be lower than 12
 * degrees below the horizon for a period in the summer.
 * Technically, the start and end times are when the true geocentric position of the Sun is 102
 * degrees from the zenith position.
 */
#define VSCP_TYPE_INFORMATION_NAUTICAL_SUNSET_TWILIGHT_START      55

/**
 * A node indicates that astronomical sunrise twilight time is detected/calculated.
 * Astronomical twilight is the period when the center of the Sun is between 12 and 18 degrees below
 * the horizon. It starts at astronomical dawn, early in the morning when the Sun is higher than 18
 * degrees below the horizon. From this point, it will be difficult to observe certain faint stars,
 * galaxies, and other objects because the Sun starts to illuminate the sky. Astronomical twilight
 * ends at astronomical dusk in the late evening, when those faint objects again can be visible
 * because the Sun is lower than 18 degrees below the horizon. In locations north of 48°24' N or south
 * of 48°24', it never gets darker than this near the middle of the summer solstice (June or
 * December).
 * Technically, the start and end times are when the true geocentric position of the Sun is 108
 * degrees from the zenith position, or directly above the observer.
 * Astronomical twilight is the period when the center of the Sun is between 12 and 18 degrees below
 * the horizon.
 */
#define VSCP_TYPE_INFORMATION_ASTRONOMICAL_SUNRISE_TWILIGHT_START 56

/**
 * A node indicates that astronomical sunset twilight time is detected/calculated.
 * Astronomical twilight is the period when the center of the Sun is between 12 and 18 degrees below
 * the horizon. It starts at astronomical dawn, early in the morning when the Sun is higher than 18
 * degrees below the horizon. From this point, it will be difficult to observe certain faint stars,
 * galaxies, and other objects because the Sun starts to illuminate the sky. Astronomical twilight
 * ends at astronomical dusk in the late evening, when those faint objects again can be visible
 * because the Sun is lower than 18 degrees below the horizon. In locations north of 48°24' N or south
 * of 48°24', it never gets darker than this near the middle of the summer solstice (June or
 * December).
 * Technically, the start and end times are when the true geocentric position of the Sun is 108
 * degrees from the zenith position, or directly above the observer.
 * Astronomical twilight is the period when the center of the Sun is between 12 and 18 degrees below
 * the horizon.
 */
#define VSCP_TYPE_INFORMATION_ASTRONOMICAL_SUNSET_TWILIGHT_START  57

/**
 * This event is used for reporting of a calculated noon (real noon).
 */
#define VSCP_TYPE_INFORMATION_CALCULATED_NOON                     58

/**
 * Shutter is moving up.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_UP                          59

/**
 * Shutter is moving down.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_DOWN                        60

/**
 * Shutter is moving left.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_LEFT                        61

/**
 * Shutter is moving right.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_RIGHT                       62

/**
 * Shutter reached top end.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_END_TOP                     63

/**
 * Shutter reached bottom end.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_END_BOTTOM                  64

/**
 * Shutter reached middle end.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_END_MIDDLE                  65

/**
 * Shutter reached preset end.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_END_PRESET                  66

/**
 * Shutter reached preset left.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_END_LEFT                    67

/**
 * Shutter reached preset right.
 */
#define VSCP_TYPE_INFORMATION_SHUTTER_END_RIGHT                   68

/**
 * Long click detected.
 */
#define VSCP_TYPE_INFORMATION_LONG_CLICK                          69

/**
 * Single click detected.
 */
#define VSCP_TYPE_INFORMATION_SINGLE_CLICK                        70

/**
 * Double click detected.
 */
#define VSCP_TYPE_INFORMATION_DOUBLE_CLICK                        71

/**
 * A device generated a date event. Time is UTC.
 */
#define VSCP_TYPE_INFORMATION_DATE                                72

/**
 * A device generated a time event. Time is UTC.
 */
#define VSCP_TYPE_INFORMATION_TIME                                73

/**
 * A device generated a weekday event.
 */
#define VSCP_TYPE_INFORMATION_WEEKDAY                             74

/**
 * A device got locked.
 */
#define VSCP_TYPE_INFORMATION_LOCK                                75

/**
 * A device got unlocked.
 */
#define VSCP_TYPE_INFORMATION_UNLOCK                              76

/**
 * A device generated a date/time event. Time is UTC.
 */
#define VSCP_TYPE_INFORMATION_DATETIME                            77

/**
 * A rising (edge) is detected.
 */
#define VSCP_TYPE_INFORMATION_RISING                              78

/**
 * A falling (edge) is detected.
 */
#define VSCP_TYPE_INFORMATION_FALLING                             79

/**
 * Something has been updated.
 */
#define VSCP_TYPE_INFORMATION_UPDATED                             80

/**
 * Something has been updated.
 */
#define VSCP_TYPE_INFORMATION_CONNECT                             81

/**
 * Something has been disconnected.
 */
#define VSCP_TYPE_INFORMATION_DISCONNECT                          82

/**
 * Something has been reconnected.
 */
#define VSCP_TYPE_INFORMATION_RECONNECT                           83

/**
 * Enter, something has been entered.
 */
#define VSCP_TYPE_INFORMATION_ENTER                               84

/**
 * Exit, something has been exited.
 */
#define VSCP_TYPE_INFORMATION_EXIT                                85

/**
 * This is meant to be used as a confirmation event for CLASS1.CONTROL, Type=52 events.
 */
#define VSCP_TYPE_INFORMATION_INCREMENTED                         86

/**
 * This is meant to be used as a confirmation event for CLASS1.CONTROL, Type=53 events.
 */
#define VSCP_TYPE_INFORMATION_DECREMENTED                         87

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

#ifdef __cplusplus
}
#endif

#endif  /* __VSCP_TYPE_INFORMATION_H__ */

/** @} */
