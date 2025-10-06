# Домашнее задание к работе 2

## Условие задачи
Четыре человека пообедали в ресторане. Официант подал им счет на Х руб. каждому.
Они решают оставить официанту чаевые в размере 15% от счета. Составьте программу,
которая выведет на экран сумму чаевых, которую получил официант.
## 1. Алгоритм и блок-схема

### Алгоритм
Алгоритм «Чаевые»
Начало
  Задать исходные данные:
    schet = 500
    ludi = 4
    procent = 15
  
  Вычислить общий счет:
    obshij_schet = schet * ludi
  
  Вычислить сумму чаевых:
    chaevye = obshij_schet * 0.15
  
  Вывести сумму чаевых.
Конец
### Блок-схема (пример)

<img width="211" height="721" alt="Копия Диаграмма ио drawio" src="https://github.com/user-attachments/assets/19e042bc-7e40-4124-9abb-32cb71466311" />

## 2. Реализация программы
#include <stdio.h>

int main()
{
    int schet = 500;
    
    int ludi = 4;
    
    int procent = 15;
    
    int obshij_schet = schet * ludi;
    
    float chaevye= obshij_schet*0.15;
    
    printf("=== RASCHEET CHAEVYH ===\n");
    
    printf("Kolichestvo chelovek: %d\n", ludi);
    
    printf("Scheet na odnogo cheloveka: %d rub.\n", schet);
    
    printf("Obshij scheet: %d * %d = %d rub.\n", ludi, schet, obshij_schet);
    
    printf("Summa chaevyh: %.2f rub.\n", chaevye);
    
    return 0;
}

## результат работы кода
<img width="548" height="119" alt="image" src="https://github.com/user-attachments/assets/a9778350-b937-4e48-b504-3eaf74736c56" />


## Информация о разработчике
  Гвардеев Станислав бИц-252
