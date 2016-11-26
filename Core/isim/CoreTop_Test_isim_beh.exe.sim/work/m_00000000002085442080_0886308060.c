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
static const char *ng0 = "C:/Users/imana/OneDrive/Documents/GitHub/Core/ALU.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {5U, 0U};
static unsigned int ng5[] = {6U, 0U};
static unsigned int ng6[] = {10U, 0U};
static unsigned int ng7[] = {11U, 0U};
static unsigned int ng8[] = {12U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {65535U, 65535U};



static void Cont_33_0(char *t0)
{
    char t5[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
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
    unsigned int t25;
    unsigned int t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t5, 0, 8);
    t2 = (t3 + 4);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t2);
    t15 = *((unsigned int *)t6);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB7;

LAB4:    if (t16 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t5) = 1;

LAB7:    t20 = (t0 + 3512);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memset(t24, 0, 8);
    t25 = 1U;
    t26 = t25;
    t27 = (t5 + 4);
    t28 = *((unsigned int *)t5);
    t25 = (t25 & t28);
    t29 = *((unsigned int *)t27);
    t26 = (t26 & t29);
    t30 = (t24 + 4);
    t31 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t31 | t25);
    t32 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t32 | t26);
    xsi_driver_vfirst_trans(t20, 0, 0);
    t33 = (t0 + 3416);
    *((int *)t33) = 1;

LAB1:    return;
LAB6:    t19 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB7;

}

static void Always_34_1(char *t0)
{
    char t4[8];
    char t19[8];
    char t20[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    int t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 3432);
    *((int *)t2) = 1;
    t3 = (t0 + 3128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t5 = (t0 + 1368U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 12);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 12);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 15U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 15U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t14, 4);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t15 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);
    t16 = (t0 + 1048U);
    t17 = *((char **)t16);
    t16 = (t0 + 1208U);
    t18 = *((char **)t16);
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 16, t17, 16, t18, 16);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t19, 0, 0, 16);
    goto LAB27;

LAB9:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1368U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 16, t5, 16, t19, 16);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t20, 0, 0, 16);
    goto LAB27;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (~(t8));
    *((unsigned int *)t19) = t9;
    *((unsigned int *)t3) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB29;

LAB28:    t21 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t21 & 65535U);
    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 65535U);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 16, t5, 16, t19, 16);
    t14 = ((char*)((ng2)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 16, t20, 16, t14, 16);
    t16 = (t0 + 1928);
    xsi_vlogvar_assign_value(t16, t23, 0, 0, 16);
    goto LAB27;

LAB13:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t23, 0, 8);
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t21 = (t10 | t13);
    t22 = *((unsigned int *)t3);
    t24 = *((unsigned int *)t7);
    t25 = (t22 | t24);
    t26 = (~(t25));
    t27 = (t21 & t26);
    if (t27 != 0)
        goto LAB33;

LAB30:    if (t25 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t23) = 1;

LAB33:    memset(t20, 0, 8);
    t16 = (t23 + 4);
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t23);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t16) != 0)
        goto LAB36;

LAB37:    t18 = (t20 + 4);
    t33 = *((unsigned int *)t20);
    t34 = *((unsigned int *)t18);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB38;

LAB39:    t37 = *((unsigned int *)t20);
    t38 = (~(t37));
    t39 = *((unsigned int *)t18);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t18) > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t20) > 0)
        goto LAB44;

LAB45:    memcpy(t19, t41, 8);

LAB46:    t42 = (t0 + 1928);
    xsi_vlogvar_assign_value(t42, t19, 0, 0, 16);
    goto LAB27;

LAB15:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    memset(t23, 0, 8);
    t3 = (t5 + 4);
    if (*((unsigned int *)t3) != 0)
        goto LAB48;

LAB47:    t7 = (t6 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB48;

LAB51:    if (*((unsigned int *)t5) < *((unsigned int *)t6))
        goto LAB49;

LAB50:    memset(t20, 0, 8);
    t16 = (t23 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t23);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB52;

LAB53:    if (*((unsigned int *)t16) != 0)
        goto LAB54;

LAB55:    t18 = (t20 + 4);
    t13 = *((unsigned int *)t20);
    t21 = *((unsigned int *)t18);
    t22 = (t13 || t21);
    if (t22 > 0)
        goto LAB56;

LAB57:    t24 = *((unsigned int *)t20);
    t25 = (~(t24));
    t26 = *((unsigned int *)t18);
    t27 = (t25 || t26);
    if (t27 > 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t18) > 0)
        goto LAB60;

LAB61:    if (*((unsigned int *)t20) > 0)
        goto LAB62;

LAB63:    memcpy(t19, t41, 8);

LAB64:    t42 = (t0 + 1928);
    xsi_vlogvar_assign_value(t42, t19, 0, 0, 16);
    goto LAB27;

LAB17:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1368U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_rshift(t20, 16, t5, 16, t19, 4);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t20, 0, 0, 16);
    goto LAB27;

LAB19:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1368U);
    t6 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 15U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 15U);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 16, t5, 16, t19, 4);
    t14 = (t0 + 1928);
    xsi_vlogvar_assign_value(t14, t20, 0, 0, 16);
    goto LAB27;

LAB21:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t5 = *((char **)t3);
    t3 = (t0 + 1208U);
    t6 = *((char **)t3);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 & t9);
    *((unsigned int *)t20) = t10;
    t3 = (t5 + 4);
    t7 = (t6 + 4);
    t14 = (t20 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t7);
    t13 = (t11 | t12);
    *((unsigned int *)t14) = t13;
    t21 = *((unsigned int *)t14);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t19, 0, 8);
    t18 = (t19 + 4);
    t36 = (t20 + 4);
    t45 = *((unsigned int *)t20);
    t46 = (~(t45));
    *((unsigned int *)t19) = t46;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t36) != 0)
        goto LAB69;

LAB68:    t51 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t51 & 65535U);
    t52 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t52 & 65535U);
    t41 = (t0 + 1928);
    xsi_vlogvar_assign_value(t41, t19, 0, 0, 16);
    goto LAB27;

LAB23:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    memset(t19, 0, 8);
    t3 = (t19 + 4);
    t6 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t19) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t3) = t11;
    t12 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t12 & 255U);
    t13 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t13 & 255U);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t19, 0, 0, 16);
    goto LAB27;

LAB29:    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t7);
    *((unsigned int *)t19) = (t10 | t11);
    t12 = *((unsigned int *)t3);
    t13 = *((unsigned int *)t7);
    *((unsigned int *)t3) = (t12 | t13);
    goto LAB28;

LAB32:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB33;

LAB34:    *((unsigned int *)t20) = 1;
    goto LAB37;

LAB36:    t17 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB37;

LAB38:    t36 = ((char*)((ng2)));
    goto LAB39;

LAB40:    t41 = ((char*)((ng1)));
    goto LAB41;

LAB42:    xsi_vlog_unsigned_bit_combine(t19, 16, t36, 16, t41, 16);
    goto LAB46;

LAB44:    memcpy(t19, t36, 8);
    goto LAB46;

LAB48:    t14 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB50;

LAB49:    *((unsigned int *)t23) = 1;
    goto LAB50;

LAB52:    *((unsigned int *)t20) = 1;
    goto LAB55;

LAB54:    t17 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB55;

LAB56:    t36 = ((char*)((ng2)));
    goto LAB57;

LAB58:    t41 = ((char*)((ng1)));
    goto LAB59;

LAB60:    xsi_vlog_unsigned_bit_combine(t19, 16, t36, 16, t41, 16);
    goto LAB64;

LAB62:    memcpy(t19, t36, 8);
    goto LAB64;

LAB65:    t24 = *((unsigned int *)t20);
    t25 = *((unsigned int *)t14);
    *((unsigned int *)t20) = (t24 | t25);
    t16 = (t5 + 4);
    t17 = (t6 + 4);
    t26 = *((unsigned int *)t5);
    t27 = (~(t26));
    t28 = *((unsigned int *)t16);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (~(t30));
    t32 = *((unsigned int *)t17);
    t33 = (~(t32));
    t43 = (t27 & t29);
    t44 = (t31 & t33);
    t34 = (~(t43));
    t35 = (~(t44));
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t34);
    t38 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t38 & t35);
    t39 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t39 & t34);
    t40 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t40 & t35);
    goto LAB67;

LAB69:    t47 = *((unsigned int *)t19);
    t48 = *((unsigned int *)t36);
    *((unsigned int *)t19) = (t47 | t48);
    t49 = *((unsigned int *)t18);
    t50 = *((unsigned int *)t36);
    *((unsigned int *)t18) = (t49 | t50);
    goto LAB68;

}


extern void work_m_00000000002085442080_0886308060_init()
{
	static char *pe[] = {(void *)Cont_33_0,(void *)Always_34_1};
	xsi_register_didat("work_m_00000000002085442080_0886308060", "isim/CoreTop_Test_isim_beh.exe.sim/work/m_00000000002085442080_0886308060.didat");
	xsi_register_executes(pe);
}
