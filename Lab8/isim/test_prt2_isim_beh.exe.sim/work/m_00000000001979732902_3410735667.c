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
static const char *ng0 = "C:/Users/Ben/Documents/Xilinx/Lab8/bcd7seg.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static unsigned int ng5[] = {15U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {79U, 0U};
static unsigned int ng8[] = {18U, 0U};
static unsigned int ng9[] = {6U, 0U};
static int ng10[] = {4, 0};
static unsigned int ng11[] = {76U, 0U};
static int ng12[] = {5, 0};
static unsigned int ng13[] = {36U, 0U};
static int ng14[] = {6, 0};
static unsigned int ng15[] = {32U, 0U};
static int ng16[] = {7, 0};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {0U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {4U, 0U};
static unsigned int ng21[] = {127U, 0U};



static void Always_33_0(char *t0)
{
    char t9[8];
    char t22[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    unsigned int t25;
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
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t9 + 4);
    t4 = (t3 + 4);
    t13 = *((unsigned int *)t3);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t4);
    t16 = (t15 >> 0);
    *((unsigned int *)t2) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t18 & 15U);
    t5 = (t0 + 2088);
    xsi_vlogvar_assign_value(t5, t9, 0, 0, 32);

LAB17:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB18:    t5 = ((char*)((ng1)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t5, 32);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng10)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng12)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_signed_case_compare(t4, 32, t2, 32);
    if (t8 == 1)
        goto LAB37;

LAB38:
LAB40:
LAB39:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng21)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB41:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = (t0 + 1768);
    t10 = (t7 + 72U);
    t11 = *((char **)t10);
    t12 = (t0 + 1928);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_get_index_select_value(t9, 32, t5, t11, 2, t20, 2, 2);
    t21 = ((char*)((ng2)));
    memset(t22, 0, 8);
    t23 = (t9 + 4);
    t24 = (t21 + 4);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t21);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t23);
    t17 = *((unsigned int *)t24);
    t18 = (t16 ^ t17);
    t25 = (t15 | t18);
    t26 = *((unsigned int *)t23);
    t27 = *((unsigned int *)t24);
    t28 = (t26 | t27);
    t29 = (~(t28));
    t30 = (t25 & t29);
    if (t30 != 0)
        goto LAB45;

LAB42:    if (t28 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t22) = 1;

LAB45:    t32 = (t22 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t22);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB46;

LAB47:
LAB48:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t5, 2, t7, 32);
    t10 = (t0 + 1928);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 2);
    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t10 = (t0 + 1208U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 15U);
    t19 = (t0 + 2088);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 32);
    goto LAB17;

LAB9:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 4);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 4);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB11:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 8);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB13:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 12);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 12);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t7 = (t0 + 2088);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 32);
    goto LAB17;

LAB19:    xsi_set_current_line(43, ng0);
    t7 = ((char*)((ng6)));
    t10 = (t0 + 1608);
    xsi_vlogvar_assign_value(t10, t7, 0, 0, 7);
    goto LAB41;

LAB21:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB23:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB25:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng9)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB27:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB29:    xsi_set_current_line(48, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB31:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng15)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB33:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB35:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng18)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB37:    xsi_set_current_line(52, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 7);
    goto LAB41;

LAB44:    t31 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB45;

LAB46:    xsi_set_current_line(55, ng0);
    t38 = ((char*)((ng1)));
    t39 = (t0 + 1768);
    t41 = (t0 + 1768);
    t42 = (t41 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 1928);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_convert_bit_index(t40, t43, 2, t46, 2, 2);
    t47 = (t40 + 4);
    t48 = *((unsigned int *)t47);
    t8 = (!(t48));
    if (t8 == 1)
        goto LAB49;

LAB50:    goto LAB48;

LAB49:    xsi_vlogvar_assign_value(t39, t38, 0, *((unsigned int *)t40), 1);
    goto LAB50;

}


extern void work_m_00000000001979732902_3410735667_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000001979732902_3410735667", "isim/test_prt2_isim_beh.exe.sim/work/m_00000000001979732902_3410735667.didat");
	xsi_register_executes(pe);
}
