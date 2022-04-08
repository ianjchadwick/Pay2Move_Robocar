################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/board.c \
../board/clock_config.c \
../board/pin_mux.c 

OBJS += \
./board/board.o \
./board/clock_config.o \
./board/pin_mux.o 

C_DEPS += \
./board/board.d \
./board/clock_config.d \
./board/pin_mux.d 


# Each subdirectory must supply rules for building sources it contributes
board/%.o: ../board/%.c board/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_MK64FN1M0VLL12 -DFRDM_K64F -DFREEDOM -DMCUXPRESSO_SDK -DCPU_MK64FN1M0VLL12_cm4 -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\board" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\source" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\utilities" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\drivers" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\device" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\component\uart" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\component\lists" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\CMSIS" -I"C:\Users\santi09\Documents\MCUXpressoIDE_11.5.0_7232\Arigato_Crypto_Roboto\eink_firmware\experiments\frdmk64f_dspi_polling_b2b_transfer_master\frdmk64f\driver_examples\dspi\polling_b2b_transfer\master" -O0 -fno-common -g3 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


