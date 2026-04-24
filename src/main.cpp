#include <Arduino.h>
#include "soc_report.h"
#include "esp_system.h"
#include "esp_spi_flash.h"

// --- SOS Morse Code Config ---
const int LED_PIN = 2; // Default onboard LED for most ESP32 DevKits
const int DOT_TIME = 200;
const int DASH_TIME = 600;
const int GAP_TIME = 200;

void print_soc_report(const soc_report_t* report) {
    Serial.println("\n========== ESP32 DNA REPORT ==========");
    Serial.printf("Chip Model:    %s\n", report->chip_model);
    Serial.printf("CPU Cores:     %d\n", report->cpu_cores);
    Serial.printf("Flash Size:    %d MB\n", report->flash_size);
    Serial.printf("MAC Address:   %02X:%02X:%02X:%02X:%02X:%02X\n", 
                  report->mac_address[0], report->mac_address[1], 
                  report->mac_address[2], report->mac_address[3], 
                  report->mac_address[4], report->mac_address[5]);
    Serial.println("======================================");
}

void setup() {
    Serial.begin(115200);
    pinMode(LED_PIN, OUTPUT);
    delay(1000);

    Serial.println("System Initialized. Starting DNA Extraction...");

    soc_report_t my_report;
    
    // TODO: Task 2 - DNA Extraction
    // Use esp_chip_info() and esp_read_mac() to fill the my_report structure.
    // 1. Get Chip Model & Revision
    // 2. Get CPU Cores
    // 3. Get Flash Size
    // 4. Read MAC Address
    
    // Placeholder values
    my_report.cpu_cores = 0; 
    my_report.flash_size = 0;
    memset(my_report.mac_address, 0, 6);
    strcpy(my_report.chip_model, "Unknown");

    print_soc_report(&my_report);
}

void loop() {
    // TODO: Task 1 - Morse Code (SOS)
    // Implement the SOS blinking logic here using digitalWrite() and delay().
    // Morse for S: . . .
    // Morse for O: - - -
    // Morse for S: . . .
    
    // Example: Blink once
    digitalWrite(LED_PIN, HIGH);
    delay(500);
    digitalWrite(LED_PIN, LOW);
    delay(500);
}
