
/**
 * Multicopter air-mode
 *
 * The air-mode enables the mixer to increase the total thrust of the multirotor
 * in order to keep attitude and rate control even at low and high throttle.
 *
 * This function should be disabled during tuning as it will help the controller
 * to diverge if the closed-loop is unstable (i.e. the vehicle is not tuned yet).
 *
 * Enabling air-mode for yaw requires the use of an arming switch.
 *
 * @value 0 Disabled
 * @value 1 Roll/Pitch
 * @value 2 Roll/Pitch/Yaw
 * @group Mixer Output
 */
PARAM_DEFINE_INT32(MC_AIRMODE, 0);

/**
 * Multicopter Reduce Thrust
 *
 * The default behavior for multicopters is to trade altitude (z-thrust) for attitude automatically.
 *
 * This gives an alternative to the default behavior where z-thrust is never sacrificed for
 * attitude. The idea is to leave it up to the pilot to sacrifice altitude for attitude.
 *
 * If false, Z-thrust is never sacrificed for attitude (roll, pitch, yaw).
 * If true, default behavior. Z-thrust is reduced to make room for roll, pitch, and yaw
 * 	setpoints).
 *
 * @boolean
 * @group Mixer Output
 */
PARAM_DEFINE_INT32(MC_REDUCE_THRUST, 1);
