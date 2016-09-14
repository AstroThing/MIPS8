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
static const char *ng0 = "C:/Users/nimer/Documents/GitHub/MIPS8/FPGA/ControlUnit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {16U, 0U};
static unsigned int ng20[] = {17U, 0U};



static void Always_40_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;

LAB0:    t1 = (t0 + 3896U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4092);
    *((int *)t2) = 1;
    t3 = (t0 + 3924);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2452);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2636);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2820);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2912);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3004);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3096);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3188);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3280);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3372);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2040U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:
LAB41:    goto LAB2;

LAB7:    xsi_set_current_line(58, ng0);

LAB42:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB9:    xsi_set_current_line(65, ng0);

LAB43:    xsi_set_current_line(66, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB11:    xsi_set_current_line(72, ng0);

LAB44:    xsi_set_current_line(73, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB13:    xsi_set_current_line(79, ng0);

LAB45:    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB15:    xsi_set_current_line(86, ng0);

LAB46:    xsi_set_current_line(87, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB17:    xsi_set_current_line(93, ng0);

LAB47:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2360);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB19:    xsi_set_current_line(99, ng0);

LAB48:    xsi_set_current_line(100, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2452);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB21:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2912);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB23:    xsi_set_current_line(108, ng0);

LAB49:    xsi_set_current_line(109, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2544);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB41;

LAB25:    xsi_set_current_line(114, ng0);

LAB50:    xsi_set_current_line(115, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2636);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB27:    xsi_set_current_line(122, ng0);

LAB51:    xsi_set_current_line(123, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2636);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(125, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2820);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(126, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB29:    xsi_set_current_line(130, ng0);

LAB52:    xsi_set_current_line(131, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2820);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB41;

LAB31:    xsi_set_current_line(136, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3004);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB33:    xsi_set_current_line(139, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3096);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB35:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3280);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB37:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3188);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

LAB39:    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3372);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB41;

}


extern void work_m_00000000001313945617_1938225339_init()
{
	static char *pe[] = {(void *)Always_40_0};
	xsi_register_didat("work_m_00000000001313945617_1938225339", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000001313945617_1938225339.didat");
	xsi_register_executes(pe);
}
