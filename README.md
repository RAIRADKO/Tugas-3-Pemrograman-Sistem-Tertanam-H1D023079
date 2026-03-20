#  Simulasi Lampu Lalu Lintas 4 Simpang — Arduino

Proyek ini mensimulasikan sistem lampu lalu lintas pada persimpangan jalan dengan **4 arah** (Utara, Timur, Selatan, Barat) menggunakan Arduino. Setiap simpang memiliki lampu merah, kuning, dan hijau yang dikendalikan secara bergiliran.

---

##  Konfigurasi Pin

| Arah    | Merah | Kuning | Hijau |
|---------|-------|--------|-------|
| Utara   | 2     | 3      | 4     |
| Timur   | 5     | 6      | 7     |
| Selatan | 8     | 9      | 10    |
| Barat   | 11    | 12     | 13    |

---

##  Cara Kerja

Program menggunakan logika **round-robin** — setiap simpang mendapat giliran aktif secara bergantian, sementara tiga simpang lainnya tetap merah.

### Alur satu siklus per simpang:

1. **Semua merah** — semua lampu diset merah sebagai kondisi aman awal
2. **Hijau aktif** — lampu hijau menyala selama **5 detik**
3. **Kuning berkedip** — lampu kuning berkedip **3 kali** (interval 300ms) sebagai peringatan
4. **Kuning solid** — lampu kuning menyala penuh selama **2 detik**
5. **Kembali merah** — simpang kembali ke merah, giliran berpindah ke simpang berikutnya

### Urutan giliran:
```
Utara → Timur → Selatan → Barat → (ulangi)
```

---

##  Fungsi-Fungsi Utama

| Fungsi | Deskripsi |
|--------|-----------|
| `setup()` | Inisialisasi semua pin sebagai OUTPUT, nyalakan semua merah selama 2 detik |
| `loop()` | Memanggil `aktifkanSimpang()` untuk setiap arah secara berurutan |
| `aktifkanSimpang(hijau, kuning, merah)` | Menjalankan satu siklus penuh untuk satu simpang |
| `kedipKuning(pin, nKali)` | Mengedipkan lampu kuning sebanyak `nKali` |
| `semuaMerah()` | Mematikan semua lampu hijau/kuning dan menyalakan semua merah |

---

##  Timing Ringkas

| Fase          | Durasi       |
|---------------|--------------|
| Inisialisasi  | 2000 ms      |
| Hijau         | 5000 ms      |
| Kuning kedip  | 3 × 600 ms = 1800 ms |
| Kuning solid  | 2000 ms      |
| Jeda merah    | 500 ms       |

Total satu siklus penuh (4 simpang) ≈ **±38 detik**

---

##  Kebutuhan Hardware

- 1× Arduino Uno (atau kompatibel)
- 12× LED (3 warna × 4 simpang: merah, kuning, hijau)
- 12× Resistor 220Ω
- Breadboard & kabel jumper
