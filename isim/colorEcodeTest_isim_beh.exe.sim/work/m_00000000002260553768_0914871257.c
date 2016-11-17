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
static const char *ng0 = "C:/Users/Kara/Documents/GitHub/Assignment4_TextDisplay/EncCounter.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};



static void Initial_28_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1880);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_34_1(char *t0)
{
    char t11[8];
    char t25[8];
    char t26[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    t1 = (t0 + 3048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3368);
    *((int *)t2) = 1;
    t3 = (t0 + 3080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t7, t4, 0, 0, 16, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t7 = (t0 + 1880);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 16, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(38, ng0);

LAB16:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1880);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 472);
    t9 = *((char **)t8);
    memset(t11, 0, 8);
    t8 = (t7 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB18;

LAB17:    t10 = (t9 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t7) < *((unsigned int *)t9))
        goto LAB19;

LAB20:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB15;

LAB11:    xsi_set_current_line(43, ng0);

LAB25:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1880);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t9 = (t7 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB27;

LAB26:    t10 = (t8 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB27;

LAB30:    if (*((unsigned int *)t7) > *((unsigned int *)t8))
        goto LAB28;

LAB29:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB15;

LAB18:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t11) = 1;
    goto LAB20;

LAB22:    xsi_set_current_line(40, ng0);
    t19 = (t0 + 1880);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 608);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_lshift(t25, 16, t22, 16, t24, 32);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 16, t21, 16, t25, 16);
    t23 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t23, t26, 0, 0, 16, 0LL);
    goto LAB24;

LAB27:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB29;

LAB28:    *((unsigned int *)t11) = 1;
    goto LAB29;

LAB31:    xsi_set_current_line(45, ng0);
    t19 = (t0 + 1880);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    t23 = (t0 + 608);
    t24 = *((char **)t23);
    memset(t25, 0, 8);
    xsi_vlog_unsigned_lshift(t25, 16, t22, 16, t24, 32);
    memset(t26, 0, 8);
    xsi_vlog_unsigned_minus(t26, 16, t21, 16, t25, 16);
    t23 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t23, t26, 0, 0, 16, 0LL);
    goto LAB33;

}


extern void work_m_00000000002260553768_0914871257_init()
{
	static char *pe[] = {(void *)Initial_28_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002260553768_0914871257", "isim/colorEcodeTest_isim_beh.exe.sim/work/m_00000000002260553768_0914871257.didat");
	xsi_register_executes(pe);
}
