#define MACHINE_NAME            "Cyclone PCB Factory"

   #define X_STEP_PIN                  GPIO_NUM_12
   #define X_DIRECTION_PIN             GPIO_NUM_14
   #define Y_STEP_PIN                  GPIO_NUM_27
   #define Y_DIRECTION_PIN             GPIO_NUM_26
   #define Z_STEP_PIN                  GPIO_NUM_25
   #define Z_DIRECTION_PIN             GPIO_NUM_33

   #define X_LIMIT_PIN                 GPIO_NUM_17
   #define Y_LIMIT_PIN                 GPIO_NUM_4
   #define Z_LIMIT_PIN                 GPIO_NUM_15

   #define LIMIT_MASK                  B111

   #define STEPPERS_DISABLE_PIN        GPIO_NUM_32

   #define SPINDLE_OUTPUT_PIN          GPIO_NUM_2   // labeled SpinPWM
   #define PROBE_PIN                   GPIO_NUM_35  // labeled Probe

   #define CONTROL_RESET_PIN           GPIO_NUM_34  // labeled Reset, needs external pullup
   #define CONTROL_FEED_HOLD_PIN       GPIO_NUM_36  // labeled Hold,  needs external pullup
   #define CONTROL_CYCLE_START_PIN     GPIO_NUM_39  // labeled Start, needs external pullup