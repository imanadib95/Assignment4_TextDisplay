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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/imana/OneDrive/Documents/GitHub/Assignment4_TextDisplay/CoreI.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {514U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {3U, 0U};
static int ng8[] = {2, 0};
static unsigned int ng9[] = {4U, 0U};
static int ng10[] = {3, 0};
static unsigned int ng11[] = {5U, 0U};
static int ng12[] = {4, 0};
static unsigned int ng13[] = {6U, 0U};
static int ng14[] = {5, 0};
static unsigned int ng15[] = {7U, 0U};
static unsigned int ng16[] = {32768U, 0U};
static unsigned int ng17[] = {8000U, 0U};
static int ng18[] = {514, 0};
static unsigned int ng19[] = {65535U, 65535U};



static void Initial_37_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3176);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Initial_38_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3496);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Initial_39_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3816);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Initial_40_3(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4136);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_52_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 6528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 7344);
    *((int *)t2) = 1;
    t3 = (t0 + 6560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 4616);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 3, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 3656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3816);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 4296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB2;

}

static void Always_62_5(char *t0)
{
    char t11[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 6776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7360);
    *((int *)t2) = 1;
    t3 = (t0 + 6808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(163, ng0);

LAB64:    xsi_set_current_line(164, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(168, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);

LAB25:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng17)));
    memset(t19, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB68;

LAB65:    if (t23 != 0)
        goto LAB67;

LAB66:    *((unsigned int *)t19) = 1;

LAB68:    t26 = (t19 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB26:    xsi_set_current_line(67, ng0);
    t9 = ((char*)((ng3)));
    t10 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB9:    xsi_set_current_line(74, ng0);

LAB27:    xsi_set_current_line(75, ng0);
    t3 = (t0 + 2296U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 0);
    *((unsigned int *)t11) = t13;
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 0);
    *((unsigned int *)t3) = t15;
    t16 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t16 & 7U);
    t17 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t17 & 7U);

LAB28:    t7 = ((char*)((ng4)));
    t18 = xsi_vlog_unsigned_case_compare(t11, 32, t7, 32);
    if (t18 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t8 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_unsigned_case_compare(t11, 32, t2, 32);
    if (t8 == 1)
        goto LAB39;

LAB40:
LAB42:
LAB41:    xsi_set_current_line(101, ng0);

LAB50:    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB43:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t4, 16, t5, 16);
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB11:    xsi_set_current_line(112, ng0);

LAB51:    xsi_set_current_line(113, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(114, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB13:    xsi_set_current_line(120, ng0);

LAB52:    xsi_set_current_line(121, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 16, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB15:    xsi_set_current_line(128, ng0);

LAB53:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB17:    xsi_set_current_line(136, ng0);

LAB54:    xsi_set_current_line(137, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t4, 16, t5, 16);
    t7 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t7, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB19:    xsi_set_current_line(144, ng0);

LAB55:    xsi_set_current_line(145, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t4, 16, t5, 16);
    t7 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t7, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    goto LAB25;

LAB21:    xsi_set_current_line(152, ng0);

LAB56:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 3176);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3336);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 16, 0LL);
    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(156, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t4, 16, t5, 16);
    t7 = (t0 + 4296);
    xsi_vlogvar_wait_assign_value(t7, t19, 0, 0, 16, 0LL);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 4136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng16)));
    memset(t19, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t7);
    t16 = *((unsigned int *)t9);
    t17 = (t15 ^ t16);
    t20 = (t14 | t17);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB60;

LAB57:    if (t23 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t19) = 1;

LAB60:    t26 = (t19 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t19);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(160, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB63:    goto LAB25;

LAB29:    xsi_set_current_line(77, ng0);

LAB44:    xsi_set_current_line(78, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 3, 0LL);
    goto LAB43;

LAB31:    xsi_set_current_line(81, ng0);

LAB45:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB33:    xsi_set_current_line(85, ng0);

LAB46:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB35:    xsi_set_current_line(89, ng0);

LAB47:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB37:    xsi_set_current_line(93, ng0);

LAB48:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB39:    xsi_set_current_line(97, ng0);

LAB49:    xsi_set_current_line(98, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 3, 0LL);
    goto LAB43;

LAB59:    t10 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(158, ng0);
    t32 = ((char*)((ng1)));
    t33 = (t0 + 4616);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 3, 0LL);
    goto LAB63;

LAB67:    t10 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB68;

LAB69:    xsi_set_current_line(172, ng0);
    t32 = ((char*)((ng18)));
    t33 = (t0 + 3656);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 16, 0LL);
    goto LAB71;

}

static void Always_176_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    t1 = (t0 + 7024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 7376);
    *((int *)t2) = 1;
    t3 = (t0 + 7056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(177, ng0);

LAB5:    xsi_set_current_line(178, ng0);
    t4 = (t0 + 4456);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(207, ng0);

LAB26:    xsi_set_current_line(208, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2696);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 16);
    xsi_set_current_line(209, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(210, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(180, ng0);

LAB14:    xsi_set_current_line(181, ng0);
    t9 = (t0 + 3176);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2696);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    xsi_set_current_line(182, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(183, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB13;

LAB9:    xsi_set_current_line(186, ng0);
    t3 = (t0 + 4616);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB15:    t7 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t7, 4);
    if (t13 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 4);
    if (t8 == 1)
        goto LAB18;

LAB19:
LAB21:
LAB20:    xsi_set_current_line(200, ng0);

LAB25:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 3176);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2696);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 16);
    xsi_set_current_line(202, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB22:    goto LAB13;

LAB16:    xsi_set_current_line(188, ng0);

LAB23:    xsi_set_current_line(189, ng0);
    t9 = (t0 + 3496);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 2696);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 16);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 2856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(191, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

LAB18:    xsi_set_current_line(194, ng0);

LAB24:    xsi_set_current_line(195, ng0);
    t3 = (t0 + 3496);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t9 = (t0 + 2696);
    xsi_vlogvar_assign_value(t9, t7, 0, 0, 16);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 3816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2856);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 16);
    xsi_set_current_line(197, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB22;

}


extern void work_m_00000000003675022148_4094267476_init()
{
	static char *pe[] = {(void *)Initial_37_0,(void *)Initial_38_1,(void *)Initial_39_2,(void *)Initial_40_3,(void *)Always_52_4,(void *)Always_62_5,(void *)Always_176_6};
	xsi_register_didat("work_m_00000000003675022148_4094267476", "isim/CoreAndRam_Test_isim_beh.exe.sim/work/m_00000000003675022148_4094267476.didat");
	xsi_register_executes(pe);
}
