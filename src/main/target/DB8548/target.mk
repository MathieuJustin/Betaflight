F427II_TARGETS += $(TARGET)

HSE_VALUE   = 25000000

FEATURES    += VCP ONBOARDFLASH SDCARD_SPI

TARGET_SRC = \
            drivers/accgyro/accgyro_spi_mpu6500.c \
            drivers/accgyro/accgyro_mpu6500.c