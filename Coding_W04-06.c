#include <stdio.h>

const int GLOBAL_RATE = 20; // ค่าคงที่ระดับ global

void calculate() {
    const int LOCAL_BONUS = 80; // ค่าคงที่ระดับ local

    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE);
    printf("LOCAL_BONUS = %d\n", LOCAL_BONUS);
}

int main() {
    calculate();
    printf("GLOBAL_RATE = %d\n", GLOBAL_RATE); 
    return 0;
}
/*
1. ค่าคงที่ GLOBAL_RATE และ LOCAL_BONUS ต่างกันอย่างไร?
   - `GLOBAL_RATE` เป็นค่าคงที่ระดับ global: ใช้ได้ทุกฟังก์ชันภายในไฟล์นั้น
   - `LOCAL_BONUS` เป็นค่าคงที่ระดับ local: ใช้ได้เฉพาะในฟังก์ชัน calculate() เท่านั้น
2. เกิดอะไรขึ้นถ้าเราเขียน GLOBAL_RATE = 20; หรือ LOCAL_BONUS = 80; ?
   - จะเกิด compile-time error ทันที เพราะค่าคงที่ (const) ไม่สามารถเปลี่ยนแปลงค่าได้หลังจากถูกกำหนด
3. ทำไม LOCAL_BONUS จึงไม่สามารถเรียกใช้ใน main() ได้?
   - เพราะมันเป็นตัวแปร local ถูกประกาศในฟังก์ชัน calculate() เท่านั้น
   - ขอบเขตของมัน (scope) มีผลแค่ภายใน calculate() → ฟังก์ชันอื่นไม่สามารถเข้าถึงได้
4. อภิปราย และสรุปผลที่ได้จากการทดลอง:
   - ค่าคงที่แบบ global ช่วยให้เราสามารถใช้ค่าคงที่เดิมในหลายฟังก์ชันได้
   - ค่าคงที่แบบ local ใช้สำหรับค่าที่จำกัดแค่ในบางฟังก์ชัน เพื่อควบคุมขอบเขตและป้องกันการใช้ผิดที่
   - การใช้ const ป้องกันไม่ให้มีการเปลี่ยนแปลงค่าที่ควรจะ "คงที่" ซึ่งช่วยให้โปรแกรมมีความปลอดภัยและถูกต้องมากขึ้น
*/