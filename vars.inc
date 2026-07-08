; appBackUpScreen: 768 bytes

roomdata_tiles    .equ  appBackUpScreen        ; 600 bytes
roomdata_solid    .equ  appBackUpScreen + 600  ; 150 bytes
roomdata_4_tiles  .equ  appBackUpScreen + 750  ; 4 bytes
room_x            .equ  appBackUpScreen + 754  ; 1 byte
room_y            .equ  appBackUpScreen + 755  ; 1 byte
cur_lcd_col       .equ  appBackUpScreen + 756  ; 1 byte
