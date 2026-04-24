# ESP32 Bootloader Log Analysis

## Raw Boot Log
> Paste the raw output from your Serial Monitor (captured during reset) here.

```text
// Paste here
```

## Key Observations

| Parameter | Value | Description |
|-----------|-------|-------------|
| **Flash Mode** | | e.g., DIO, QIO |
| **Flash Speed** | | e.g., 40MHz, 80MHz |
| **Crystal Hz** | | Frequency of the external crystal |
| **CPU Freq** | | Default startup frequency |

## Questions
1. **Flash Mode Analysis**: Is your board using DIO or QIO? What is the theoretical difference in performance?
2. **Boot Sequence**: Describe what happens in the first 500ms after you press the RESET button.
