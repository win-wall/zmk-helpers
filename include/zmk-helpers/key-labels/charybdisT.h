/*                                      Redox KEY MATRIX / LAYOUT MAPPING

          ╭────────────────────────╮           ╭───────────────────────╮
          │  0   1   2   3   4   5 │           │ 8   9  10  11  12  13 │
          │ 14  15  16  17  18  19 │           │22  23  24  25  26  27 │
          │ 28  29  30  31  32  33 │           │36  37  38  39  40  41 │
          │ 42  43  44  45  46  47 │────────╮ ╭────────╮ 50  51  52  53  54  55 │
          │ 56  57  58  59    ╭────╯ 34  48 │ │ 49  35 ╰────╮    66  67  68  69 │
          ╰───────────────────│  60  61  62 │ │ 63  64  65  │───────────────────╯
                              ╰─────────────╯ ╰─────────────╯

  ╭───────────────────────────────────╮             ╭───────────────────────────────────╮
  │ LN6  LN5  LN4  LN3  LN2  LN1      │             │      RN1  RN2  RN3  RN4  RN5  RN6 │
  │ LT6  LT5  LT4  LT3  LT2  LT1  LT0 │             │ RT0  RT1  RT2  RT3  RT4  RT5  RT6 │
  │ LM6  LM5  LM4  LM3  LM2  LM1  LM0 │             │ RM0  RM1  RM2  RM3  RM4  RM5  RM6 │
  │ LB6  LB5  LB4  LB3  LB2  LB1 ╭──────────╮ ╭──────────╮ RB1  RB2  RB3  RB4  RB5  RB6 │
  │ LF6  LF5  LF4  LF3      ╭────╯ LH4  LH3 │ │ RH3  RH4 ╰────╮      RF3  RF4  RF5  RF6 │
  ╰─────────────────────────│ LH2  LH1  LH0 │ │ RH0  RH1  RH2 │─────────────────────────╯
                            ╰───────────────╯ ╰───────────────╯

  ╭────────────────────────────┬────────────────────────────╮ ╭─────────────────────────────┬─────────────────────────────╮
  │  0   1   2   3   4   5     │      6   7   8   9  10  11 │ │ LN5 LN4 LN3 LN2 LN1 LN0     │     RN0 RN1 RN2 RN3 RN4 RN5 │
  │ 12  13  14  15  16  17     │     18  19  20  21  22  23 │ │ LT5 LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 RT5 │
  │ 24  25  26  27  28  29     │     30  31  32  33  34  35 │ │ LM5 LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 RM5 │
  │ 36  37  38  39  40  41     │     42  43  44  45  46  47 │ │ LB5 LB4 LB3 LB2 LB1 LB0 LEC │ REC RB0 RB1 RB2 RB3 RB4 RB5 │
  │ 48  49  50  51          53 │ 54          56  57  58  59 │ │ LF5 LF4 LF3 LF2 LF1 LF0 LEC │ REC RF0 RF1 RF2 RF3 RF4 RF5 │
  ╰──────────╮  60  61  62  63 │ 64  65  66  67     ╭───────╯ ╰───────╮ LH4 LH3 LH2 LH1 LH0 │ RH0 RH1 RH2 RH3 RH4 ╭───────╯
             ╰─────────────────┴────────────────────╯                 ╰─────────────────────┴─────────────────────╯         */

#pragma once


#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

#define RN0  6  // right-number row
#define RN1  7
#define RN2  8
#define RN3  9
#define RN4 10
#define RN5 11

#define LT0 17  // left-top row
#define LT1 16
#define LT2 15
#define LT3 14
#define LT4 13
#define LT5 12

#define RT0 18  // right-top row
#define RT1 19
#define RT2 20
#define RT3 21
#define RT4 22
#define RT5 23

#define LM0 29  // left-middle row
#define LM1 28
#define LM2 27
#define LM3 26
#define LM4 25
#define LM5 24

#define RM0 30  // right-middle row
#define RM1 31
#define RM2 32
#define RM3 33
#define RM4 34
#define RM5 35

#define LB0 41  // left-bottom row
#define LB1 40
#define LB2 39
#define LB3 38
#define LB4 37
#define LB5 36

#define RB0 42  // right-bottom row
#define RB1 43
#define RB2 44
#define RB3 45
#define RB4 46
#define RB5 47

#define LF0 48  // left-bottom row
#define LF2 49
#define LF3 50
#define LF4 51
#define LF5 53

#define RF0 54  // right-bottom row
#define RF2 56
#define RF3 57
#define RF4 58
#define RF5 59

#define LH0 63  // left thumb keys
#define LH1 62
#define LH2 61
#define LH3 60

#define RH0 64  // right thumb keys
#define RH1 65
#define RH2 66
#define RH3 67
