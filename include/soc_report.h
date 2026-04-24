#ifndef SOC_REPORT_H
#define SOC_REPORT_H

#include <Arduino.h>

/**
 * @brief Standardized structure for reporting ESP32 SoC information.
 * 
 * Students should fill this structure using information retrieved via ESP-IDF APIs.
 */
typedef struct {
    uint32_t cpu_cores;      // Number of CPU cores
    uint32_t flash_size;     // Flash memory size in MB
    uint8_t  mac_address[6]; // Unique MAC address
    char     chip_model[32]; // Chip model name (e.g., ESP32-D0WDQ6)
} soc_report_t;

/**
 * @brief Prints the SoC report to the Serial monitor in a formatted manner.
 * 
 * @param report Pointer to the soc_report_t structure to be printed.
 */
void print_soc_report(const soc_report_t* report);

#endif // SOC_REPORT_H
