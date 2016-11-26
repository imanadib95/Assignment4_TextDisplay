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
static const char *ng0 = "C:/Users/imana/OneDrive/Documents/GitHub/Core/buttonCount.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {65535U, 0U};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2656);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

LAB1:    return;
}

static void Initial_35_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2336);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 16);

LAB1:    return;
}

static void Always_37_2(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    unsigned int t35;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);

LAB16:    xsi_set_current_line(42, ng0);
    t9 = (t0 + 1616U);
    t10 = *((char **)t9);
    t9 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB20;

LAB17:    if (t23 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t11) = 1;

LAB20:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1776U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB28;

LAB25:    if (t23 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t11) = 1;

LAB28:    t9 = (t11 + 4);
    t28 = *((unsigned int *)t9);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB31:
LAB23:    goto LAB15;

LAB9:    xsi_set_current_line(55, ng0);

LAB33:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1616U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t3) == 0)
        goto LAB34;

LAB36:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB37:    t7 = (t11 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB39;

LAB38:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t35 = (t32 != 0);
    if (t35 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB42:    goto LAB15;

LAB11:    xsi_set_current_line(60, ng0);

LAB43:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 1776U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB47;

LAB45:    if (*((unsigned int *)t3) == 0)
        goto LAB44;

LAB46:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB47:    t7 = (t11 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB49;

LAB48:    t25 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t25 & 1U);
    t28 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t28 & 1U);
    t10 = (t11 + 4);
    t29 = *((unsigned int *)t10);
    t30 = (~(t29));
    t31 = *((unsigned int *)t11);
    t32 = (t31 & t30);
    t35 = (t32 != 0);
    if (t35 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB52:    goto LAB15;

LAB19:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 2, 0LL);
    goto LAB23;

LAB27:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(48, ng0);

LAB32:    xsi_set_current_line(49, ng0);
    t10 = ((char*)((ng5)));
    t12 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t12, t10, 0, 0, 2, 0LL);
    goto LAB31;

LAB34:    *((unsigned int *)t11) = 1;
    goto LAB37;

LAB39:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB38;

LAB40:    xsi_set_current_line(56, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 2, 0LL);
    goto LAB42;

LAB44:    *((unsigned int *)t11) = 1;
    goto LAB47;

LAB49:    t21 = *((unsigned int *)t11);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB48;

LAB50:    xsi_set_current_line(61, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, 0, 2, 0LL);
    goto LAB52;

}

static void Always_70_3(char *t0)
{
    char t8[8];
    char t24[8];
    char t40[8];
    char t56[8];
    char t64[8];
    char t96[8];
    char t112[8];
    char t116[8];
    char t124[8];
    char t166[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    char *t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    char *t110;
    char *t111;
    char *t113;
    char *t114;
    char *t115;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    char *t165;
    char *t167;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(70, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2656);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    memset(t24, 0, 8);
    t25 = (t8 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t25) != 0)
        goto LAB12;

LAB13:    t32 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t32);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB14;

LAB15:    memcpy(t64, t24, 8);

LAB16:    memset(t96, 0, 8);
    t97 = (t64 + 4);
    t98 = *((unsigned int *)t97);
    t99 = (~(t98));
    t100 = *((unsigned int *)t64);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t97) != 0)
        goto LAB30;

LAB31:    t104 = (t96 + 4);
    t105 = *((unsigned int *)t96);
    t106 = *((unsigned int *)t104);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB32;

LAB33:    memcpy(t124, t96, 8);

LAB34:    t156 = (t124 + 4);
    t157 = *((unsigned int *)t156);
    t158 = (~(t157));
    t159 = *((unsigned int *)t124);
    t160 = (t159 & t158);
    t161 = (t160 != 0);
    if (t161 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB53;

LAB50:    if (t20 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t8) = 1;

LAB53:    memset(t24, 0, 8);
    t10 = (t8 + 4);
    t26 = *((unsigned int *)t10);
    t27 = (~(t26));
    t28 = *((unsigned int *)t8);
    t29 = (t28 & t27);
    t30 = (t29 & 1U);
    if (t30 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t10) != 0)
        goto LAB56;

LAB57:    t25 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = *((unsigned int *)t25);
    t35 = (t33 || t34);
    if (t35 > 0)
        goto LAB58;

LAB59:    memcpy(t64, t24, 8);

LAB60:    memset(t96, 0, 8);
    t78 = (t64 + 4);
    t98 = *((unsigned int *)t78);
    t99 = (~(t98));
    t100 = *((unsigned int *)t64);
    t101 = (t100 & t99);
    t102 = (t101 & 1U);
    if (t102 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t78) != 0)
        goto LAB74;

LAB75:    t97 = (t96 + 4);
    t105 = *((unsigned int *)t96);
    t106 = *((unsigned int *)t97);
    t107 = (t105 || t106);
    if (t107 > 0)
        goto LAB76;

LAB77:    memcpy(t124, t96, 8);

LAB78:    t138 = (t124 + 4);
    t157 = *((unsigned int *)t138);
    t158 = (~(t157));
    t159 = *((unsigned int *)t124);
    t160 = (t159 & t158);
    t161 = (t160 != 0);
    if (t161 > 0)
        goto LAB91;

LAB92:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 2336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 16, 0LL);

LAB93:
LAB49:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t11 = *((unsigned int *)t2);
    t12 = (~(t11));
    t13 = *((unsigned int *)t3);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB94;

LAB95:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB96:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB12:    t31 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB13;

LAB14:    t36 = (t0 + 2496);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = ((char*)((ng3)));
    memset(t40, 0, 8);
    t41 = (t38 + 4);
    t42 = (t39 + 4);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t41);
    t47 = *((unsigned int *)t42);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t41);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB20;

LAB17:    if (t52 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t40) = 1;

LAB20:    memset(t56, 0, 8);
    t57 = (t40 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t57) != 0)
        goto LAB23;

LAB24:    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t68 = (t24 + 4);
    t69 = (t56 + 4);
    t70 = (t64 + 4);
    t71 = *((unsigned int *)t68);
    t72 = *((unsigned int *)t69);
    t73 = (t71 | t72);
    *((unsigned int *)t70) = t73;
    t74 = *((unsigned int *)t70);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB19:    t55 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t56) = 1;
    goto LAB24;

LAB23:    t63 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB24;

LAB25:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t70);
    *((unsigned int *)t64) = (t76 | t77);
    t78 = (t24 + 4);
    t79 = (t56 + 4);
    t80 = *((unsigned int *)t24);
    t81 = (~(t80));
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t79);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t92 & t90);
    t93 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB27;

LAB28:    *((unsigned int *)t96) = 1;
    goto LAB31;

LAB30:    t103 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t103) = 1;
    goto LAB31;

LAB32:    t108 = (t0 + 2336);
    t109 = (t108 + 56U);
    t110 = *((char **)t109);
    t111 = ((char*)((ng6)));
    memset(t112, 0, 8);
    t113 = (t110 + 4);
    if (*((unsigned int *)t113) != 0)
        goto LAB36;

LAB35:    t114 = (t111 + 4);
    if (*((unsigned int *)t114) != 0)
        goto LAB36;

LAB39:    if (*((unsigned int *)t110) < *((unsigned int *)t111))
        goto LAB37;

LAB38:    memset(t116, 0, 8);
    t117 = (t112 + 4);
    t118 = *((unsigned int *)t117);
    t119 = (~(t118));
    t120 = *((unsigned int *)t112);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t117) != 0)
        goto LAB42;

LAB43:    t125 = *((unsigned int *)t96);
    t126 = *((unsigned int *)t116);
    t127 = (t125 & t126);
    *((unsigned int *)t124) = t127;
    t128 = (t96 + 4);
    t129 = (t116 + 4);
    t130 = (t124 + 4);
    t131 = *((unsigned int *)t128);
    t132 = *((unsigned int *)t129);
    t133 = (t131 | t132);
    *((unsigned int *)t130) = t133;
    t134 = *((unsigned int *)t130);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB44;

LAB45:
LAB46:    goto LAB34;

LAB36:    t115 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB38;

LAB37:    *((unsigned int *)t112) = 1;
    goto LAB38;

LAB40:    *((unsigned int *)t116) = 1;
    goto LAB43;

LAB42:    t123 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t123) = 1;
    goto LAB43;

LAB44:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t130);
    *((unsigned int *)t124) = (t136 | t137);
    t138 = (t96 + 4);
    t139 = (t116 + 4);
    t140 = *((unsigned int *)t96);
    t141 = (~(t140));
    t142 = *((unsigned int *)t138);
    t143 = (~(t142));
    t144 = *((unsigned int *)t116);
    t145 = (~(t144));
    t146 = *((unsigned int *)t139);
    t147 = (~(t146));
    t148 = (t141 & t143);
    t149 = (t145 & t147);
    t150 = (~(t148));
    t151 = (~(t149));
    t152 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t152 & t150);
    t153 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t153 & t151);
    t154 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t154 & t150);
    t155 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t155 & t151);
    goto LAB46;

LAB47:    xsi_set_current_line(73, ng0);
    t162 = (t0 + 2336);
    t163 = (t162 + 56U);
    t164 = *((char **)t163);
    t165 = ((char*)((ng2)));
    memset(t166, 0, 8);
    xsi_vlog_unsigned_add(t166, 16, t164, 16, t165, 16);
    t167 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t167, t166, 0, 0, 16, 0LL);
    goto LAB49;

LAB52:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t24) = 1;
    goto LAB57;

LAB56:    t23 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB57;

LAB58:    t31 = (t0 + 2496);
    t32 = (t31 + 56U);
    t36 = *((char **)t32);
    t37 = ((char*)((ng3)));
    memset(t40, 0, 8);
    t38 = (t36 + 4);
    t39 = (t37 + 4);
    t43 = *((unsigned int *)t36);
    t44 = *((unsigned int *)t37);
    t45 = (t43 ^ t44);
    t46 = *((unsigned int *)t38);
    t47 = *((unsigned int *)t39);
    t48 = (t46 ^ t47);
    t49 = (t45 | t48);
    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t39);
    t52 = (t50 | t51);
    t53 = (~(t52));
    t54 = (t49 & t53);
    if (t54 != 0)
        goto LAB64;

LAB61:    if (t52 != 0)
        goto LAB63;

LAB62:    *((unsigned int *)t40) = 1;

LAB64:    memset(t56, 0, 8);
    t42 = (t40 + 4);
    t58 = *((unsigned int *)t42);
    t59 = (~(t58));
    t60 = *((unsigned int *)t40);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB65;

LAB66:    if (*((unsigned int *)t42) != 0)
        goto LAB67;

LAB68:    t65 = *((unsigned int *)t24);
    t66 = *((unsigned int *)t56);
    t67 = (t65 & t66);
    *((unsigned int *)t64) = t67;
    t57 = (t24 + 4);
    t63 = (t56 + 4);
    t68 = (t64 + 4);
    t71 = *((unsigned int *)t57);
    t72 = *((unsigned int *)t63);
    t73 = (t71 | t72);
    *((unsigned int *)t68) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB69;

LAB70:
LAB71:    goto LAB60;

LAB63:    t41 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB64;

LAB65:    *((unsigned int *)t56) = 1;
    goto LAB68;

LAB67:    t55 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB68;

LAB69:    t76 = *((unsigned int *)t64);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t64) = (t76 | t77);
    t69 = (t24 + 4);
    t70 = (t56 + 4);
    t80 = *((unsigned int *)t24);
    t81 = (~(t80));
    t82 = *((unsigned int *)t69);
    t83 = (~(t82));
    t84 = *((unsigned int *)t56);
    t85 = (~(t84));
    t86 = *((unsigned int *)t70);
    t87 = (~(t86));
    t88 = (t81 & t83);
    t89 = (t85 & t87);
    t90 = (~(t88));
    t91 = (~(t89));
    t92 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t92 & t90);
    t93 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t93 & t91);
    t94 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t94 & t90);
    t95 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t95 & t91);
    goto LAB71;

LAB72:    *((unsigned int *)t96) = 1;
    goto LAB75;

LAB74:    t79 = (t96 + 4);
    *((unsigned int *)t96) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB75;

LAB76:    t103 = (t0 + 2336);
    t104 = (t103 + 56U);
    t108 = *((char **)t104);
    t109 = ((char*)((ng3)));
    memset(t112, 0, 8);
    t110 = (t108 + 4);
    if (*((unsigned int *)t110) != 0)
        goto LAB80;

LAB79:    t111 = (t109 + 4);
    if (*((unsigned int *)t111) != 0)
        goto LAB80;

LAB83:    if (*((unsigned int *)t108) > *((unsigned int *)t109))
        goto LAB81;

LAB82:    memset(t116, 0, 8);
    t114 = (t112 + 4);
    t118 = *((unsigned int *)t114);
    t119 = (~(t118));
    t120 = *((unsigned int *)t112);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB84;

LAB85:    if (*((unsigned int *)t114) != 0)
        goto LAB86;

LAB87:    t125 = *((unsigned int *)t96);
    t126 = *((unsigned int *)t116);
    t127 = (t125 & t126);
    *((unsigned int *)t124) = t127;
    t117 = (t96 + 4);
    t123 = (t116 + 4);
    t128 = (t124 + 4);
    t131 = *((unsigned int *)t117);
    t132 = *((unsigned int *)t123);
    t133 = (t131 | t132);
    *((unsigned int *)t128) = t133;
    t134 = *((unsigned int *)t128);
    t135 = (t134 != 0);
    if (t135 == 1)
        goto LAB88;

LAB89:
LAB90:    goto LAB78;

LAB80:    t113 = (t112 + 4);
    *((unsigned int *)t112) = 1;
    *((unsigned int *)t113) = 1;
    goto LAB82;

LAB81:    *((unsigned int *)t112) = 1;
    goto LAB82;

LAB84:    *((unsigned int *)t116) = 1;
    goto LAB87;

LAB86:    t115 = (t116 + 4);
    *((unsigned int *)t116) = 1;
    *((unsigned int *)t115) = 1;
    goto LAB87;

LAB88:    t136 = *((unsigned int *)t124);
    t137 = *((unsigned int *)t128);
    *((unsigned int *)t124) = (t136 | t137);
    t129 = (t96 + 4);
    t130 = (t116 + 4);
    t140 = *((unsigned int *)t96);
    t141 = (~(t140));
    t142 = *((unsigned int *)t129);
    t143 = (~(t142));
    t144 = *((unsigned int *)t116);
    t145 = (~(t144));
    t146 = *((unsigned int *)t130);
    t147 = (~(t146));
    t148 = (t141 & t143);
    t149 = (t145 & t147);
    t150 = (~(t148));
    t151 = (~(t149));
    t152 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t152 & t150);
    t153 = *((unsigned int *)t128);
    *((unsigned int *)t128) = (t153 & t151);
    t154 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t154 & t150);
    t155 = *((unsigned int *)t124);
    *((unsigned int *)t124) = (t155 & t151);
    goto LAB90;

LAB91:    xsi_set_current_line(76, ng0);
    t139 = (t0 + 2336);
    t156 = (t139 + 56U);
    t162 = *((char **)t156);
    t163 = ((char*)((ng2)));
    memset(t166, 0, 8);
    xsi_vlog_unsigned_minus(t166, 16, t162, 16, t163, 16);
    t164 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t164, t166, 0, 0, 16, 0LL);
    goto LAB93;

LAB94:    xsi_set_current_line(83, ng0);

LAB97:    xsi_set_current_line(84, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    goto LAB96;

}


extern void work_m_00000000000396797639_1939219855_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Initial_35_1,(void *)Always_37_2,(void *)Always_70_3};
	xsi_register_didat("work_m_00000000000396797639_1939219855", "isim/Core_MemCont_VGA_Test_isim_beh.exe.sim/work/m_00000000000396797639_1939219855.didat");
	xsi_register_executes(pe);
}
