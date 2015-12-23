#ifndef _KD_CAMERA_HW_H_
#define _KD_CAMERA_HW_H_
 


#include <mach/mt_gpio.h>
#include <mach/mt_pm_ldo.h>


//
//Power 
#define CAMERA_POWER_VCAM_A MT65XX_POWER_LDO_VCAMA
#define CAMERA_POWER_VCAM_D MT65XX_POWER_LDO_VGP1  //VCAMD
#define CAMERA_POWER_VCAM_A2 MT65XX_POWER_LDO_VGP3 //VCAMAF
#define CAMERA_POWER_VCAM_D2 MT65XX_POWER_LDO_VGP2 //VCAMIO

//FIXME, should defined in DCT tool 
//
#ifndef GPIO_CAMERA_LDO_EN_PIN 
#define GPIO_CAMERA_LDO_EN_PIN GPIO94
#endif 
//
#ifndef GPIO_CAMERA_CMRST_PIN 
#define GPIO_CAMERA_CMRST_PIN GPIO211
#endif 
//
#ifndef GPIO_CAMERA_CMRST_PIN_M_GPIO
#define GPIO_CAMERA_CMRST_PIN_M_GPIO GPIO_MODE_00
#endif 
//
#ifndef GPIO_CAMERA_CMPDN_PIN 
#define GPIO_CAMERA_CMPDN_PIN GPIO212
#endif 
//
#ifndef GPIO_CAMERA_LDO_EN_PIN_M_GPIO
#define GPIO_CAMERA_LDO_EN_PIN_M_GPIO GPIO_MODE_00
#endif 
//
#ifndef GPIO_CAMERA_CMPDN_PIN_M_GPIO
#define GPIO_CAMERA_CMPDN_PIN_M_GPIO  GPIO_MODE_00 
#endif 
//
#ifndef GPIO_CAMERA_CMRST1_PIN
#define GPIO_CAMERA_CMRST1_PIN GPIO124
#endif
//
#ifndef GPIO_CAMERA_CMRST1_PIN_M_GPIO
#define GPIO_CAMERA_CMRST1_PIN_M_GPIO GPIO_MODE_00
#endif
//
#ifndef GPIO_CAMERA_CMPDN1_PIN
#define GPIO_CAMERA_CMPDN1_PIN GPIO34
#endif
//
#ifndef GPIO_CAMERA_CMPDN1_PIN_M_GPIO
#define GPIO_CAMERA_CMPDN1_PIN_M_GPIO GPIO_MODE_00
#endif

#ifndef GPIO_CAMERA_2_CMRST_PIN
#define GPIO_CAMERA_2_CMRST_PIN GPIOEXT17//shared by KPD_COL1
#endif
//
#ifndef GPIO_CAMERA_2_CMRST_PIN_M_GPIO
#define GPIO_CAMERA_2_CMRST_PIN_M_GPIO GPIO_MODE_00
#endif
//
#ifndef GPIO_CAMERA_2_CMPDN_PIN
#define GPIO_CAMERA_2_CMPDN_PIN GPIOEXT18//shared by KPD_COL2
#endif
//
#ifndef GPIO_CAMERA_2_CMPDN_PIN_M_GPIO
#define GPIO_CAMERA_2_CMPDN_PIN_M_GPIO GPIO_MODE_00
#endif
//i2c id for sensor device, MT8320_fpga, the I2C is attached on 1
#define IMG_SENSOR_I2C_GROUP_ID 0



#endif 