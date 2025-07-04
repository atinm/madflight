/*==============================================================================
Generated on: 2025-06-11 20:35:54.187060
Generated by: betaflight_target_converter.py
Source: https://github.com/betaflight/unified-targets
Board name: ZEEZWHOOP
Manufacturer ID: ZEEZ

//copy this line to madflight.ino to use this flight controller
#define MF_BOARD "brd/betaflight/ZEEZ-ZEEZWHOOP.h"

Note: madflight will pick the last sensor defined here, this might not be the sensor that is actually on the board. Comment the offending sensors out, or use madflight_config to override.
==============================================================================*/

#define MF_BOARD_NAME "BETAFLIGHT-ZEEZ-ZEEZWHOOP"
#define MF_MCU_NAME "STM32F411"

const char madflight_board[] = R""(
imu_bus_type SPI
imu_gizmo MPU6000 // #define USE_GYRO_SPI_MPU6000
pin_out0 PA0 // resource MOTOR 1 A00
pin_out1 PA1 // resource MOTOR 2 A01
pin_out2 PB6 // resource MOTOR 3 B06
pin_out3 PB7 // resource MOTOR 4 B07
pin_rcl_ppm PA3 // resource PPM 1 A03
// resource LED_STRIP 1 A08
pin_ser0_tx PA9 // resource SERIAL_TX 1 A09
pin_ser1_tx PA2 // resource SERIAL_TX 2 A02
pin_ser0_rx PA10 // resource SERIAL_RX 1 A10
pin_ser1_rx PA3 // resource SERIAL_RX 2 A03
pin_i2c0_scl PB8 // resource I2C_SCL 1 B08
pin_i2c0_sda PB9 // resource I2C_SDA 1 B09
pin_led PC13 // resource LED 1 C13
pin_spi0_sclk PA5 // resource SPI_SCK 1 A05
pin_spi2_sclk PB3 // resource SPI_SCK 3 B03
pin_spi0_miso PA6 // resource SPI_MISO 1 A06
pin_spi2_miso PB4 // resource SPI_MISO 3 B04
pin_spi0_mosi PA7 // resource SPI_MOSI 1 A07
pin_spi2_mosi PB5 // resource SPI_MOSI 3 B05
pin_bat_v PB1 // resource ADC_BATT 1 B01
bat_gizmo ADC
// resource OSD_CS 1 B10
pin_imu_int PNONE // resource GYRO_EXTI 1 NONE
pin_imu_cs PA15 // resource GYRO_CS 1 A15
// set serialrx_provider = CRSF
// set blackbox_device = NONE
// set dshot_burst = AUTO
// set dshot_bitbang = OFF
// set motor_pwm_protocol = DSHOT600
// set battery_meter = ADC
// set system_hse_mhz = 8
// set max7456_spi_bus = 1
// set gyro_1_bustype = SPI
imu_spi_bus 2 // set gyro_1_spibus = 3
imu_align CW90 // set gyro_1_sensor_align = CW90
// set gyro_1_align_yaw = 900
)""; //end of madflight_board


/*
#==============================================================================
# BetaFlight Source file
#==============================================================================
# Betaflight / STM32F411 (S411) 4.1.0 Oct 16 2019 / 11:57:34 (c37a7c91a) MSP API: 1.42

#define USE_ACC
#define USE_ACC_SPI_MPU6000
#define USE_GYRO
#define USE_GYRO_SPI_MPU6000
#define USE_MAX7456

board_name ZEEZWHOOP
manufacturer_id ZEEZ

# resources
resource MOTOR 1 A00
resource MOTOR 2 A01
resource MOTOR 3 B06
resource MOTOR 4 B07
resource PPM 1 A03
resource LED_STRIP 1 A08
resource SERIAL_TX 1 A09
resource SERIAL_TX 2 A02
resource SERIAL_RX 1 A10
resource SERIAL_RX 2 A03
resource I2C_SCL 1 B08
resource I2C_SDA 1 B09
resource LED 1 C13
resource SPI_SCK 1 A05
resource SPI_SCK 3 B03
resource SPI_MISO 1 A06
resource SPI_MISO 3 B04
resource SPI_MOSI 1 A07
resource SPI_MOSI 3 B05
resource ADC_BATT 1 B01
resource OSD_CS 1 B10
# Disabling GYRO_EXTI since gyro and OSD are on same SPI bus
# resource GYRO_EXTI 1 C15
resource GYRO_EXTI 1 NONE
resource GYRO_CS 1 A15

# timer
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
timer A08 AF1
# pin A08: TIM1 CH1 (AF1)

# dma
dma ADC 1 0
# ADC 1: DMA2 Stream 0 Channel 0
dma pin A00 0
# pin A00: DMA1 Stream 5 Channel 3
dma pin A01 0
# pin A01: DMA1 Stream 6 Channel 3
dma pin B06 0
# pin B06: DMA1 Stream 0 Channel 2
dma pin B07 0
# pin B07: DMA1 Stream 3 Channel 2
dma pin A08 0
# pin A08: DMA2 Stream 6 Channel 0

# feature
feature RX_SERIAL
feature OSD

# serial
serial 1 64 115200 57600 0 115200

# master
set serialrx_provider = CRSF
set blackbox_device = NONE
set dshot_burst = AUTO
set dshot_bitbang = OFF
set motor_pwm_protocol = DSHOT600
set battery_meter = ADC
set system_hse_mhz = 8
set max7456_spi_bus = 1
set gyro_1_bustype = SPI
set gyro_1_spibus = 3
set gyro_1_sensor_align = CW90
set gyro_1_align_yaw = 900

*/
