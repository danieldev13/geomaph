################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: geomaph.test

dependents:
	-cd /Users/danieltorres/Documents/github/geomaph/geomaph.lib/Debug && $(MAKE) all

# Tool invocations
geomaph.test: $(OBJS) $(USER_OBJS) /Users/danieltorres/Documents/github/geomaph/geomaph.lib/Debug/libgeomaph.lib.so
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	gcc -L"/Users/danieltorres/Documents/github/geomaph/geomaph.lib/Debug" -o "geomaph.test" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) geomaph.test
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:
/Users/danieltorres/Documents/github/geomaph/geomaph.lib/Debug/libgeomaph.lib.so:

-include ../makefile.targets
