/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Lilia/Digital/cuenta10000/contador10000.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_3336608883_1448934769_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2976);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1052U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 3036);
    t11 = (t4 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((int *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t10 = (t9 + 1);
    t2 = (t0 + 3072);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t11 = (t8 + 40U);
    t12 = *((char **)t11);
    *((int *)t12) = t10;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 6000000);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1144U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 1000);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 776U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t2 = (t0 + 3108);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3036);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB11:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 1604U);
    t5 = *((char **)t2);
    t3 = *((unsigned char *)t5);
    t6 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t2 = (t0 + 3144);
    t8 = (t2 + 32U);
    t11 = *((char **)t8);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t6;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3072);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void work_a_3336608883_1448934769_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    unsigned char t13;
    char *t14;
    int t15;

LAB0:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 660U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 752U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB11;

LAB12:    t1 = (unsigned char)0;

LAB13:    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:
LAB3:    t2 = (t0 + 2984);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 3180);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3216);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3252);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3288);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t8 = (t5 + 40U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1236U);
    t8 = *((char **)t4);
    t12 = *((int *)t8);
    t13 = (t12 == 9);
    if (t13 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1236U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t15 = (t12 + 1);
    t2 = (t0 + 3180);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = t15;
    xsi_driver_first_trans_fast(t2);

LAB15:    goto LAB9;

LAB11:    t4 = (t0 + 776U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB13;

LAB14:    xsi_set_current_line(67, ng0);
    t4 = (t0 + 3180);
    t9 = (t4 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 40U);
    t14 = *((char **)t11);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 == 9);
    if (t1 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t15 = (t12 + 1);
    t2 = (t0 + 3216);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = t15;
    xsi_driver_first_trans_fast(t2);

LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3216);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 == 9);
    if (t1 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1420U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t15 = (t12 + 1);
    t2 = (t0 + 3252);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = t15;
    xsi_driver_first_trans_fast(t2);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3252);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t1 = (t12 == 9);
    if (t1 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t15 = (t12 + 1);
    t2 = (t0 + 3288);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = t15;
    xsi_driver_first_trans_fast(t2);

LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3288);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB24;

}

static void work_a_3336608883_1448934769_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1580U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 2992);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 1868U);
    t8 = *((char **)t4);
    t4 = (t0 + 1696U);
    t9 = *((char **)t4);
    t10 = *((int *)t9);
    t11 = (t10 - 1);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(1, 4, 1, t10);
    t13 = (4U * t12);
    t14 = (0 + t13);
    t4 = (t8 + t14);
    t15 = (t0 + 3324);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    memcpy(t19, t4, 4U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t1 = (t10 == 4);
    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1696U);
    t4 = *((char **)t2);
    t10 = *((int *)t4);
    t11 = (t10 + 1);
    t2 = (t0 + 3360);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t15 = *((char **)t9);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1604U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3360);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t15 = *((char **)t9);
    *((int *)t15) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}


extern void work_a_3336608883_1448934769_init()
{
	static char *pe[] = {(void *)work_a_3336608883_1448934769_p_0,(void *)work_a_3336608883_1448934769_p_1,(void *)work_a_3336608883_1448934769_p_2};
	xsi_register_didat("work_a_3336608883_1448934769", "isim/contador10000_isim_beh.exe.sim/work/a_3336608883_1448934769.didat");
	xsi_register_executes(pe);
}
