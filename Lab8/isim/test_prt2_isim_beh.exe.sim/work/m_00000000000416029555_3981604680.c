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
static const char *ng0 = "C:/Users/Ben/Documents/Xilinx/Lab8/oneZoneDtr.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {3U, 0U};
static int ng6[] = {0, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4528);
    *((int *)t2) = 1;
    t3 = (t0 + 3744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB8;

LAB5:    if (t18 != 0)
        goto LAB7;

LAB6:    *((unsigned int *)t6) = 1;

LAB8:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB11:    goto LAB2;

LAB7:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(33, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB11;

}

static void Always_37_1(char *t0)
{
    char t11[8];
    char t24[8];
    char t31[8];
    char t71[8];
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
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4544);
    *((int *)t2) = 1;
    t3 = (t0 + 3992);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t9 = (t0 + 1912U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    t9 = (t10 + 4);
    t12 = *((unsigned int *)t9);
    t13 = (~(t12));
    t14 = *((unsigned int *)t10);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t9) != 0)
        goto LAB17;

LAB18:    t18 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t18);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB19;

LAB20:    memcpy(t31, t11, 8);

LAB21:    t63 = (t31 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t2) == 0)
        goto LAB32;

LAB34:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB35:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB37;

LAB36:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t29 & 1U);
    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t38 = (t34 & t33);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t9) != 0)
        goto LAB40;

LAB41:    t17 = (t24 + 4);
    t40 = *((unsigned int *)t24);
    t41 = *((unsigned int *)t17);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB42;

LAB43:    memcpy(t71, t24, 8);

LAB44:    t46 = (t71 + 4);
    t80 = *((unsigned int *)t46);
    t81 = (~(t80));
    t82 = *((unsigned int *)t71);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB52;

LAB53:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB54:
LAB31:    goto LAB14;

LAB8:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB58;

LAB56:    if (*((unsigned int *)t3) == 0)
        goto LAB55;

LAB57:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;

LAB58:    t7 = (t11 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB60;

LAB59:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t29 & 1U);
    memset(t24, 0, 8);
    t10 = (t11 + 4);
    t32 = *((unsigned int *)t10);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t38 = (t34 & t33);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t10) != 0)
        goto LAB63;

LAB64:    t18 = (t24 + 4);
    t40 = *((unsigned int *)t24);
    t41 = *((unsigned int *)t18);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB65;

LAB66:    memcpy(t71, t24, 8);

LAB67:    t63 = (t71 + 4);
    t80 = *((unsigned int *)t63);
    t81 = (~(t80));
    t82 = *((unsigned int *)t71);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t2) != 0)
        goto LAB80;

LAB81:    t5 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t5);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB82;

LAB83:    memcpy(t31, t11, 8);

LAB84:    t35 = (t31 + 4);
    t64 = *((unsigned int *)t35);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB94:
LAB77:    goto LAB14;

LAB10:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t3) != 0)
        goto LAB97;

LAB98:    t7 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t7);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB99;

LAB100:    memcpy(t31, t11, 8);

LAB101:    t36 = (t31 + 4);
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB109;

LAB110:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB115;

LAB113:    if (*((unsigned int *)t2) == 0)
        goto LAB112;

LAB114:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB115:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB117;

LAB116:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t29 & 1U);
    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t38 = (t34 & t33);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB118;

LAB119:    if (*((unsigned int *)t9) != 0)
        goto LAB120;

LAB121:    t17 = (t24 + 4);
    t40 = *((unsigned int *)t24);
    t41 = *((unsigned int *)t17);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB122;

LAB123:    memcpy(t71, t24, 8);

LAB124:    t46 = (t71 + 4);
    t80 = *((unsigned int *)t46);
    t81 = (~(t80));
    t82 = *((unsigned int *)t71);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB132;

LAB133:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB134:
LAB111:    goto LAB14;

LAB12:    xsi_set_current_line(42, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t4 + 4);
    t12 = *((unsigned int *)t3);
    t13 = (~(t12));
    t14 = *((unsigned int *)t4);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB135;

LAB136:    if (*((unsigned int *)t3) != 0)
        goto LAB137;

LAB138:    t7 = (t11 + 4);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t7);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB139;

LAB140:    memcpy(t31, t11, 8);

LAB141:    t36 = (t31 + 4);
    t64 = *((unsigned int *)t36);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB149;

LAB150:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t12 = *((unsigned int *)t2);
    t13 = (~(t12));
    t14 = *((unsigned int *)t3);
    t15 = (t14 & t13);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB155;

LAB153:    if (*((unsigned int *)t2) == 0)
        goto LAB152;

LAB154:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;

LAB155:    t5 = (t11 + 4);
    t7 = (t3 + 4);
    t19 = *((unsigned int *)t3);
    t20 = (~(t19));
    *((unsigned int *)t11) = t20;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t7) != 0)
        goto LAB157;

LAB156:    t28 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t28 & 1U);
    t29 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t29 & 1U);
    memset(t24, 0, 8);
    t9 = (t11 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t38 = (t34 & t33);
    t39 = (t38 & 1U);
    if (t39 != 0)
        goto LAB158;

LAB159:    if (*((unsigned int *)t9) != 0)
        goto LAB160;

LAB161:    t17 = (t24 + 4);
    t40 = *((unsigned int *)t24);
    t41 = *((unsigned int *)t17);
    t42 = (t40 || t41);
    if (t42 > 0)
        goto LAB162;

LAB163:    memcpy(t71, t24, 8);

LAB164:    t46 = (t71 + 4);
    t80 = *((unsigned int *)t46);
    t81 = (~(t80));
    t82 = *((unsigned int *)t71);
    t83 = (t82 & t81);
    t84 = (t83 != 0);
    if (t84 > 0)
        goto LAB172;

LAB173:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2792);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB174:
LAB151:    goto LAB14;

LAB15:    *((unsigned int *)t11) = 1;
    goto LAB18;

LAB17:    t17 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB18;

LAB19:    t22 = (t0 + 2072U);
    t23 = *((char **)t22);
    memset(t24, 0, 8);
    t22 = (t23 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t22) != 0)
        goto LAB24;

LAB25:    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t24);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t11 + 4);
    t36 = (t24 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB21;

LAB22:    *((unsigned int *)t24) = 1;
    goto LAB25;

LAB24:    t30 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB25;

LAB26:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t11 + 4);
    t46 = (t24 + 4);
    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t24);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB28;

LAB29:    xsi_set_current_line(39, ng0);
    t69 = ((char*)((ng3)));
    t70 = (t0 + 2792);
    xsi_vlogvar_assign_value(t70, t69, 0, 0, 2);
    goto LAB31;

LAB32:    *((unsigned int *)t11) = 1;
    goto LAB35;

LAB37:    t21 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t21 | t25);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t26 | t27);
    goto LAB36;

LAB38:    *((unsigned int *)t24) = 1;
    goto LAB41;

LAB40:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB41;

LAB42:    t18 = (t0 + 2072U);
    t22 = *((char **)t18);
    memset(t31, 0, 8);
    t18 = (t22 + 4);
    t43 = *((unsigned int *)t18);
    t44 = (~(t43));
    t47 = *((unsigned int *)t22);
    t48 = (t47 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t18) != 0)
        goto LAB47;

LAB48:    t50 = *((unsigned int *)t24);
    t51 = *((unsigned int *)t31);
    t52 = (t50 & t51);
    *((unsigned int *)t71) = t52;
    t30 = (t24 + 4);
    t35 = (t31 + 4);
    t36 = (t71 + 4);
    t53 = *((unsigned int *)t30);
    t54 = *((unsigned int *)t35);
    t57 = (t53 | t54);
    *((unsigned int *)t36) = t57;
    t58 = *((unsigned int *)t36);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t31) = 1;
    goto LAB48;

LAB47:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB48;

LAB49:    t60 = *((unsigned int *)t71);
    t61 = *((unsigned int *)t36);
    *((unsigned int *)t71) = (t60 | t61);
    t37 = (t24 + 4);
    t45 = (t31 + 4);
    t62 = *((unsigned int *)t24);
    t64 = (~(t62));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t68 = (~(t67));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t8 = (t64 & t66);
    t55 = (t68 & t73);
    t74 = (~(t8));
    t75 = (~(t55));
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t77 & t75);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 & t74);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & t75);
    goto LAB51;

LAB52:    xsi_set_current_line(39, ng0);
    t63 = ((char*)((ng2)));
    t69 = (t0 + 2792);
    xsi_vlogvar_assign_value(t69, t63, 0, 0, 2);
    goto LAB54;

LAB55:    *((unsigned int *)t11) = 1;
    goto LAB58;

LAB60:    t21 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t9);
    *((unsigned int *)t11) = (t21 | t25);
    t26 = *((unsigned int *)t7);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t26 | t27);
    goto LAB59;

LAB61:    *((unsigned int *)t24) = 1;
    goto LAB64;

LAB63:    t17 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB64;

LAB65:    t22 = (t0 + 2072U);
    t23 = *((char **)t22);
    memset(t31, 0, 8);
    t22 = (t23 + 4);
    t43 = *((unsigned int *)t22);
    t44 = (~(t43));
    t47 = *((unsigned int *)t23);
    t48 = (t47 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB68;

LAB69:    if (*((unsigned int *)t22) != 0)
        goto LAB70;

LAB71:    t50 = *((unsigned int *)t24);
    t51 = *((unsigned int *)t31);
    t52 = (t50 & t51);
    *((unsigned int *)t71) = t52;
    t35 = (t24 + 4);
    t36 = (t31 + 4);
    t37 = (t71 + 4);
    t53 = *((unsigned int *)t35);
    t54 = *((unsigned int *)t36);
    t57 = (t53 | t54);
    *((unsigned int *)t37) = t57;
    t58 = *((unsigned int *)t37);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB72;

LAB73:
LAB74:    goto LAB67;

LAB68:    *((unsigned int *)t31) = 1;
    goto LAB71;

LAB70:    t30 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB71;

LAB72:    t60 = *((unsigned int *)t71);
    t61 = *((unsigned int *)t37);
    *((unsigned int *)t71) = (t60 | t61);
    t45 = (t24 + 4);
    t46 = (t31 + 4);
    t62 = *((unsigned int *)t24);
    t64 = (~(t62));
    t65 = *((unsigned int *)t45);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t68 = (~(t67));
    t72 = *((unsigned int *)t46);
    t73 = (~(t72));
    t55 = (t64 & t66);
    t56 = (t68 & t73);
    t74 = (~(t55));
    t75 = (~(t56));
    t76 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t76 & t74);
    t77 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t77 & t75);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 & t74);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & t75);
    goto LAB74;

LAB75:    xsi_set_current_line(40, ng0);
    t69 = ((char*)((ng4)));
    t70 = (t0 + 2792);
    xsi_vlogvar_assign_value(t70, t69, 0, 0, 2);
    goto LAB77;

LAB78:    *((unsigned int *)t11) = 1;
    goto LAB81;

LAB80:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB81;

LAB82:    t7 = (t0 + 2072U);
    t9 = *((char **)t7);
    memset(t24, 0, 8);
    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t7) != 0)
        goto LAB87;

LAB88:    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t24);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t17 = (t11 + 4);
    t18 = (t24 + 4);
    t22 = (t31 + 4);
    t38 = *((unsigned int *)t17);
    t39 = *((unsigned int *)t18);
    t40 = (t38 | t39);
    *((unsigned int *)t22) = t40;
    t41 = *((unsigned int *)t22);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB84;

LAB85:    *((unsigned int *)t24) = 1;
    goto LAB88;

LAB87:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB88;

LAB89:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t22);
    *((unsigned int *)t31) = (t43 | t44);
    t23 = (t11 + 4);
    t30 = (t24 + 4);
    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t23);
    t50 = (~(t49));
    t51 = *((unsigned int *)t24);
    t52 = (~(t51));
    t53 = *((unsigned int *)t30);
    t54 = (~(t53));
    t8 = (t48 & t50);
    t55 = (t52 & t54);
    t57 = (~(t8));
    t58 = (~(t55));
    t59 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t59 & t57);
    t60 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB91;

LAB92:    xsi_set_current_line(40, ng0);
    t36 = ((char*)((ng3)));
    t37 = (t0 + 2792);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 2);
    goto LAB94;

LAB95:    *((unsigned int *)t11) = 1;
    goto LAB98;

LAB97:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB98;

LAB99:    t9 = (t0 + 2072U);
    t10 = *((char **)t9);
    memset(t24, 0, 8);
    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t9) != 0)
        goto LAB104;

LAB105:    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t24);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t18 = (t11 + 4);
    t22 = (t24 + 4);
    t23 = (t31 + 4);
    t38 = *((unsigned int *)t18);
    t39 = *((unsigned int *)t22);
    t40 = (t38 | t39);
    *((unsigned int *)t23) = t40;
    t41 = *((unsigned int *)t23);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB106;

LAB107:
LAB108:    goto LAB101;

LAB102:    *((unsigned int *)t24) = 1;
    goto LAB105;

LAB104:    t17 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB105;

LAB106:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t23);
    *((unsigned int *)t31) = (t43 | t44);
    t30 = (t11 + 4);
    t35 = (t24 + 4);
    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (~(t49));
    t51 = *((unsigned int *)t24);
    t52 = (~(t51));
    t53 = *((unsigned int *)t35);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t59 & t57);
    t60 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB108;

LAB109:    xsi_set_current_line(41, ng0);
    t37 = ((char*)((ng5)));
    t45 = (t0 + 2792);
    xsi_vlogvar_assign_value(t45, t37, 0, 0, 2);
    goto LAB111;

LAB112:    *((unsigned int *)t11) = 1;
    goto LAB115;

LAB117:    t21 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t21 | t25);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t26 | t27);
    goto LAB116;

LAB118:    *((unsigned int *)t24) = 1;
    goto LAB121;

LAB120:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB121;

LAB122:    t18 = (t0 + 2072U);
    t22 = *((char **)t18);
    memset(t31, 0, 8);
    t18 = (t22 + 4);
    t43 = *((unsigned int *)t18);
    t44 = (~(t43));
    t47 = *((unsigned int *)t22);
    t48 = (t47 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB125;

LAB126:    if (*((unsigned int *)t18) != 0)
        goto LAB127;

LAB128:    t50 = *((unsigned int *)t24);
    t51 = *((unsigned int *)t31);
    t52 = (t50 & t51);
    *((unsigned int *)t71) = t52;
    t30 = (t24 + 4);
    t35 = (t31 + 4);
    t36 = (t71 + 4);
    t53 = *((unsigned int *)t30);
    t54 = *((unsigned int *)t35);
    t57 = (t53 | t54);
    *((unsigned int *)t36) = t57;
    t58 = *((unsigned int *)t36);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB129;

LAB130:
LAB131:    goto LAB124;

LAB125:    *((unsigned int *)t31) = 1;
    goto LAB128;

LAB127:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB128;

LAB129:    t60 = *((unsigned int *)t71);
    t61 = *((unsigned int *)t36);
    *((unsigned int *)t71) = (t60 | t61);
    t37 = (t24 + 4);
    t45 = (t31 + 4);
    t62 = *((unsigned int *)t24);
    t64 = (~(t62));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t68 = (~(t67));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t8 = (t64 & t66);
    t55 = (t68 & t73);
    t74 = (~(t8));
    t75 = (~(t55));
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t77 & t75);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 & t74);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & t75);
    goto LAB131;

LAB132:    xsi_set_current_line(41, ng0);
    t63 = ((char*)((ng2)));
    t69 = (t0 + 2792);
    xsi_vlogvar_assign_value(t69, t63, 0, 0, 2);
    goto LAB134;

LAB135:    *((unsigned int *)t11) = 1;
    goto LAB138;

LAB137:    t5 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB138;

LAB139:    t9 = (t0 + 2072U);
    t10 = *((char **)t9);
    memset(t24, 0, 8);
    t9 = (t10 + 4);
    t25 = *((unsigned int *)t9);
    t26 = (~(t25));
    t27 = *((unsigned int *)t10);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB142;

LAB143:    if (*((unsigned int *)t9) != 0)
        goto LAB144;

LAB145:    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t24);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t18 = (t11 + 4);
    t22 = (t24 + 4);
    t23 = (t31 + 4);
    t38 = *((unsigned int *)t18);
    t39 = *((unsigned int *)t22);
    t40 = (t38 | t39);
    *((unsigned int *)t23) = t40;
    t41 = *((unsigned int *)t23);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB146;

LAB147:
LAB148:    goto LAB141;

LAB142:    *((unsigned int *)t24) = 1;
    goto LAB145;

LAB144:    t17 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB145;

LAB146:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t23);
    *((unsigned int *)t31) = (t43 | t44);
    t30 = (t11 + 4);
    t35 = (t24 + 4);
    t47 = *((unsigned int *)t11);
    t48 = (~(t47));
    t49 = *((unsigned int *)t30);
    t50 = (~(t49));
    t51 = *((unsigned int *)t24);
    t52 = (~(t51));
    t53 = *((unsigned int *)t35);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t59 & t57);
    t60 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB148;

LAB149:    xsi_set_current_line(42, ng0);
    t37 = ((char*)((ng3)));
    t45 = (t0 + 2792);
    xsi_vlogvar_assign_value(t45, t37, 0, 0, 2);
    goto LAB151;

LAB152:    *((unsigned int *)t11) = 1;
    goto LAB155;

LAB157:    t21 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t7);
    *((unsigned int *)t11) = (t21 | t25);
    t26 = *((unsigned int *)t5);
    t27 = *((unsigned int *)t7);
    *((unsigned int *)t5) = (t26 | t27);
    goto LAB156;

LAB158:    *((unsigned int *)t24) = 1;
    goto LAB161;

LAB160:    t10 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB161;

LAB162:    t18 = (t0 + 2072U);
    t22 = *((char **)t18);
    memset(t31, 0, 8);
    t18 = (t22 + 4);
    t43 = *((unsigned int *)t18);
    t44 = (~(t43));
    t47 = *((unsigned int *)t22);
    t48 = (t47 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB165;

LAB166:    if (*((unsigned int *)t18) != 0)
        goto LAB167;

LAB168:    t50 = *((unsigned int *)t24);
    t51 = *((unsigned int *)t31);
    t52 = (t50 & t51);
    *((unsigned int *)t71) = t52;
    t30 = (t24 + 4);
    t35 = (t31 + 4);
    t36 = (t71 + 4);
    t53 = *((unsigned int *)t30);
    t54 = *((unsigned int *)t35);
    t57 = (t53 | t54);
    *((unsigned int *)t36) = t57;
    t58 = *((unsigned int *)t36);
    t59 = (t58 != 0);
    if (t59 == 1)
        goto LAB169;

LAB170:
LAB171:    goto LAB164;

LAB165:    *((unsigned int *)t31) = 1;
    goto LAB168;

LAB167:    t23 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB168;

LAB169:    t60 = *((unsigned int *)t71);
    t61 = *((unsigned int *)t36);
    *((unsigned int *)t71) = (t60 | t61);
    t37 = (t24 + 4);
    t45 = (t31 + 4);
    t62 = *((unsigned int *)t24);
    t64 = (~(t62));
    t65 = *((unsigned int *)t37);
    t66 = (~(t65));
    t67 = *((unsigned int *)t31);
    t68 = (~(t67));
    t72 = *((unsigned int *)t45);
    t73 = (~(t72));
    t8 = (t64 & t66);
    t55 = (t68 & t73);
    t74 = (~(t8));
    t75 = (~(t55));
    t76 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t76 & t74);
    t77 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t77 & t75);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 & t74);
    t79 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t79 & t75);
    goto LAB171;

LAB172:    xsi_set_current_line(42, ng0);
    t63 = ((char*)((ng2)));
    t69 = (t0 + 2792);
    xsi_vlogvar_assign_value(t69, t63, 0, 0, 2);
    goto LAB174;

}

static void Always_45_2(char *t0)
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
    int t11;
    int t12;

LAB0:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4560);
    *((int *)t2) = 1;
    t3 = (t0 + 4240);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2632);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB5:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB6;

LAB7:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng4)));
    t11 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 2);
    if (t11 == 1)
        goto LAB10;

LAB11:    t4 = ((char*)((ng5)));
    t12 = xsi_vlog_unsigned_case_compare(t6, 2, t4, 2);
    if (t12 == 1)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(48, ng0);
    t9 = ((char*)((ng6)));
    t10 = (t0 + 2472);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 1);
    goto LAB14;

LAB8:    goto LAB6;

LAB10:    goto LAB6;

LAB12:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng1)));
    t7 = (t0 + 2472);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 1);
    goto LAB14;

}


extern void work_m_00000000000416029555_3981604680_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_37_1,(void *)Always_45_2};
	xsi_register_didat("work_m_00000000000416029555_3981604680", "isim/test_prt2_isim_beh.exe.sim/work/m_00000000000416029555_3981604680.didat");
	xsi_register_executes(pe);
}
