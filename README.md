# 🚦 Sistem Lampu Lalu Lintas 4 Arah — Arduino

Simulasi lampu lalu lintas 4 arah (Utara, Timur, Selatan, Barat) menggunakan Arduino. Setiap arah berjalan secara sekuensial dengan siklus Hijau → Kuning → Merah, dilengkapi jeda antar pergantian arah.

---

## 📋 Deskripsi

Program ini mengontrol 12 LED yang mewakili lampu lalu lintas pada 4 persimpangan jalan. Setiap arah mendapat giliran menyala secara berurutan, sementara arah lainnya tetap merah.

**Urutan aktif:**
```
Utara → Timur → Selatan → Barat → (ulangi)
```

---

## 🔌 Konfigurasi Pin

| Arah    | Merah | Kuning | Hijau |
|---------|-------|--------|-------|
| Utara   | 13    | 12     | 11    |
| Barat   | 10    | 9      | 8     |
| Selatan | 7     | 6      | 5     |
| Timur   | 4     | 3      | 2     |

---

## ⏱️ Pengaturan Waktu

| Fase          | Durasi  |
|---------------|---------|
| Lampu Hijau   | 5 detik |
| Lampu Kuning  | 2 detik |
| Jeda Merah    | 3 detik |

Total satu siklus penuh (4 arah): **± 40 detik**

---

## 🛠️ Komponen yang Dibutuhkan

- 1x Arduino Uno (atau kompatibel)
- 12x LED (3 merah, 3 kuning, 3 hijau × 4 arah... atau 4 set LED RGB)
- 12x Resistor 220Ω
- Breadboard & kabel jumper

---

## 📐 Skema Rangkaian

Setiap LED dihubungkan ke pin digital Arduino melalui resistor 220Ω ke GND.

```
Arduino Pin → [Resistor 220Ω] → [LED Anoda] → [LED Katoda] → GND
```

Contoh untuk arah Utara:
```
Pin 13 → R → LED Merah  → GND
Pin 12 → R → LED Kuning → GND
Pin 11 → R → LED Hijau  → GND
```
