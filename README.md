# ESP32 架構導覽與 DNA 提取報告

這是你與 ESP32 「電子大腦」的第一次親密接觸。本單元要求你從觀察硬體佈局開始，進而透過程式碼提取晶片的「數位 DNA」，並完成第一次摩斯密碼閃爍測試。

---

## 1. 硬體觀察 (Hardware Observation)
請在 `assets/` 資料夾中存放一張你的開發板照片，並在此處展示。

![開發板標註圖](assets/board_map.jpg)
> **任務**：請在照片中標註出 **RESET** 與 **BOOT** 鍵的位置。

**燒錄自檢**：
- 在燒錄過程中，你是否需要手動按住 BOOT 鍵？ [ 是 / 否 ]
- 你的開發板型號是：________________

---

## 2. 數位 DNA 提取 (DNA Extraction)
請將 `src/main.cpp` 執行後的串口輸出截圖或文字貼在此處。

```text
// Paste your DNA Report here
```

**驗證點**：
- 你的 MAC 地址與開發板標籤（如有）是否一致？
- 你的 ESP32 是單核 (Single-core) 還是雙核 (Dual-core)？

---

## 3. 摩斯密碼測試 (Morse Code Lab)
請上傳一段 SOS 閃爍的影片或 GIF 到 `assets/`，並在此連結。

[SOS 閃爍演示影片](assets/sos_demo.mp4)

**時序記錄**：
- Dot (點) 持續時間：______ ms
- Dash (橫) 持續時間：______ ms

---

## 4. 啟動日誌分析 (Bootloader Analysis)
詳細分析請見 [docs/BootAnalysis.md](docs/BootAnalysis.md)。

**快速總結**：
- Flash Mode: ______
- Crystal Frequency: ______

---

## 5. 熱傳導觀測 (Thermal Audit)
啟動 WiFi 掃描循環 5 分鐘後，觸摸晶片屏蔽蓋的感覺：
> [ ] 無感 (Cool)
> [ ] 微溫 (Warm)
> [ ] 燙手 (Hot)

---

### 導師點評 (Instructor Feedback)
*   [ ] 代碼完整性
*   [ ] 時間邏輯準確度
*   [ ] 細節觀察力
