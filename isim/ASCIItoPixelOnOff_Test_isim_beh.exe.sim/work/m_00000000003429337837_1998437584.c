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
static const char *ng0 = "C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/GlyphPixelExtractor.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_27_0(char *t0)
{
    char t4[8];
    char t8[8];
    char t18[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t19;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 1048U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng1)));
    xsi_vlogtype_concat(t4, 13, 13, 3U, t6, 3, t7, 8, t5, 2);
    t9 = (t0 + 1368U);
    t10 = *((char **)t9);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t11 = (t10 + 4);
    t12 = *((unsigned int *)t10);
    t13 = (t12 >> 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t11);
    t15 = (t14 >> 1);
    *((unsigned int *)t9) = t15;
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 3U);
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 3U);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_add(t18, 13, t4, 13, t8, 13);
    t19 = (t0 + 1768);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 13);
    goto LAB2;

}


extern void work_m_00000000003429337837_1998437584_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000003429337837_1998437584", "isim/ASCIItoPixelOnOff_Test_isim_beh.exe.sim/work/m_00000000003429337837_1998437584.didat");
	xsi_register_executes(pe);
}
