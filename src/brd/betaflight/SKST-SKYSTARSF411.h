/*==============================================================================
Generated on: 2025-06-11 20:35:54.110791
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: SKYSTARSF411
Manufacturer ID: SKST

//copy this line to madflight.ino to use this flight controller
#define MF_BOARD "brd/betaflight/SKST-SKYSTARSF411.h"

Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out, or use madflight_config to override.
==============================================================================*/

#define MF_BOARD_NAME "BETAFLIGHT-SKST-SKYSTARSF411"
#define MF_MCU_NAME "STM32F411"

const char madflight_board[] = R""(
imu_bus_type SPI
imu_gizmo MPU6000 // #define USE_GYRO_SPI_MPU6000
pin_led PC13 // resource LED 1 C13
pin_rcl_ppm PA3 // resource PPM 1 A03
// resource BEEPER 1 B02
// resource LED_STRIP 1 A08
pin_out0 PA0 // resource MOTOR 1 A00
pin_out1 PA1 // resource MOTOR 2 A01
pin_out2 PB6 // resource MOTOR 3 B06
pin_out3 PB7 // resource MOTOR 4 B07
pin_out4 PB10 // resource MOTOR 5 B10
pin_out5 PNONE // resource MOTOR 6 NONE
pin_ser0_tx PA9 // resource SERIAL_TX 1 A09
pin_ser0_rx PA10 // resource SERIAL_RX 1 A10
pin_ser1_tx PA2 // resource SERIAL_TX 2 A02
pin_ser1_rx PA3 // resource SERIAL_RX 2 A03
pin_ser10_tx PB0 // resource SERIAL_TX 11 B00
pin_ser10_rx PB0 // resource SERIAL_RX 11 B00
pin_i2c0_scl PB8 // resource I2C_SCL 1 B08
pin_i2c0_sda PB9 // resource I2C_SDA 1 B09
pin_imu_cs PC15 // resource GYRO_CS 1 C15
pin_spi0_sclk PA5 // resource SPI_SCK 1 A05
pin_spi0_miso PA6 // resource SPI_MISO 1 A06
pin_spi0_mosi PA7 // resource SPI_MOSI 1 A07
pin_imu_int PC14 // resource GYRO_EXTI 1 C14
// resource OSD_CS 1 B12
pin_spi1_sclk PB13 // resource SPI_SCK 2 B13
pin_spi1_miso PB14 // resource SPI_MISO 2 B14
pin_spi1_mosi PB15 // resource SPI_MOSI 2 B15
// resource FLASH_CS 1 A15
pin_spi2_sclk PB3 // resource SPI_SCK 3 B03
pin_spi2_miso PB4 // resource SPI_MISO 3 B04
pin_spi2_mosi PB5 // resource SPI_MOSI 3 B05
pin_bat_v PB1 // resource ADC_BATT 1 B01
bat_gizmo ADC
pin_bat_i PA4 // resource ADC_CURR 1 A04
bat_gizmo ADC
// set baro_bustype = I2C
bar_i2c_bus 0 // set baro_i2c_device = 1
// set baro_hardware = NONE
// set serialrx_provider = SBUS
// set blackbox_device = SPIFLASH
// set flash_spi_bus = 3
// set dshot_idle_value = 450
// set dshot_burst = AUTO
// set dshot_bitbang = OFF
// set motor_pwm_protocol = DSHOT600
// set current_meter = ADC
// set battery_meter = ADC
// set mag_hardware = NONE
// set beeper_inversion = ON
// set beeper_od = OFF
// set system_hse_mhz = 8
// set max7456_spi_bus = 2
// set gyro_1_bustype = SPI
imu_spi_bus 0 // set gyro_1_spibus = 1
imu_align CW180 // set gyro_1_sensor_align = CW180
// set gyro_1_align_yaw = 1800
)""; //end of madflight_board


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F411 (S411) 4.1.0 Jun 25 2019 / 10:27:57 (2a6e94d03) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_ACCGYRO_BMI270
#define USE_FLASH
#define USE_FLASH_W25Q128FV
#define USE_MAX7456

board_name SKYSTARSF411
manufacturer_id SKST

# resources
resource LED 1 C13
resource PPM 1 A03
resource BEEPER 1 B02
resource LED_STRIP 1 A08

# Motor
resource MOTOR 1 A00
resource MOTOR 2 A01
resource MOTOR 3 B06
resource MOTOR 4 B07
resource MOTOR 5 B10
resource MOTOR 6 NONE

# UART1
resource SERIAL_TX 1 A09
resource SERIAL_RX 1 A10

# UART2
resource SERIAL_TX 2 A02
resource SERIAL_RX 2 A03

# SOFTSERIAL1
resource SERIAL_TX 11 B00
resource SERIAL_RX 11 B00

# IIC1
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09

#GYRO & ACC --> SPI1
resource GYRO_CS 1 C15
resource SPI_SCK 1 A05
resource SPI_MISO 1 A06
resource SPI_MOSI 1 A07
resource GYRO_EXTI 1 C14

# OSD --> SPI2
resource OSD_CS 1 B12
resource SPI_SCK 2 B13
resource SPI_MISO 2 B14
resource SPI_MOSI 2 B15

# FLASH --> SPI3
resource FLASH_CS 1 A15
resource SPI_SCK 3 B03
resource SPI_MISO 3 B04
resource SPI_MOSI 3 B05

# ADC
resource ADC_BATT 1 B01
resource ADC_CURR 1 A04

# Timer list
timer A03 AF3
# pin A03: TIM9 CH2 (AF3)
timer A00 AF1
# pin A00: TIM2 CH1 (AF1)
timer A01 AF1
# pin A01: TIM2 CH2 (AF1)
timer B06 AF2
# pin B06: TIM4 CH1 (AF2)
timer B07 AF2
# pin B07: TIM4 CH2 (AF2)
timer B00 AF2
# pin B00: TIM3 CH3 (AF2)
timer B10 AF1
# pin B10: TIM2 CH3 (AF1)
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)


# dma
dma ADC 1 1
# ADC 1: DMA2 Stream 4 Channel 0
dma pin A00 0
# pin A00: DMA1 Stream 5 Channel 3
dma pin A01 0
# pin A01: DMA1 Stream 6 Channel 3
dma pin B00 0
# pin B00: DMA1 Stream 7 Channel 5
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin B10 0
# pin B10: DMA1 Stream 1 Channel 3
dma pin A08 0
# pin A08: DMA2 Stream 3 Channel 6

# feature
feature RX_SERIAL
feature SOFTSERIAL
feature TELEMETRY
feature OSD

# serial
serial 0 64 115200 57600 0 115200
serial 30 2048 115200 57600 0 115200

# master
set baro_bustype = I2C
set baro_i2c_device = 1
set baro_hardware = NONE
set serialrx_provider = SBUS
set blackbox_device = SPIFLASH
set flash_spi_bus = 3
set dshot_idle_value = 450
set dshot_burst = AUTO
set dshot_bitbang = OFF
set motor_pwm_protocol = DSHOT600
set current_meter = ADC
set battery_meter = ADC
set mag_hardware = NONE
set beeper_inversion = ON
set beeper_od = OFF
set system_hse_mhz = 8
set max7456_spi_bus = 2
set gyro_1_bustype = SPI
set gyro_1_spibus = 1
set gyro_1_sensor_align = CW180
set gyro_1_align_yaw = 1800

*/
