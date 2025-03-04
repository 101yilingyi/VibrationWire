#ifndef	__DRV_GPIO_H
#define __DRV_GPIO_H

// 12V-OUT, PA8
void GPIO_12vPower_Init(void);
void GPIO_12vPower_Ctrl(const unsigned char status);

// 3V3D-M, PC0
void GPIO_3v3Power_Init(void);
void GPIO_3v3Power_Ctrl(const unsigned char status);

// status LED 
void GPIO_4GModule_RS485_StatusLED_Init(void);
void GPIO_4GModule_StatusLED_Ctrl(const unsigned char status);
void GPIO_RS485_StatusLED_Ctrl(const unsigned char status);

/* WatchDog Pins: PB1-WD-WAKE, PB8-WD-DONE, RESET */
void GPIO_WatchDog_Init(void);
void WatchDog_Feed(void);

/* RS485: PD10 收发控制 */
void GPIO_RS485_CON_Init(void);
void GPIO_RS485_CON_Ctrl(const unsigned char status);

/* 通信方式选择: 0-RS485, 1-4G Module */
void GPIO_CommunicationMode_Init(void);
//void GPIO_CommunicationMode_Ctrl(const unsigned char status);
unsigned char Get_CommunicationMode(void);

/* RTC, PA0 唤醒引脚 */
void GPIO_RTC_WKUP_Init(void);

/* 4G Module: PC1-RESET, PC2-RELOAD 
 * PC1-RESET, 用来重启网络模块。  PC2-RELOAD, 用来恢复出厂设置 */
void GPIO_4GModule_Init(void);
void GPIO_4GModule_Reload(void);
void GPIO_4GModule_Reset(void);

/* VM501,  */
void GPIO_VM501Channel_Init(void);
void GPIO_VM501Channel_Enable(const unsigned char channel);
void GPIO_VM501Channel_Disable(const unsigned char channel);

#endif	/* __DRV_GPIO_H */
