#include <stdio.h>

int main() { // ฟังก์ชันหลักของโปรแกรม
    // ประกาศตัวแปร
    char nameInitial = 'R'; // ตัวแปร char สำหรับเก็บตัวอักษรชื่อ
    int age = 19; // ตัวแปร int สำหรับเก็บอายุเป็นจำนวนเต็ม
    float weight = 75.0; // ตัวแปร float สำหรับเก็บน้ำหนักเป็นทศนิยม
    char gender[] = "Male"; // ตัวแปร char array สำหรับเก็บเพศในรูปแบบ string

    // แสดงค่าจากตัวแปร
    printf("nameInitail: %c\n", nameInitial); // แสดงตัวอักษร 1 ตัว (char) ที่เก็บชื่อย่อ
    printf("age: %d\n", age); // แสดงอายุ (int)
    printf("weight: %.2f\n", weight); // แสดงน้ำหนักแบบทศนิยม 2 ตำแหน่ง (float)
    printf("gender: %s\n", gender); // แสดงเพศเป็นข้อความ (string)

    return 0;
}
