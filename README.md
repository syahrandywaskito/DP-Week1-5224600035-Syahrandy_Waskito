# mutable-variant-design-pattern

DP-Week1-5224600035-Syahrandy Waskito

Simple Note:
1. Invariant : struktur atau aturan yang tidak boleh berubah selama program dijalankan
2. Mutable : bagian yang bisa berubah-ubah selama program dijalankan

### Mutable Invariant Reflection answer
1. Struktur invariant yang ada di program saya adalah aturan 3 Round per stage. Dimana setiap selesai Round
   akan masuk ke dalam shop untuk membeli sesuatu. Loop itu terus yang akan dilakukan selama game berjalan

   Loop dalam satu stage seperti ini
   [ENTER_AND_FINISH_ROUND_1] -> [ENTER_SHOP] -> [ENTER_AND_FINISH_ROUND_2] -> [ENTER_SHOP] -> [ENTER_AND_FINISH_ROUND_3] -> [ENTER_SHOP]

2. Bagian yang pasti mutable di dalam loop adalah Score, Input (Hand Selection), dan Money.

3. Merubah InputGenerator (sudah ada nilainya) menjadi RandomInputGenerator tidak memunculkan masalah. Hal itu bisa terjadi karena Input
   merupakan sesuatu yang mutable atau bisa dirubah-rubah. Jadi melakukan perubahan disitu tidak ada masalah sama sekali, karena tidak merubah Struktur secara
   langsung. 

4. Scoring logic jika diletakkan di dalam RunSession akan menyebabkan code menjadi campur aduk dan spaggeti. RunSession hanya memiliki tugas untuk menjalankan\
   loop saja, sedangkan scoring itu bukan tugas dari RunSession. Scoring harus di letakkan di file terpisah. 
    


