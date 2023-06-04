#include <graphics.h>
#include <stdlib.h>

void snow(int i)
    {
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);

        circle( 977 , 215 +i, 6); floodfill( 977 , 215 +i, WHITE);
        circle( -1738 , -56 +i, 3); floodfill( -1738 , -56 +i, WHITE);
        circle( -756 , -28 +i, 4); floodfill( -756 , -28 +i, WHITE);
        circle( -235 , -24 +i, 6); floodfill( -235 , -24 +i, WHITE);
        circle( 751 , 409 +i, 6); floodfill( 751 , 409 +i, WHITE);
        circle( 912 , 94 +i, 3); floodfill( 912 , 94 +i, WHITE);
        circle( 179 , 112 +i, 5); floodfill( 179 , 112 +i, WHITE);
        circle( 81 , 141 +i, 5); floodfill( 81 , 141 +i, WHITE);
        circle( -25 , 138 +i, 3); floodfill( -25 , 138 +i, WHITE);
        circle( -1237 , 381 +i, 6); floodfill( -1237 , 381 +i, WHITE);
        circle( 1654 , 95 +i, 4); floodfill( 1654 , 95 +i, WHITE);
        circle( 1565 , 382 +i, 5); floodfill( 1565 , 382 +i, WHITE);
        circle( -1588 , -447 +i, 3); floodfill( -1588 , -447 +i, WHITE);
        circle( -444 , 99 +i, 3); floodfill( -444 , 99 +i, WHITE);
        circle( -202 , -64 +i, 3); floodfill( -202 , -64 +i, WHITE);
        circle( -441 , 287 +i, 6); floodfill( -441 , 287 +i, WHITE);
        circle( -400 , 169 +i, 5); floodfill( -400 , 169 +i, WHITE);
        circle( 654 , -461 +i, 3); floodfill( 654 , -461 +i, WHITE);
        circle( -1339 , -345 +i, 4); floodfill( -1339 , -345 +i, WHITE);
        circle( -1744 , 458 +i, 5); floodfill( -1744 , 458 +i, WHITE);
        circle( -1539 , -443 +i, 5); floodfill( -1539 , -443 +i, WHITE);
        circle( 1799 , 6 +i, 4); floodfill( 1799 , 6 +i, WHITE);
        circle( 1731 , 374 +i, 6); floodfill( 1731 , 374 +i, WHITE);
        circle( 514 , 300 +i, 4); floodfill( 514 , 300 +i, WHITE);
        circle( 343 , 220 +i, 5); floodfill( 343 , 220 +i, WHITE);
        circle( 1029 , 458 +i, 3); floodfill( 1029 , 458 +i, WHITE);
        circle( 318 , 296 +i, 5); floodfill( 318 , 296 +i, WHITE);
        circle( 183 , 0 +i, 3); floodfill( 183 , 0 +i, WHITE);
        circle( -412 , 474 +i, 4); floodfill( -412 , 474 +i, WHITE);
        circle( 1693 , 496 +i, 4); floodfill( 1693 , 496 +i, WHITE);
        circle( -230 , 69 +i, 4); floodfill( -230 , 69 +i, WHITE);
        circle( -1003 , -296 +i, 6); floodfill( -1003 , -296 +i, WHITE);
        circle( -90 , 309 +i, 4); floodfill( -90 , 309 +i, WHITE);
        circle( -171 , 159 +i, 3); floodfill( -171 , 159 +i, WHITE);
        circle( -77 , 312 +i, 4); floodfill( -77 , 312 +i, WHITE);
        circle( 1821 , 289 +i, 3); floodfill( 1821 , 289 +i, WHITE);
        circle( 1017 , 412 +i, 6); floodfill( 1017 , 412 +i, WHITE);
        circle( -1413 , 98 +i, 6); floodfill( -1413 , 98 +i, WHITE);
        circle( -150 , -224 +i, 3); floodfill( -150 , -224 +i, WHITE);
        circle( -177 , 182 +i, 6); floodfill( -177 , 182 +i, WHITE);
        circle( 1533 , 42 +i, 3); floodfill( 1533 , 42 +i, WHITE);
        circle( 1277 , -444 +i, 4); floodfill( 1277 , -444 +i, WHITE);
        circle( 975 , -86 +i, 6); floodfill( 975 , -86 +i, WHITE);
        circle( -1430 , -141 +i, 5); floodfill( -1430 , -141 +i, WHITE);
        circle( 0 , -436 +i, 3); floodfill( 0 , -436 +i, WHITE);
        circle( -619 , -58 +i, 3); floodfill( -619 , -58 +i, WHITE);
        circle( -108 , 481 +i, 6); floodfill( -108 , 481 +i, WHITE);
        circle( 1074 , 248 +i, 5); floodfill( 1074 , 248 +i, WHITE);
        circle( -465 , 183 +i, 6); floodfill( -465 , 183 +i, WHITE);
        circle( -1794 , -97 +i, 3); floodfill( -1794 , -97 +i, WHITE);
        circle( 1386 , -79 +i, 4); floodfill( 1386 , -79 +i, WHITE);
        circle( -879 , -374 +i, 4); floodfill( -879 , -374 +i, WHITE);
        circle( 217 , 51 +i, 6); floodfill( 217 , 51 +i, WHITE);
        circle( -1268 , -112 +i, 4); floodfill( -1268 , -112 +i, WHITE);
        circle( 1599 , -179 +i, 6); floodfill( 1599 , -179 +i, WHITE);
        circle( 1534 , -77 +i, 6); floodfill( 1534 , -77 +i, WHITE);
        circle( -157 , 267 +i, 4); floodfill( -157 , 267 +i, WHITE);
        circle( -22 , 225 +i, 5); floodfill( -22 , 225 +i, WHITE);
        circle( 451 , -249 +i, 5); floodfill( 451 , -249 +i, WHITE);
        circle( -926 , -230 +i, 3); floodfill( -926 , -230 +i, WHITE);
        circle( -284 , -310 +i, 3); floodfill( -284 , -310 +i, WHITE);
        circle( 676 , 359 +i, 3); floodfill( 676 , 359 +i, WHITE);
        circle( -1017 , -69 +i, 3); floodfill( -1017 , -69 +i, WHITE);
        circle( 1203 , 452 +i, 3); floodfill( 1203 , 452 +i, WHITE);
        circle( -248 , -30 +i, 3); floodfill( -248 , -30 +i, WHITE);
        circle( -508 , 402 +i, 4); floodfill( -508 , 402 +i, WHITE);
        circle( -555 , -2 +i, 6); floodfill( -555 , -2 +i, WHITE);
        circle( -609 , -131 +i, 4); floodfill( -609 , -131 +i, WHITE);
        circle( 763 , -373 +i, 4); floodfill( 763 , -373 +i, WHITE);
        circle( 1368 , 192 +i, 6); floodfill( 1368 , 192 +i, WHITE);
        circle( 1631 , 116 +i, 6); floodfill( 1631 , 116 +i, WHITE);
        circle( -919 , -190 +i, 3); floodfill( -919 , -190 +i, WHITE);
        circle( -1867 , -275 +i, 6); floodfill( -1867 , -275 +i, WHITE);
        circle( -1855 , 303 +i, 4); floodfill( -1855 , 303 +i, WHITE);
        circle( -530 , -383 +i, 5); floodfill( -530 , -383 +i, WHITE);
        circle( -703 , 213 +i, 4); floodfill( -703 , 213 +i, WHITE);
        circle( 1028 , 259 +i, 5); floodfill( 1028 , 259 +i, WHITE);
        circle( 1161 , -292 +i, 5); floodfill( 1161 , -292 +i, WHITE);
        circle( 188 , 207 +i, 3); floodfill( 188 , 207 +i, WHITE);
        circle( 1633 , 450 +i, 4); floodfill( 1633 , 450 +i, WHITE);
        circle( -1127 , 220 +i, 5); floodfill( -1127 , 220 +i, WHITE);
        circle( -1012 , -39 +i, 6); floodfill( -1012 , -39 +i, WHITE);
        circle( 1847 , -13 +i, 6); floodfill( 1847 , -13 +i, WHITE);
        circle( -936 , 416 +i, 5); floodfill( -936 , 416 +i, WHITE);
        circle( 177 , -246 +i, 6); floodfill( 177 , -246 +i, WHITE);
        circle( 981 , -342 +i, 6); floodfill( 981 , -342 +i, WHITE);
        circle( 72 , 287 +i, 3); floodfill( 72 , 287 +i, WHITE);
        circle( -407 , 109 +i, 4); floodfill( -407 , 109 +i, WHITE);
        circle( -1809 , -388 +i, 3); floodfill( -1809 , -388 +i, WHITE);
        circle( 1853 , -426 +i, 6); floodfill( 1853 , -426 +i, WHITE);
        circle( -1137 , -169 +i, 4); floodfill( -1137 , -169 +i, WHITE);
        circle( 1744 , -250 +i, 6); floodfill( 1744 , -250 +i, WHITE);
        circle( 478 , 168 +i, 4); floodfill( 478 , 168 +i, WHITE);
        circle( -1613 , -393 +i, 3); floodfill( -1613 , -393 +i, WHITE);
        circle( -239 , -139 +i, 6); floodfill( -239 , -139 +i, WHITE);
        circle( -188 , 287 +i, 5); floodfill( -188 , 287 +i, WHITE);
        circle( -1738 , 198 +i, 6); floodfill( -1738 , 198 +i, WHITE);
        circle( 513 , 128 +i, 5); floodfill( 513 , 128 +i, WHITE);
        circle( -1025 , -236 +i, 6); floodfill( -1025 , -236 +i, WHITE);
        circle( 776 , -239 +i, 4); floodfill( 776 , -239 +i, WHITE);
        circle( -820 , -340 +i, 6); floodfill( -820 , -340 +i, WHITE);
        circle( -505 , -129 +i, 6); floodfill( -505 , -129 +i, WHITE);
        circle( 302 , 286 +i, 3); floodfill( 302 , 286 +i, WHITE);
        circle( -440 , -111 +i, 6); floodfill( -440 , -111 +i, WHITE);
        circle( -80 , -265 +i, 5); floodfill( -80 , -265 +i, WHITE);
        circle( -42 , -181 +i, 4); floodfill( -42 , -181 +i, WHITE);
        circle( -1810 , -213 +i, 3); floodfill( -1810 , -213 +i, WHITE);
        circle( 749 , 150 +i, 4); floodfill( 749 , 150 +i, WHITE);
        circle( -1786 , 364 +i, 5); floodfill( -1786 , 364 +i, WHITE);
        circle( -406 , -460 +i, 4); floodfill( -406 , -460 +i, WHITE);
        circle( 27 , 246 +i, 5); floodfill( 27 , 246 +i, WHITE);
        circle( 1698 , 222 +i, 5); floodfill( 1698 , 222 +i, WHITE);
        circle( -1692 , 440 +i, 4); floodfill( -1692 , 440 +i, WHITE);
        circle( 570 , -417 +i, 5); floodfill( 570 , -417 +i, WHITE);
        circle( -1764 , -26 +i, 3); floodfill( -1764 , -26 +i, WHITE);
        circle( 1897 , 39 +i, 3); floodfill( 1897 , 39 +i, WHITE);
        circle( -1773 , -488 +i, 4); floodfill( -1773 , -488 +i, WHITE);
        circle( -1374 , -127 +i, 6); floodfill( -1374 , -127 +i, WHITE);
        circle( 699 , -121 +i, 4); floodfill( 699 , -121 +i, WHITE);
        circle( 1697 , -156 +i, 3); floodfill( 1697 , -156 +i, WHITE);
        circle( 780 , 480 +i, 4); floodfill( 780 , 480 +i, WHITE);
        circle( -35 , -106 +i, 3); floodfill( -35 , -106 +i, WHITE);
        circle( -243 , 390 +i, 4); floodfill( -243 , 390 +i, WHITE);
        circle( -48 , -134 +i, 5); floodfill( -48 , -134 +i, WHITE);
        circle( 122 , -216 +i, 3); floodfill( 122 , -216 +i, WHITE);
        circle( -1876 , 390 +i, 5); floodfill( -1876 , 390 +i, WHITE);
        circle( 1221 , -321 +i, 5); floodfill( 1221 , -321 +i, WHITE);
        circle( 1803 , -384 +i, 3); floodfill( 1803 , -384 +i, WHITE);
        circle( 1428 , -7 +i, 6); floodfill( 1428 , -7 +i, WHITE);
        circle( -534 , 309 +i, 4); floodfill( -534 , 309 +i, WHITE);
        circle( 1851 , -377 +i, 3); floodfill( 1851 , -377 +i, WHITE);
        circle( 1590 , -440 +i, 6); floodfill( 1590 , -440 +i, WHITE);
        circle( 705 , -412 +i, 4); floodfill( 705 , -412 +i, WHITE);
        circle( 846 , -184 +i, 5); floodfill( 846 , -184 +i, WHITE);
        circle( 460 , 367 +i, 5); floodfill( 460 , 367 +i, WHITE);
        circle( 1102 , 381 +i, 6); floodfill( 1102 , 381 +i, WHITE);
        circle( 1122 , 137 +i, 5); floodfill( 1122 , 137 +i, WHITE);
        circle( 660 , 228 +i, 6); floodfill( 660 , 228 +i, WHITE);
        circle( -1204 , -1 +i, 3); floodfill( -1204 , -1 +i, WHITE);
        circle( 688 , 250 +i, 5); floodfill( 688 , 250 +i, WHITE);
        circle( 1213 , 312 +i, 3); floodfill( 1213 , 312 +i, WHITE);
        circle( 1054 , -121 +i, 3); floodfill( 1054 , -121 +i, WHITE);
        circle( -1867 , -256 +i, 6); floodfill( -1867 , -256 +i, WHITE);
        circle( 1181 , 184 +i, 5); floodfill( 1181 , 184 +i, WHITE);
        circle( -848 , -415 +i, 6); floodfill( -848 , -415 +i, WHITE);
        circle( -682 , -97 +i, 6); floodfill( -682 , -97 +i, WHITE);
        circle( -217 , -102 +i, 3); floodfill( -217 , -102 +i, WHITE);
        circle( -456 , -170 +i, 5); floodfill( -456 , -170 +i, WHITE);
        circle( -441 , -362 +i, 3); floodfill( -441 , -362 +i, WHITE);
        circle( 407 , 156 +i, 4); floodfill( 407 , 156 +i, WHITE);
        circle( -254 , 345 +i, 3); floodfill( -254 , 345 +i, WHITE);
        circle( 559 , 212 +i, 3); floodfill( 559 , 212 +i, WHITE);
        circle( 1675 , -214 +i, 3); floodfill( 1675 , -214 +i, WHITE);
        circle( -291 , -436 +i, 4); floodfill( -291 , -436 +i, WHITE);
        circle( -1297 , 365 +i, 5); floodfill( -1297 , 365 +i, WHITE);
        circle( 436 , 478 +i, 3); floodfill( 436 , 478 +i, WHITE);
        circle( 210 , 21 +i, 5); floodfill( 210 , 21 +i, WHITE);
        circle( 612 , -260 +i, 3); floodfill( 612 , -260 +i, WHITE);
        circle( -1557 , -487 +i, 6); floodfill( -1557 , -487 +i, WHITE);
        circle( -80 , 177 +i, 4); floodfill( -80 , 177 +i, WHITE);
        circle( 835 , 2 +i, 4); floodfill( 835 , 2 +i, WHITE);
        circle( -297 , -272 +i, 4); floodfill( -297 , -272 +i, WHITE);
        circle( 607 , 244 +i, 4); floodfill( 607 , 244 +i, WHITE);
        circle( -1262 , 335 +i, 5); floodfill( -1262 , 335 +i, WHITE);
        circle( -229 , 382 +i, 4); floodfill( -229 , 382 +i, WHITE);
        circle( 1620 , 373 +i, 5); floodfill( 1620 , 373 +i, WHITE);
        circle( -370 , 477 +i, 6); floodfill( -370 , 477 +i, WHITE);
        circle( 662 , 47 +i, 5); floodfill( 662 , 47 +i, WHITE);
        circle( -1891 , 64 +i, 5); floodfill( -1891 , 64 +i, WHITE);
        circle( -518 , -340 +i, 5); floodfill( -518 , -340 +i, WHITE);
        circle( -830 , 427 +i, 4); floodfill( -830 , 427 +i, WHITE);
        circle( -1354 , -465 +i, 3); floodfill( -1354 , -465 +i, WHITE);
        circle( 1585 , 281 +i, 5); floodfill( 1585 , 281 +i, WHITE);
        circle( -1600 , 150 +i, 6); floodfill( -1600 , 150 +i, WHITE);
        circle( 1848 , 291 +i, 5); floodfill( 1848 , 291 +i, WHITE);
        circle( 138 , -457 +i, 3); floodfill( 138 , -457 +i, WHITE);
        circle( -1008 , -26 +i, 4); floodfill( -1008 , -26 +i, WHITE);
        circle( 7 , -250 +i, 6); floodfill( 7 , -250 +i, WHITE);
        circle( 553 , 286 +i, 5); floodfill( 553 , 286 +i, WHITE);
        circle( 901 , -419 +i, 6); floodfill( 901 , -419 +i, WHITE);
        circle( -1226 , 50 +i, 5); floodfill( -1226 , 50 +i, WHITE);
        circle( 1103 , -231 +i, 6); floodfill( 1103 , -231 +i, WHITE);
        circle( 526 , -14 +i, 4); floodfill( 526 , -14 +i, WHITE);
        circle( 1563 , -109 +i, 6); floodfill( 1563 , -109 +i, WHITE);
        circle( 1791 , 98 +i, 3); floodfill( 1791 , 98 +i, WHITE);
        circle( 1555 , 47 +i, 4); floodfill( 1555 , 47 +i, WHITE);
        circle( 1328 , -240 +i, 4); floodfill( 1328 , -240 +i, WHITE);
        circle( 1510 , -173 +i, 5); floodfill( 1510 , -173 +i, WHITE);
        circle( -837 , 69 +i, 6); floodfill( -837 , 69 +i, WHITE);
        circle( -70 , 220 +i, 6); floodfill( -70 , 220 +i, WHITE);
        circle( 586 , -249 +i, 4); floodfill( 586 , -249 +i, WHITE);
        circle( 639 , -474 +i, 4); floodfill( 639 , -474 +i, WHITE);
        circle( -928 , 80 +i, 6); floodfill( -928 , 80 +i, WHITE);
        circle( -372 , 354 +i, 5); floodfill( -372 , 354 +i, WHITE);
        circle( 1090 , 372 +i, 6); floodfill( 1090 , 372 +i, WHITE);
        circle( -1312 , 294 +i, 6); floodfill( -1312 , 294 +i, WHITE);
        circle( 1019 , 417 +i, 4); floodfill( 1019 , 417 +i, WHITE);
        circle( -383 , -231 +i, 5); floodfill( -383 , -231 +i, WHITE);
        circle( -1187 , 325 +i, 4); floodfill( -1187 , 325 +i, WHITE);
        circle( -1780 , 278 +i, 4); floodfill( -1780 , 278 +i, WHITE);
        circle( 914 , 265 +i, 5); floodfill( 914 , 265 +i, WHITE);
        circle( -323 , 203 +i, 6); floodfill( -323 , 203 +i, WHITE);
        circle( 1604 , -157 +i, 3); floodfill( 1604 , -157 +i, WHITE);
        circle( 351 , -5 +i, 3); floodfill( 351 , -5 +i, WHITE);
        circle( -1515 , -487 +i, 4); floodfill( -1515 , -487 +i, WHITE);
        circle( 138 , 480 +i, 4); floodfill( 138 , 480 +i, WHITE);
        circle( 1359 , 34 +i, 4); floodfill( 1359 , 34 +i, WHITE);
        circle( 592 , -191 +i, 3); floodfill( 592 , -191 +i, WHITE);
        circle( 1729 , 170 +i, 4); floodfill( 1729 , 170 +i, WHITE);
        circle( -49 , 97 +i, 5); floodfill( -49 , 97 +i, WHITE);
        circle( 1531 , 366 +i, 4); floodfill( 1531 , 366 +i, WHITE);
        circle( -281 , 423 +i, 5); floodfill( -281 , 423 +i, WHITE);
        circle( -1690 , 301 +i, 3); floodfill( -1690 , 301 +i, WHITE);
        circle( -1137 , -136 +i, 3); floodfill( -1137 , -136 +i, WHITE);
        circle( 855 , -388 +i, 5); floodfill( 855 , -388 +i, WHITE);
        circle( -1919 , -117 +i, 5); floodfill( -1919 , -117 +i, WHITE);
        circle( -1177 , 491 +i, 6); floodfill( -1177 , 491 +i, WHITE);
        circle( -744 , 265 +i, 3); floodfill( -744 , 265 +i, WHITE);
        circle( -1690 , -166 +i, 4); floodfill( -1690 , -166 +i, WHITE);
        circle( 569 , -131 +i, 3); floodfill( 569 , -131 +i, WHITE);
        circle( -1758 , -459 +i, 4); floodfill( -1758 , -459 +i, WHITE);
        circle( 1664 , 67 +i, 5); floodfill( 1664 , 67 +i, WHITE);
        circle( -296 , 374 +i, 4); floodfill( -296 , 374 +i, WHITE);
        circle( 1314 , 496 +i, 4); floodfill( 1314 , 496 +i, WHITE);
        circle( -185 , 358 +i, 5); floodfill( -185 , 358 +i, WHITE);
        circle( 1160 , 93 +i, 5); floodfill( 1160 , 93 +i, WHITE);
        circle( -708 , -415 +i, 4); floodfill( -708 , -415 +i, WHITE);
        circle( -383 , -200 +i, 3); floodfill( -383 , -200 +i, WHITE);
        circle( -1542 , -83 +i, 5); floodfill( -1542 , -83 +i, WHITE);
        circle( -1724 , -327 +i, 5); floodfill( -1724 , -327 +i, WHITE);
        circle( -882 , -211 +i, 5); floodfill( -882 , -211 +i, WHITE);
        circle( 68 , 440 +i, 3); floodfill( 68 , 440 +i, WHITE);
        circle( 87 , -160 +i, 5); floodfill( 87 , -160 +i, WHITE);
        circle( 674 , -387 +i, 4); floodfill( 674 , -387 +i, WHITE);
        circle( 710 , -126 +i, 6); floodfill( 710 , -126 +i, WHITE);
        circle( -168 , 287 +i, 4); floodfill( -168 , 287 +i, WHITE);
        circle( 1433 , -104 +i, 5); floodfill( 1433 , -104 +i, WHITE);
        circle( -1765 , 400 +i, 6); floodfill( -1765 , 400 +i, WHITE);
        circle( 109 , 230 +i, 6); floodfill( 109 , 230 +i, WHITE);
        circle( -935 , -439 +i, 5); floodfill( -935 , -439 +i, WHITE);
        circle( -1343 , -28 +i, 4); floodfill( -1343 , -28 +i, WHITE);
        circle( 223 , -205 +i, 6); floodfill( 223 , -205 +i, WHITE);
        circle( -245 , 200 +i, 6); floodfill( -245 , 200 +i, WHITE);
        circle( 1285 , -404 +i, 6); floodfill( 1285 , -404 +i, WHITE);
        circle( 220 , -232 +i, 5); floodfill( 220 , -232 +i, WHITE);
        circle( -672 , 390 +i, 3); floodfill( -672 , 390 +i, WHITE);
        circle( -1562 , -412 +i, 6); floodfill( -1562 , -412 +i, WHITE);
        circle( -1477 , -274 +i, 5); floodfill( -1477 , -274 +i, WHITE);
        circle( -401 , -172 +i, 4); floodfill( -401 , -172 +i, WHITE);
        circle( -349 , 452 +i, 4); floodfill( -349 , 452 +i, WHITE);
        circle( -1681 , 64 +i, 4); floodfill( -1681 , 64 +i, WHITE);
        circle( 845 , 152 +i, 5); floodfill( 845 , 152 +i, WHITE);
        circle( -217 , -136 +i, 6); floodfill( -217 , -136 +i, WHITE);
        circle( 1483 , -418 +i, 6); floodfill( 1483 , -418 +i, WHITE);
        circle( -1282 , -410 +i, 6); floodfill( -1282 , -410 +i, WHITE);
        circle( 552 , -444 +i, 3); floodfill( 552 , -444 +i, WHITE);
        circle( -872 , 155 +i, 4); floodfill( -872 , 155 +i, WHITE);
        circle( 350 , -347 +i, 6); floodfill( 350 , -347 +i, WHITE);
        circle( -1667 , 405 +i, 4); floodfill( -1667 , 405 +i, WHITE);
        circle( -157 , -353 +i, 6); floodfill( -157 , -353 +i, WHITE);
        circle( -202 , 97 +i, 6); floodfill( -202 , 97 +i, WHITE);
        circle( 1436 , -255 +i, 5); floodfill( 1436 , -255 +i, WHITE);
        circle( 228 , 330 +i, 3); floodfill( 228 , 330 +i, WHITE);
        circle( 652 , 162 +i, 4); floodfill( 652 , 162 +i, WHITE);
        circle( 1413 , -226 +i, 6); floodfill( 1413 , -226 +i, WHITE);
        circle( 444 , 110 +i, 3); floodfill( 444 , 110 +i, WHITE);
        circle( -1226 , -420 +i, 6); floodfill( -1226 , -420 +i, WHITE);
        circle( 1848 , -332 +i, 6); floodfill( 1848 , -332 +i, WHITE);
        circle( -1499 , 157 +i, 5); floodfill( -1499 , 157 +i, WHITE);
        circle( 187 , 347 +i, 3); floodfill( 187 , 347 +i, WHITE);
        circle( -1728 , -466 +i, 6); floodfill( -1728 , -466 +i, WHITE);
        circle( -385 , 441 +i, 5); floodfill( -385 , 441 +i, WHITE);
        circle( -1405 , 12 +i, 4); floodfill( -1405 , 12 +i, WHITE);
        circle( 651 , 106 +i, 3); floodfill( 651 , 106 +i, WHITE);
        circle( 1660 , -376 +i, 6); floodfill( 1660 , -376 +i, WHITE);
        circle( 68 , 217 +i, 4); floodfill( 68 , 217 +i, WHITE);
        circle( -653 , -409 +i, 3); floodfill( -653 , -409 +i, WHITE);
        circle( -415 , -348 +i, 5); floodfill( -415 , -348 +i, WHITE);
        circle( 476 , -380 +i, 5); floodfill( 476 , -380 +i, WHITE);
        circle( -1367 , 442 +i, 3); floodfill( -1367 , 442 +i, WHITE);
        circle( -1902 , -479 +i, 5); floodfill( -1902 , -479 +i, WHITE);
        circle( -1730 , -133 +i, 3); floodfill( -1730 , -133 +i, WHITE);
        circle( -1470 , 284 +i, 6); floodfill( -1470 , 284 +i, WHITE);
        circle( 782 , 28 +i, 4); floodfill( 782 , 28 +i, WHITE);
        circle( -65 , -35 +i, 6); floodfill( -65 , -35 +i, WHITE);
        circle( -1215 , -457 +i, 5); floodfill( -1215 , -457 +i, WHITE);
        circle( 859 , -351 +i, 3); floodfill( 859 , -351 +i, WHITE);
        circle( 721 , -81 +i, 4); floodfill( 721 , -81 +i, WHITE);
        circle( -241 , -465 +i, 6); floodfill( -241 , -465 +i, WHITE);
        circle( 402 , -257 +i, 6); floodfill( 402 , -257 +i, WHITE);
        circle( -1466 , -350 +i, 5); floodfill( -1466 , -350 +i, WHITE);
        circle( 260 , -398 +i, 6); floodfill( 260 , -398 +i, WHITE);
        circle( 764 , -86 +i, 4); floodfill( 764 , -86 +i, WHITE);
        circle( -1390 , 439 +i, 5); floodfill( -1390 , 439 +i, WHITE);
        circle( 1697 , 2 +i, 6); floodfill( 1697 , 2 +i, WHITE);
        circle( -576 , -196 +i, 6); floodfill( -576 , -196 +i, WHITE);
        circle( -1290 , -173 +i, 5); floodfill( -1290 , -173 +i, WHITE);
        circle( -1803 , 393 +i, 3); floodfill( -1803 , 393 +i, WHITE);
        circle( -375 , 64 +i, 4); floodfill( -375 , 64 +i, WHITE);
        circle( 1189 , -489 +i, 3); floodfill( 1189 , -489 +i, WHITE);
        circle( 403 , 443 +i, 5); floodfill( 403 , 443 +i, WHITE);
        circle( -83 , -357 +i, 3); floodfill( -83 , -357 +i, WHITE);
        circle( -1761 , -118 +i, 4); floodfill( -1761 , -118 +i, WHITE);
        circle( -1141 , 248 +i, 6); floodfill( -1141 , 248 +i, WHITE);
        circle( -703 , -272 +i, 6); floodfill( -703 , -272 +i, WHITE);
        circle( 1295 , 472 +i, 4); floodfill( 1295 , 472 +i, WHITE);
        circle( 432 , -153 +i, 3); floodfill( 432 , -153 +i, WHITE);
        circle( -340 , -105 +i, 4); floodfill( -340 , -105 +i, WHITE);
        circle( 1345 , 70 +i, 4); floodfill( 1345 , 70 +i, WHITE);
        circle( 564 , 205 +i, 4); floodfill( 564 , 205 +i, WHITE);
        circle( -253 , -56 +i, 4); floodfill( -253 , -56 +i, WHITE);
        circle( -1254 , 172 +i, 4); floodfill( -1254 , 172 +i, WHITE);
        circle( 519 , 244 +i, 6); floodfill( 519 , 244 +i, WHITE);
        circle( -783 , -292 +i, 5); floodfill( -783 , -292 +i, WHITE);
        circle( -1195 , 456 +i, 5); floodfill( -1195 , 456 +i, WHITE);
        circle( 197 , -163 +i, 6); floodfill( 197 , -163 +i, WHITE);
        circle( -162 , -316 +i, 5); floodfill( -162 , -316 +i, WHITE);
        circle( 690 , -258 +i, 4); floodfill( 690 , -258 +i, WHITE);
        circle( -1347 , -274 +i, 5); floodfill( -1347 , -274 +i, WHITE);
        circle( -1182 , 77 +i, 3); floodfill( -1182 , 77 +i, WHITE);
        circle( -1107 , -355 +i, 6); floodfill( -1107 , -355 +i, WHITE);
        circle( -286 , 322 +i, 5); floodfill( -286 , 322 +i, WHITE);
        circle( 333 , 153 +i, 3); floodfill( 333 , 153 +i, WHITE);
        circle( -570 , 233 +i, 5); floodfill( -570 , 233 +i, WHITE);
        circle( -1042 , 153 +i, 3); floodfill( -1042 , 153 +i, WHITE);
        circle( 297 , -323 +i, 4); floodfill( 297 , -323 +i, WHITE);
        circle( 284 , 241 +i, 4); floodfill( 284 , 241 +i, WHITE);
        circle( -1810 , -332 +i, 5); floodfill( -1810 , -332 +i, WHITE);
        circle( -1153 , 135 +i, 4); floodfill( -1153 , 135 +i, WHITE);
        circle( -1181 , -72 +i, 3); floodfill( -1181 , -72 +i, WHITE);
        circle( 1206 , 331 +i, 6); floodfill( 1206 , 331 +i, WHITE);
        circle( 1692 , 475 +i, 5); floodfill( 1692 , 475 +i, WHITE);
        circle( 864 , -486 +i, 6); floodfill( 864 , -486 +i, WHITE);
        circle( -148 , 438 +i, 6); floodfill( -148 , 438 +i, WHITE);
        circle( 1522 , 243 +i, 3); floodfill( 1522 , 243 +i, WHITE);
        circle( -1119 , -266 +i, 6); floodfill( -1119 , -266 +i, WHITE);
        circle( 901 , 280 +i, 4); floodfill( 901 , 280 +i, WHITE);
        circle( 644 , -299 +i, 4); floodfill( 644 , -299 +i, WHITE);
        circle( -404 , 330 +i, 3); floodfill( -404 , 330 +i, WHITE);
        circle( 970 , 40 +i, 5); floodfill( 970 , 40 +i, WHITE);
        circle( -1477 , -469 +i, 6); floodfill( -1477 , -469 +i, WHITE);
        circle( 1879 , -58 +i, 3); floodfill( 1879 , -58 +i, WHITE);
        circle( 58 , -78 +i, 5); floodfill( 58 , -78 +i, WHITE);
        circle( 1015 , -492 +i, 3); floodfill( 1015 , -492 +i, WHITE);
        circle( 1448 , 293 +i, 4); floodfill( 1448 , 293 +i, WHITE);
        circle( -1007 , 403 +i, 3); floodfill( -1007 , 403 +i, WHITE);
        circle( -394 , 237 +i, 4); floodfill( -394 , 237 +i, WHITE);
        circle( -276 , -41 +i, 6); floodfill( -276 , -41 +i, WHITE);
        circle( 240 , 390 +i, 6); floodfill( 240 , 390 +i, WHITE);
        circle( 697 , 100 +i, 6); floodfill( 697 , 100 +i, WHITE);
        circle( 1589 , -215 +i, 3); floodfill( 1589 , -215 +i, WHITE);
        circle( -841 , -126 +i, 6); floodfill( -841 , -126 +i, WHITE);
        circle( 1302 , 368 +i, 3); floodfill( 1302 , 368 +i, WHITE);
        circle( 893 , 462 +i, 6); floodfill( 893 , 462 +i, WHITE);
        circle( 1471 , -31 +i, 5); floodfill( 1471 , -31 +i, WHITE);
        circle( -1746 , 342 +i, 3); floodfill( -1746 , 342 +i, WHITE);
        circle( -406 , 66 +i, 5); floodfill( -406 , 66 +i, WHITE);
        circle( 1674 , -7 +i, 6); floodfill( 1674 , -7 +i, WHITE);
        circle( -696 , -169 +i, 6); floodfill( -696 , -169 +i, WHITE);
        circle( -900 , -94 +i, 6); floodfill( -900 , -94 +i, WHITE);
        circle( 652 , -109 +i, 4); floodfill( 652 , -109 +i, WHITE);
        circle( 869 , -240 +i, 6); floodfill( 869 , -240 +i, WHITE);
        circle( 895 , 459 +i, 6); floodfill( 895 , 459 +i, WHITE);
        circle( -752 , -265 +i, 3); floodfill( -752 , -265 +i, WHITE);
        circle( 727 , 427 +i, 4); floodfill( 727 , 427 +i, WHITE);
        circle( -1049 , -354 +i, 6); floodfill( -1049 , -354 +i, WHITE);
        circle( -704 , -234 +i, 6); floodfill( -704 , -234 +i, WHITE);
        circle( -1591 , 159 +i, 4); floodfill( -1591 , 159 +i, WHITE);
        circle( -305 , 314 +i, 5); floodfill( -305 , 314 +i, WHITE);
        circle( 1874 , -107 +i, 3); floodfill( 1874 , -107 +i, WHITE);
        circle( -1252 , 5 +i, 3); floodfill( -1252 , 5 +i, WHITE);
        circle( 703 , -413 +i, 4); floodfill( 703 , -413 +i, WHITE);
        circle( 1634 , 142 +i, 4); floodfill( 1634 , 142 +i, WHITE);
        circle( 1551 , 431 +i, 6); floodfill( 1551 , 431 +i, WHITE);
        circle( 1780 , -154 +i, 5); floodfill( 1780 , -154 +i, WHITE);
        circle( -741 , 127 +i, 6); floodfill( -741 , 127 +i, WHITE);
        circle( 399 , 340 +i, 4); floodfill( 399 , 340 +i, WHITE);
        circle( 1764 , 394 +i, 5); floodfill( 1764 , 394 +i, WHITE);
        circle( -1033 , -321 +i, 5); floodfill( -1033 , -321 +i, WHITE);
        circle( 1888 , 339 +i, 6); floodfill( 1888 , 339 +i, WHITE);
        circle( 1375 , 310 +i, 5); floodfill( 1375 , 310 +i, WHITE);
        circle( -1512 , 268 +i, 4); floodfill( -1512 , 268 +i, WHITE);
        circle( 1076 , -455 +i, 4); floodfill( 1076 , -455 +i, WHITE);
        circle( 620 , -9 +i, 4); floodfill( 620 , -9 +i, WHITE);
        circle( 1402 , 187 +i, 3); floodfill( 1402 , 187 +i, WHITE);
        circle( -1627 , 328 +i, 3); floodfill( -1627 , 328 +i, WHITE);
        circle( -687 , 323 +i, 3); floodfill( -687 , 323 +i, WHITE);
        circle( 387 , 309 +i, 6); floodfill( 387 , 309 +i, WHITE);
        circle( -119 , 182 +i, 4); floodfill( -119 , 182 +i, WHITE);
        circle( -1614 , -490 +i, 3); floodfill( -1614 , -490 +i, WHITE);
        circle( 1814 , 78 +i, 6); floodfill( 1814 , 78 +i, WHITE);
        circle( 1238 , -287 +i, 6); floodfill( 1238 , -287 +i, WHITE);
        circle( -792 , 212 +i, 5); floodfill( -792 , 212 +i, WHITE);
        circle( -1520 , -74 +i, 3); floodfill( -1520 , -74 +i, WHITE);
        circle( 1692 , -475 +i, 3); floodfill( 1692 , -475 +i, WHITE);
        circle( -802 , -320 +i, 3); floodfill( -802 , -320 +i, WHITE);
        circle( -442 , -408 +i, 4); floodfill( -442 , -408 +i, WHITE);
        circle( 263 , 145 +i, 4); floodfill( 263 , 145 +i, WHITE);
        circle( -186 , -138 +i, 4); floodfill( -186 , -138 +i, WHITE);
    }

void fence()
    {
        // JOINER1
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        rectangle( 40, 300, 50, 370); floodfill( 41 , 301 , BROWN);
        rectangle( 120, 300, 130, 370); floodfill( 121 , 301 , BROWN);
        rectangle( 200, 300, 210, 370); floodfill( 201 , 301 , BROWN);
        rectangle( 280, 300, 290, 370); floodfill( 281 , 301 , BROWN);
        rectangle( 360, 300, 370, 370); floodfill( 361 , 301 , BROWN);
        rectangle( 440, 300, 450, 370); floodfill( 441 , 301 , BROWN);
        rectangle( 520, 300, 530, 370); floodfill( 521 , 301 , BROWN);
        rectangle( 600, 300, 610, 370); floodfill( 601 , 301 , BROWN);
        rectangle( 680, 300, 690, 370); floodfill( 681 , 301 , BROWN);
        rectangle( 760, 300, 770, 370); floodfill( 761 , 301 , BROWN);
        rectangle( 840, 300, 850, 370); floodfill( 841 , 301 , BROWN);
        rectangle( 920, 300, 930, 370); floodfill( 921 , 301 , BROWN);
        rectangle( 1000, 300, 1010, 370); floodfill( 1001 , 301 , BROWN);
        rectangle( 1080, 300, 1090, 370); floodfill( 1081 , 301 , BROWN);
        rectangle( 1160, 300, 1170, 370); floodfill( 1161 , 301 , BROWN);
        rectangle( 1240, 300, 1250, 370); floodfill( 1241 , 301 , BROWN);
        rectangle( 1320, 300, 1330, 370); floodfill( 1321 , 301 , BROWN);
        rectangle( 1400, 300, 1410, 370); floodfill( 1401 , 301 , BROWN);
        rectangle( 1480, 300, 1490, 370); floodfill( 1481 , 301 , BROWN);
        rectangle( 1560, 300, 1570, 370); floodfill( 1561 , 301 , BROWN);
        rectangle( 1640, 300, 1650, 370); floodfill( 1641 , 301 , BROWN);
        rectangle( 1720, 300, 1730, 370); floodfill( 1721 , 301 , BROWN);
        rectangle( 1800, 300, 1810, 370); floodfill( 1801 , 301 , BROWN);
        rectangle( 1880, 300, 1890, 370); floodfill( 1881 , 301 , BROWN);
        rectangle( 1960, 300, 1970, 370); floodfill( 1961 , 301 , BROWN);

        // JOINER2
        rectangle( 40, 460, 50, 530); floodfill( 41 , 461 , BROWN);
        rectangle( 120, 460, 130, 530); floodfill( 121 , 461 , BROWN);
        rectangle( 200, 460, 210, 530); floodfill( 201 , 461 , BROWN);
        rectangle( 280, 460, 290, 530); floodfill( 281 , 461 , BROWN);
        rectangle( 360, 460, 370, 530); floodfill( 361 , 461 , BROWN);
        rectangle( 440, 460, 450, 530); floodfill( 441 , 461 , BROWN);
        rectangle( 520, 460, 530, 530); floodfill( 521 , 461 , BROWN);
        rectangle( 600, 460, 610, 530); floodfill( 601 , 461 , BROWN);
        rectangle( 680, 460, 690, 530); floodfill( 681 , 461 , BROWN);
        rectangle( 760, 460, 770, 530); floodfill( 761 , 461 , BROWN);
        rectangle( 840, 460, 850, 530); floodfill( 841 , 461 , BROWN);
        rectangle( 920, 460, 930, 530); floodfill( 921 , 461 , BROWN);
        rectangle( 1000, 460, 1010, 530); floodfill( 1001 , 461 , BROWN);
        rectangle( 1080, 460, 1090, 530); floodfill( 1081 , 461 , BROWN);
        rectangle( 1160, 460, 1170, 530); floodfill( 1161 , 461 , BROWN);
        rectangle( 1240, 460, 1250, 530); floodfill( 1241 , 461 , BROWN);
        rectangle( 1320, 460, 1330, 530); floodfill( 1321 , 461 , BROWN);
        rectangle( 1400, 460, 1410, 530); floodfill( 1401 , 461 , BROWN);
        rectangle( 1480, 460, 1490, 530); floodfill( 1481 , 461 , BROWN);
        rectangle( 1560, 460, 1570, 530); floodfill( 1561 , 461 , BROWN);
        rectangle( 1640, 460, 1650, 530); floodfill( 1641 , 461 , BROWN);
        rectangle( 1720, 460, 1730, 530); floodfill( 1721 , 461 , BROWN);
        rectangle( 1800, 460, 1810, 530); floodfill( 1801 , 461 , BROWN);
        rectangle( 1880, 460, 1890, 530); floodfill( 1881 , 461 , BROWN);
        rectangle( 1960, 460, 1970, 530); floodfill( 1961 , 461 , BROWN);

        // PLANCKS
        setcolor(BROWN);
        setfillstyle(SOLID_FILL,BROWN);
        // rectangle( 50, 200, 120, 490);
        rectangle( -1, 250, 40, 550); floodfill(0,251,BROWN);
        rectangle( 50, 250, 120, 550); floodfill( 51 , 251 , BROWN);
        rectangle( 130, 250, 200, 550); floodfill( 131 , 251 , BROWN);
        rectangle( 210, 250, 280, 550); floodfill( 211 , 251 , BROWN);
        rectangle( 290, 250, 360, 550); floodfill( 291 , 251 , BROWN);
        rectangle( 370, 250, 440, 550); floodfill( 371 , 251 , BROWN);
        rectangle( 450, 250, 520, 550); floodfill( 451 , 251 , BROWN);
        rectangle( 530, 250, 600, 550); floodfill( 531 , 251 , BROWN);
        rectangle( 610, 250, 680, 550); floodfill( 611 , 251 , BROWN);
        rectangle( 690, 250, 760, 550); floodfill( 691 , 251 , BROWN);
        rectangle( 770, 250, 840, 550); floodfill( 771 , 251 , BROWN);
        rectangle( 850, 250, 920, 550); floodfill( 851 , 251 , BROWN);
        rectangle( 930, 250, 1000, 550); floodfill( 931 , 251 , BROWN);
        rectangle( 1010, 250, 1080, 550); floodfill( 1011 , 251 , BROWN);
        rectangle( 1090, 250, 1160, 550); floodfill( 1091 , 251 , BROWN);
        rectangle( 1170, 250, 1240, 550); floodfill( 1171 , 251 , BROWN);
        rectangle( 1250, 250, 1320, 550); floodfill( 1251 , 251 , BROWN);
        rectangle( 1330, 250, 1400, 550); floodfill( 1331 , 251 , BROWN);
        rectangle( 1410, 250, 1480, 550); floodfill( 1411 , 251 , BROWN);
        rectangle( 1490, 250, 1560, 550); floodfill( 1491 , 251 , BROWN);
        rectangle( 1570, 250, 1640, 550); floodfill( 1571 , 251 , BROWN);
        rectangle( 1650, 250, 1720, 550); floodfill( 1651 , 251 , BROWN);
        rectangle( 1730, 250, 1800, 550); floodfill( 1731 , 251 , BROWN);
        rectangle( 1810, 250, 1880, 550); floodfill( 1811 , 251 , BROWN);
        rectangle( 1890, 250, 1960, 550); floodfill( 1891 , 251 , BROWN);
        rectangle( 1970, 250, 2040, 550); floodfill( 1971 , 251 , BROWN);

        // OUTLINE
        setcolor(RED);
        rectangle( 50, 250, 120, 550); rectangle( 49, 249, 119, 549);
        rectangle( 130, 250, 200, 550); rectangle( 129, 249, 199, 549);
        rectangle( 210, 250, 280, 550); rectangle( 209, 249, 279, 549);
        rectangle( 290, 250, 360, 550); rectangle( 289, 249, 359, 549);
        rectangle( 370, 250, 440, 550); rectangle( 369, 249, 439, 549);
        rectangle( 450, 250, 520, 550); rectangle( 449, 249, 519, 549);
        rectangle( 530, 250, 600, 550); rectangle( 529, 249, 599, 549);
        rectangle( 610, 250, 680, 550); rectangle( 609, 249, 679, 549);
        rectangle( 690, 250, 760, 550); rectangle( 689, 249, 759, 549);
        rectangle( 770, 250, 840, 550); rectangle( 769, 249, 839, 549);
        rectangle( 850, 250, 920, 550); rectangle( 849, 249, 919, 549);
        rectangle( 930, 250, 1000, 550); rectangle( 929, 249, 999, 549);
        rectangle( 1010, 250, 1080, 550); rectangle( 1009, 249, 1079, 549);
        rectangle( 1090, 250, 1160, 550); rectangle( 1089, 249, 1159, 549);
        rectangle( 1170, 250, 1240, 550); rectangle( 1169, 249, 1239, 549);
        rectangle( 1250, 250, 1320, 550); rectangle( 1249, 249, 1319, 549);
        rectangle( 1330, 250, 1400, 550); rectangle( 1329, 249, 1399, 549);
        rectangle( 1410, 250, 1480, 550); rectangle( 1409, 249, 1479, 549);
        rectangle( 1490, 250, 1560, 550); rectangle( 1489, 249, 1559, 549);
        rectangle( 1570, 250, 1640, 550); rectangle( 1569, 249, 1639, 549);
        rectangle( 1650, 250, 1720, 550); rectangle( 1649, 249, 1719, 549);
        rectangle( 1730, 250, 1800, 550); rectangle( 1729, 249, 1799, 549);
        rectangle( 1810, 250, 1880, 550); rectangle( 1809, 249, 1879, 549);
        rectangle( 1890, 250, 1960, 550); rectangle( 1889, 249, 1959, 549);
        rectangle( 1970, 250, 2040, 550); rectangle( 1969, 249, 2039, 549);

        

        
        // SCREWS
        setcolor(LIGHTGRAY);
        setfillstyle(SOLID_FILL,LIGHTGRAY);
        circle( 60 , 320 , 4); floodfill( 60 , 320 , LIGHTGRAY); circle( 110 , 320 , 4); floodfill( 110 , 320 , LIGHTGRAY); circle( 140 , 320 , 4); floodfill( 140 , 320 , LIGHTGRAY); circle( 190 , 320 , 4); floodfill( 190 , 320 , LIGHTGRAY); circle( 220 , 320 , 4); floodfill( 220 , 320 , LIGHTGRAY); circle( 270 , 320 , 4); floodfill( 270 , 320 , LIGHTGRAY); circle( 300 , 320 , 4); floodfill( 300 , 320 , LIGHTGRAY); circle( 350 , 320 , 4); floodfill( 350 , 320 , LIGHTGRAY); circle( 380 , 320 , 4); floodfill( 380 , 320 , LIGHTGRAY); circle( 430 , 320 , 4); floodfill( 430 , 320 , LIGHTGRAY); circle( 460 , 320 , 4); floodfill( 460 , 320 , LIGHTGRAY); circle( 510 , 320 , 4); floodfill( 510 , 320 , LIGHTGRAY); circle( 540 , 320 , 4); floodfill( 540 , 320 , LIGHTGRAY); circle( 590 , 320 , 4); floodfill( 590 , 320 , LIGHTGRAY); circle( 620 , 320 , 4); floodfill( 620 , 320 , LIGHTGRAY); circle( 670 , 320 , 4); floodfill( 670 , 320 , LIGHTGRAY); circle( 700 , 320 , 4); floodfill( 700 , 320 , LIGHTGRAY); circle( 750 , 320 , 4); floodfill( 750 , 320 , LIGHTGRAY); circle( 780 , 320 , 4); floodfill( 780 , 320 , LIGHTGRAY); circle( 830 , 320 , 4); floodfill( 830 , 320 , LIGHTGRAY); circle( 860 , 320 , 4); floodfill( 860 , 320 , LIGHTGRAY); circle( 910 , 320 , 4); floodfill( 910 , 320 , LIGHTGRAY); circle( 940 , 320 , 4); floodfill( 940 , 320 , LIGHTGRAY); circle( 990 , 320 , 4); floodfill( 990 , 320 , LIGHTGRAY); circle( 1020 , 320 , 4); floodfill( 1020 , 320 , LIGHTGRAY); circle( 1070 , 320 , 4); floodfill( 1070 , 320 , LIGHTGRAY); circle( 1100 , 320 , 4); floodfill( 1100 , 320 , LIGHTGRAY); circle( 1150 , 320 , 4); floodfill( 1150 , 320 , LIGHTGRAY); circle( 1180 , 320 , 4); floodfill( 1180 , 320 , LIGHTGRAY); circle( 1230 , 320 , 4); floodfill( 1230 , 320 , LIGHTGRAY); circle( 1260 , 320 , 4); floodfill( 1260 , 320 , LIGHTGRAY); circle( 1310 , 320 , 4); floodfill( 1310 , 320 , LIGHTGRAY); circle( 1340 , 320 , 4); floodfill( 1340 , 320 , LIGHTGRAY); circle( 1390 , 320 , 4); floodfill( 1390 , 320 , LIGHTGRAY); circle( 1420 , 320 , 4); floodfill( 1420 , 320 , LIGHTGRAY); circle( 1470 , 320 , 4); floodfill( 1470 , 320 , LIGHTGRAY); circle( 1500 , 320 , 4); floodfill( 1500 , 320 , LIGHTGRAY); circle( 1550 , 320 , 4); floodfill( 1550 , 320 , LIGHTGRAY); circle( 1580 , 320 , 4); floodfill( 1580 , 320 , LIGHTGRAY); circle( 1630 , 320 , 4); floodfill( 1630 , 320 , LIGHTGRAY); circle( 1660 , 320 , 4); floodfill( 1660 , 320 , LIGHTGRAY); circle( 1710 , 320 , 4); floodfill( 1710 , 320 , LIGHTGRAY); circle( 1740 , 320 , 4); floodfill( 1740 , 320 , LIGHTGRAY); circle( 1790 , 320 , 4); floodfill( 1790 , 320 , LIGHTGRAY); circle( 1820 , 320 , 4); floodfill( 1820 , 320 , LIGHTGRAY); circle( 1870 , 320 , 4); floodfill( 1870 , 320 , LIGHTGRAY); circle( 1900 , 320 , 4); floodfill( 1900 , 320 , LIGHTGRAY); circle( 1950 , 320 , 4); floodfill( 1950 , 320 , LIGHTGRAY); circle( 1980 , 320 , 4); floodfill( 1980 , 320 , LIGHTGRAY); circle( 2030 , 320 , 4); floodfill( 2030 , 320 , LIGHTGRAY); 

        circle( 60 , 360 , 4); floodfill( 60 , 360 , LIGHTGRAY); circle( 110 , 360 , 4); floodfill( 110 , 360 , LIGHTGRAY); circle( 140 , 360 , 4); floodfill( 140 , 360 , LIGHTGRAY); circle( 190 , 360 , 4); floodfill( 190 , 360 , LIGHTGRAY); circle( 220 , 360 , 4); floodfill( 220 , 360 , LIGHTGRAY); circle( 270 , 360 , 4); floodfill( 270 , 360 , LIGHTGRAY); circle( 300 , 360 , 4); floodfill( 300 , 360 , LIGHTGRAY); circle( 350 , 360 , 4); floodfill( 350 , 360 , LIGHTGRAY); circle( 380 , 360 , 4); floodfill( 380 , 360 , LIGHTGRAY); circle( 430 , 360 , 4); floodfill( 430 , 360 , LIGHTGRAY); circle( 460 , 360 , 4); floodfill( 460 , 360 , LIGHTGRAY); circle( 510 , 360 , 4); floodfill( 510 , 360 , LIGHTGRAY); circle( 540 , 360 , 4); floodfill( 540 , 360 , LIGHTGRAY); circle( 590 , 360 , 4); floodfill( 590 , 360 , LIGHTGRAY); circle( 620 , 360 , 4); floodfill( 620 , 360 , LIGHTGRAY); circle( 670 , 360 , 4); floodfill( 670 , 360 , LIGHTGRAY); circle( 700 , 360 , 4); floodfill( 700 , 360 , LIGHTGRAY); circle( 750 , 360 , 4); floodfill( 750 , 360 , LIGHTGRAY); circle( 780 , 360 , 4); floodfill( 780 , 360 , LIGHTGRAY); circle( 830 , 360 , 4); floodfill( 830 , 360 , LIGHTGRAY); circle( 860 , 360 , 4); floodfill( 860 , 360 , LIGHTGRAY); circle( 910 , 360 , 4); floodfill( 910 , 360 , LIGHTGRAY); circle( 940 , 360 , 4); floodfill( 940 , 360 , LIGHTGRAY); circle( 990 , 360 , 4); floodfill( 990 , 360 , LIGHTGRAY); circle( 1020 , 360 , 4); floodfill( 1020 , 360 , LIGHTGRAY); circle( 1070 , 360 , 4); floodfill( 1070 , 360 , LIGHTGRAY); circle( 1100 , 360 , 4); floodfill( 1100 , 360 , LIGHTGRAY); circle( 1150 , 360 , 4); floodfill( 1150 , 360 , LIGHTGRAY); circle( 1180 , 360 , 4); floodfill( 1180 , 360 , LIGHTGRAY); circle( 1230 , 360 , 4); floodfill( 1230 , 360 , LIGHTGRAY); circle( 1260 , 360 , 4); floodfill( 1260 , 360 , LIGHTGRAY); circle( 1310 , 360 , 4); floodfill( 1310 , 360 , LIGHTGRAY); circle( 1340 , 360 , 4); floodfill( 1340 , 360 , LIGHTGRAY); circle( 1390 , 360 , 4); floodfill( 1390 , 360 , LIGHTGRAY); circle( 1420 , 360 , 4); floodfill( 1420 , 360 , LIGHTGRAY); circle( 1470 , 360 , 4); floodfill( 1470 , 360 , LIGHTGRAY); circle( 1500 , 360 , 4); floodfill( 1500 , 360 , LIGHTGRAY); circle( 1550 , 360 , 4); floodfill( 1550 , 360 , LIGHTGRAY); circle( 1580 , 360 , 4); floodfill( 1580 , 360 , LIGHTGRAY); circle( 1630 , 360 , 4); floodfill( 1630 , 360 , LIGHTGRAY); circle( 1660 , 360 , 4); floodfill( 1660 , 360 , LIGHTGRAY); circle( 1710 , 360 , 4); floodfill( 1710 , 360 , LIGHTGRAY); circle( 1740 , 360 , 4); floodfill( 1740 , 360 , LIGHTGRAY); circle( 1790 , 360 , 4); floodfill( 1790 , 360 , LIGHTGRAY); circle( 1820 , 360 , 4); floodfill( 1820 , 360 , LIGHTGRAY); circle( 1870 , 360 , 4); floodfill( 1870 , 360 , LIGHTGRAY); circle( 1900 , 360 , 4); floodfill( 1900 , 360 , LIGHTGRAY); circle( 1950 , 360 , 4); floodfill( 1950 , 360 , LIGHTGRAY); circle( 1980 , 360 , 4); floodfill( 1980 , 360 , LIGHTGRAY); circle( 2030 , 360 , 4); floodfill( 2030 , 360 , LIGHTGRAY); 

        circle( 60 , 480 , 4); floodfill( 60 , 480 , LIGHTGRAY); circle( 110 , 480 , 4); floodfill( 110 , 480 , LIGHTGRAY); circle( 140 , 480 , 4); floodfill( 140 , 480 , LIGHTGRAY); circle( 190 , 480 , 4); floodfill( 190 , 480 , LIGHTGRAY); circle( 220 , 480 , 4); floodfill( 220 , 480 , LIGHTGRAY); circle( 270 , 480 , 4); floodfill( 270 , 480 , LIGHTGRAY); circle( 300 , 480 , 4); floodfill( 300 , 480 , LIGHTGRAY); circle( 350 , 480 , 4); floodfill( 350 , 480 , LIGHTGRAY); circle( 380 , 480 , 4); floodfill( 380 , 480 , LIGHTGRAY); circle( 430 , 480 , 4); floodfill( 430 , 480 , LIGHTGRAY); circle( 460 , 480 , 4); floodfill( 460 , 480 , LIGHTGRAY); circle( 510 , 480 , 4); floodfill( 510 , 480 , LIGHTGRAY); circle( 540 , 480 , 4); floodfill( 540 , 480 , LIGHTGRAY); circle( 590 , 480 , 4); floodfill( 590 , 480 , LIGHTGRAY); circle( 620 , 480 , 4); floodfill( 620 , 480 , LIGHTGRAY); circle( 670 , 480 , 4); floodfill( 670 , 480 , LIGHTGRAY); circle( 700 , 480 , 4); floodfill( 700 , 480 , LIGHTGRAY); circle( 750 , 480 , 4); floodfill( 750 , 480 , LIGHTGRAY); circle( 780 , 480 , 4); floodfill( 780 , 480 , LIGHTGRAY); circle( 830 , 480 , 4); floodfill( 830 , 480 , LIGHTGRAY); circle( 860 , 480 , 4); floodfill( 860 , 480 , LIGHTGRAY); circle( 910 , 480 , 4); floodfill( 910 , 480 , LIGHTGRAY); circle( 940 , 480 , 4); floodfill( 940 , 480 , LIGHTGRAY); circle( 990 , 480 , 4); floodfill( 990 , 480 , LIGHTGRAY); circle( 1020 , 480 , 4); floodfill( 1020 , 480 , LIGHTGRAY); circle( 1070 , 480 , 4); floodfill( 1070 , 480 , LIGHTGRAY); circle( 1100 , 480 , 4); floodfill( 1100 , 480 , LIGHTGRAY); circle( 1150 , 480 , 4); floodfill( 1150 , 480 , LIGHTGRAY); circle( 1180 , 480 , 4); floodfill( 1180 , 480 , LIGHTGRAY); circle( 1230 , 480 , 4); floodfill( 1230 , 480 , LIGHTGRAY); circle( 1260 , 480 , 4); floodfill( 1260 , 480 , LIGHTGRAY); circle( 1310 , 480 , 4); floodfill( 1310 , 480 , LIGHTGRAY); circle( 1340 , 480 , 4); floodfill( 1340 , 480 , LIGHTGRAY); circle( 1390 , 480 , 4); floodfill( 1390 , 480 , LIGHTGRAY); circle( 1420 , 480 , 4); floodfill( 1420 , 480 , LIGHTGRAY); circle( 1470 , 480 , 4); floodfill( 1470 , 480 , LIGHTGRAY); circle( 1500 , 480 , 4); floodfill( 1500 , 480 , LIGHTGRAY); circle( 1550 , 480 , 4); floodfill( 1550 , 480 , LIGHTGRAY); circle( 1580 , 480 , 4); floodfill( 1580 , 480 , LIGHTGRAY); circle( 1630 , 480 , 4); floodfill( 1630 , 480 , LIGHTGRAY); circle( 1660 , 480 , 4); floodfill( 1660 , 480 , LIGHTGRAY); circle( 1710 , 480 , 4); floodfill( 1710 , 480 , LIGHTGRAY); circle( 1740 , 480 , 4); floodfill( 1740 , 480 , LIGHTGRAY); circle( 1790 , 480 , 4); floodfill( 1790 , 480 , LIGHTGRAY); circle( 1820 , 480 , 4); floodfill( 1820 , 480 , LIGHTGRAY); circle( 1870 , 480 , 4); floodfill( 1870 , 480 , LIGHTGRAY); circle( 1900 , 480 , 4); floodfill( 1900 , 480 , LIGHTGRAY); circle( 1950 , 480 , 4); floodfill( 1950 , 480 , LIGHTGRAY); circle( 1980 , 480 , 4); floodfill( 1980 , 480 , LIGHTGRAY); circle( 2030 , 480 , 4); floodfill( 2030 , 480 , LIGHTGRAY); 

        circle( 60 , 520 , 4); floodfill( 60 , 520 , LIGHTGRAY); circle( 110 , 520 , 4); floodfill( 110 , 520 , LIGHTGRAY); circle( 140 , 520 , 4); floodfill( 140 , 520 , LIGHTGRAY); circle( 190 , 520 , 4); floodfill( 190 , 520 , LIGHTGRAY); circle( 220 , 520 , 4); floodfill( 220 , 520 , LIGHTGRAY); circle( 270 , 520 , 4); floodfill( 270 , 520 , LIGHTGRAY); circle( 300 , 520 , 4); floodfill( 300 , 520 , LIGHTGRAY); circle( 350 , 520 , 4); floodfill( 350 , 520 , LIGHTGRAY); circle( 380 , 520 , 4); floodfill( 380 , 520 , LIGHTGRAY); circle( 430 , 520 , 4); floodfill( 430 , 520 , LIGHTGRAY); circle( 460 , 520 , 4); floodfill( 460 , 520 , LIGHTGRAY); circle( 510 , 520 , 4); floodfill( 510 , 520 , LIGHTGRAY); circle( 540 , 520 , 4); floodfill( 540 , 520 , LIGHTGRAY); circle( 590 , 520 , 4); floodfill( 590 , 520 , LIGHTGRAY); circle( 620 , 520 , 4); floodfill( 620 , 520 , LIGHTGRAY); circle( 670 , 520 , 4); floodfill( 670 , 520 , LIGHTGRAY); circle( 700 , 520 , 4); floodfill( 700 , 520 , LIGHTGRAY); circle( 750 , 520 , 4); floodfill( 750 , 520 , LIGHTGRAY); circle( 780 , 520 , 4); floodfill( 780 , 520 , LIGHTGRAY); circle( 830 , 520 , 4); floodfill( 830 , 520 , LIGHTGRAY); circle( 860 , 520 , 4); floodfill( 860 , 520 , LIGHTGRAY); circle( 910 , 520 , 4); floodfill( 910 , 520 , LIGHTGRAY); circle( 940 , 520 , 4); floodfill( 940 , 520 , LIGHTGRAY); circle( 990 , 520 , 4); floodfill( 990 , 520 , LIGHTGRAY); circle( 1020 , 520 , 4); floodfill( 1020 , 520 , LIGHTGRAY); circle( 1070 , 520 , 4); floodfill( 1070 , 520 , LIGHTGRAY); circle( 1100 , 520 , 4); floodfill( 1100 , 520 , LIGHTGRAY); circle( 1150 , 520 , 4); floodfill( 1150 , 520 , LIGHTGRAY); circle( 1180 , 520 , 4); floodfill( 1180 , 520 , LIGHTGRAY); circle( 1230 , 520 , 4); floodfill( 1230 , 520 , LIGHTGRAY); circle( 1260 , 520 , 4); floodfill( 1260 , 520 , LIGHTGRAY); circle( 1310 , 520 , 4); floodfill( 1310 , 520 , LIGHTGRAY); circle( 1340 , 520 , 4); floodfill( 1340 , 520 , LIGHTGRAY); circle( 1390 , 520 , 4); floodfill( 1390 , 520 , LIGHTGRAY); circle( 1420 , 520 , 4); floodfill( 1420 , 520 , LIGHTGRAY); circle( 1470 , 520 , 4); floodfill( 1470 , 520 , LIGHTGRAY); circle( 1500 , 520 , 4); floodfill( 1500 , 520 , LIGHTGRAY); circle( 1550 , 520 , 4); floodfill( 1550 , 520 , LIGHTGRAY); circle( 1580 , 520 , 4); floodfill( 1580 , 520 , LIGHTGRAY); circle( 1630 , 520 , 4); floodfill( 1630 , 520 , LIGHTGRAY); circle( 1660 , 520 , 4); floodfill( 1660 , 520 , LIGHTGRAY); circle( 1710 , 520 , 4); floodfill( 1710 , 520 , LIGHTGRAY); circle( 1740 , 520 , 4); floodfill( 1740 , 520 , LIGHTGRAY); circle( 1790 , 520 , 4); floodfill( 1790 , 520 , LIGHTGRAY); circle( 1820 , 520 , 4); floodfill( 1820 , 520 , LIGHTGRAY); circle( 1870 , 520 , 4); floodfill( 1870 , 520 , LIGHTGRAY); circle( 1900 , 520 , 4); floodfill( 1900 , 520 , LIGHTGRAY); circle( 1950 , 520 , 4); floodfill( 1950 , 520 , LIGHTGRAY); circle( 1980 , 520 , 4); floodfill( 1980 , 520 , LIGHTGRAY); circle( 2030 , 520 , 4); floodfill( 2030 , 520 , LIGHTGRAY); 

}
void snowballs()
{
// 3rd BALL
    setcolor(WHITE);
    circle(665,500,120);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(655,500,WHITE);

    

// 2nd BALL
    setcolor(WHITE);
    circle(660,360,80);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(660,360,WHITE);

// TOP BALL
    setcolor(WHITE);
    circle(645,250,60);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(650,250,WHITE);
}

void eyes(int i,int* n,int* d)
{
    if(i%20==0)
    {
        *n=i;
        *d=0;
    }
    else if(i%10==0)
    {
        *n=i;
        *d=10;
    }
    // if ((i%20==1) && (i>20))
    // {
    //     *n=0;
    //     *d=0;
    // }
    int yrad=abs(*d-abs(*n-i));
    if (yrad!=0)
    {
        setcolor(BLACK);
        ellipse(650,245,0,360,10,yrad);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(650,245,BLACK);

        setcolor(BLACK);
        ellipse(690,245,0,360,9,yrad);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(690,245,BLACK);
    }
}

void muffler()
{
    setcolor(RED);
    line( 580 ,300, 580 ,450);
    line( 581 ,300, 581 ,450);
    line( 582 ,300, 582 ,460);
    line( 583 ,300, 583 ,460);
    line( 584 ,300, 584 ,450);
    line( 585 ,300, 585 ,450);
    line( 586 ,300, 586 ,460);


    setcolor(GREEN);
    line( 587 ,300, 587 ,450);
    line( 588 ,300, 588 ,450);
    line( 589 ,300, 589 ,460);
    line( 590 ,300, 590 ,460);
    line( 591 ,300, 591 ,450);
    line( 592 ,300, 592 ,450);
    line( 593 ,300, 593 ,450);
    line( 594 ,300, 594 ,460);


    setcolor(RED);
    line( 595 ,300, 595 ,450);
    line( 596 ,300, 596 ,450);
    line( 597 ,300, 597 ,460);
    line( 598 ,300, 598 ,460);
    line( 599 ,300, 599 ,450);
    line( 600 ,300, 600 ,450);
    line( 601 ,300, 601 ,450);
    line( 602 ,300, 602 ,460);


    setcolor(GREEN);
    line( 603 ,300, 603 ,450);
    line( 604 ,300, 604 ,450);
    line( 605 ,300, 605 ,460);
    line( 606 ,300, 606 ,460);
    line( 607 ,300, 607 ,450);
    line( 608 ,300, 608 ,450);
    line( 609 ,300, 609 ,460);                          


    setcolor(RED);
    // arc(645 , 175, 240 , 300 , 120 );
    // arc(645 , 175, 245 , 300 , 160 );
    arc(645 , 175, 240 , 300 , 120 );
    arc(645 , 175, 240 , 300 , 121 );
    arc(645 , 175, 240 , 300 , 122 );
    arc(645 , 175, 240 , 300 , 123 );
    arc(645 , 175, 240 , 300 , 124 );
    arc(645 , 175, 240 , 300 , 125 );
    arc(645 , 175, 240 , 300 , 126 );
    arc(645 , 175, 240 , 300 , 127 );
    arc(645 , 175, 240 , 300 , 128 );
    arc(645 , 175, 240 , 300 , 129 );
    arc(645 , 175, 240 , 300 , 130 );
    arc(645 , 175, 240 , 300 , 131 );


    setcolor(GREEN);
    arc(645 , 175, 240 , 300 , 132 );
    arc(645 , 175, 240 , 300 , 133 );
    arc(645 , 175, 240 , 300 , 134 );
    arc(645 , 175, 240 , 300 , 135 );
    arc(645 , 175, 240 , 300 , 136 );
    arc(645 , 175, 240 , 300 , 137 );
    arc(645 , 175, 240 , 300 , 138 );
    arc(645 , 175, 240 , 300 , 139 );
    arc(645 , 175, 240 , 300 , 140 );
    arc(645 , 175, 240 , 300 , 141 );
    arc(645 , 175, 240 , 300 , 142 );
    arc(645 , 175, 240 , 300 , 143 );


    setcolor(RED);
    arc(645 , 175, 240 , 300 , 144 );
    arc(645 , 175, 240 , 300 , 145 );
    arc(645 , 175, 240 , 300 , 146 );
    arc(645 , 175, 240 , 300 , 147 );
    arc(645 , 175, 240 , 300 , 148 );
    arc(645 , 175, 240 , 300 , 149 );
    arc(645 , 175, 240 , 300 , 150 );
    arc(645 , 175, 240 , 300 , 151 );
    arc(645 , 175, 240 , 300 , 152 );
    arc(645 , 175, 240 , 300 , 153 );
    arc(645 , 175, 240 , 300 , 154 );
    arc(645 , 175, 240 , 300 , 155 );


    setcolor(GREEN);
    arc(645 , 175, 240 , 300 , 156 );
    arc(645 , 175, 240 , 300 , 157 );
    arc(645 , 175, 240 , 300 , 158 );
    arc(645 , 175, 240 , 300 , 159 );                   
}

void nose(int* nose_cnt)
{
    int color;
    if (*nose_cnt<=10)
    {
        color=13;
    }
    else if (*nose_cnt<=20)
    {
        color=12;
    }
    else if (*nose_cnt<=30)
    {
        color=10;
    }
    if(*nose_cnt==31)
    {
        *nose_cnt=0;
    }

    setcolor(color);
    line(670,250,720,260);
    line(670,250,665,265);
    line(665,265,720,260);
    setfillstyle(SOLID_FILL,color);
    floodfill(671,251,color);
}

void buttons()
    {
        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        circle(675,340,5);
        
        floodfill(675,340,MAGENTA);

        circle(680,365,6);
        floodfill(680,365,MAGENTA);

        circle(678,390,5);
        floodfill(678,390,MAGENTA);
    }

void mouth()
    {
        setcolor(BLACK);
        circle(690,275,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(690,275,BLACK);
        
        setcolor(BLACK);
        circle(680,280,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(680,280,BLACK);

        setcolor(BLACK);
        circle(670,282,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(670,282,BLACK);

        setcolor(BLACK);
        circle(660,280,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(660,280,BLACK);

        setcolor(BLACK);
        circle(650,275,3);
        setfillstyle(SOLID_FILL,BLACK);
        floodfill(650,275,BLACK);
    }

void snowman(int i,int* nose_cnt,int* n,int* d)
    {
    snowballs();

    eyes(i,n,d);

    muffler();

    nose(nose_cnt);

    mouth();

    buttons();
    }

void house()
    {
        setcolor(BLACK);
        line(1200,50,1700,50); /*UPPER LINE*/
        line(1700,50,1850,180);
        line(1350,180,1850,180); /*LOWER LINE*/
        line(1350,190,1850,190);
        line(1850,180,1850,190);

        line(1275,115,1775,115);
        line(1237,82,1737,82);
        line(1312,147,1812,147);

        line(1200,50,1050,180);
        line(1200,60,1050,190);
        line(1050,180,1050,190);

        line(1200,50,1350,180);
        line(1200,60,1350,190);
        line(1350,180,1350,190);

        line(1050,190,1080,190);
        line(1080,190,1215,75);

        line(1080,190,1080,200);
        circle(1215,150,40);
        setcolor(BROWN);
    }

void bg_color(int* bg_color_cnt)
{
    int bg_color=12;
    // if (*bg_color_cnt<=10)
    // {
    //     bg_color=12;
    // }
    // else if (*bg_color_cnt<=20)
    // {
    //     bg_color=10;
    // }
    // else if (*bg_color_cnt<=30)
    // {
    //     bg_color=14;
    // }
    // if(*bg_color_cnt==31)
    // {
    //     *bg_color_cnt=0;
    // }
    
    setcolor(bg_color);
    setfillstyle(SOLID_FILL,bg_color);
    rectangle(0,0,1920,816);
    floodfill(1,1,bg_color);
}

int main(int argc, char const *argv[])
{
    initwindow(1920,816,"flikkering");
    int page=1;

    int nose_cnt=0;
    int bg_color_cnt=0;

    int n,d=0;

for (int i=0; i <500; i++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        bg_color_cnt++;
        bg_color(&bg_color_cnt);

        fence();

        nose_cnt++;
        snowman(i,&nose_cnt,&n,&d);
        
        snow(i);

        setcolor(WHITE);
        rectangle(0,550,1920,816);
        setfillstyle(SOLID_FILL,WHITE);
        floodfill(1,551,WHITE); 


        setcolor(LIGHTGRAY);
        arc(660,360,230,330,80);
        arc(660,360,230,330,81);

        arc(665,500,200,340,120);
        arc(665,500,200,340,121);
        page=1-page;
    }

    getch();
    closegraph();
    return 0;
}

