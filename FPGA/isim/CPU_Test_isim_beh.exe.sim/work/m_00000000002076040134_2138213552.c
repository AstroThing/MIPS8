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
static const char *ng0 = "C:/Users/nimer/Documents/GitHub/MIPS8/FPGA/InstructionMemory.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {18954U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {19970U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {18434U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {25088U, 0U};
static unsigned int ng9[] = {4U, 0U};
static unsigned int ng10[] = {26784U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {18432U, 0U};
static unsigned int ng13[] = {6U, 0U};
static unsigned int ng14[] = {7U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {19456U, 0U};
static unsigned int ng17[] = {9U, 0U};
static unsigned int ng18[] = {16896U, 0U};
static unsigned int ng19[] = {10U, 0U};
static unsigned int ng20[] = {11U, 0U};
static unsigned int ng21[] = {28808U, 0U};
static unsigned int ng22[] = {12U, 0U};
static unsigned int ng23[] = {14080U, 0U};
static unsigned int ng24[] = {13U, 0U};
static unsigned int ng25[] = {14U, 0U};
static unsigned int ng26[] = {14848U, 0U};
static unsigned int ng27[] = {15U, 0U};
static unsigned int ng28[] = {23042U, 0U};
static unsigned int ng29[] = {16U, 0U};
static unsigned int ng30[] = {34832U, 0U};
static unsigned int ng31[] = {17U, 0U};
static unsigned int ng32[] = {3456U, 0U};
static unsigned int ng33[] = {18U, 0U};
static unsigned int ng34[] = {19U, 0U};
static unsigned int ng35[] = {34896U, 0U};
static unsigned int ng36[] = {20U, 0U};
static unsigned int ng37[] = {63488U, 0U};



static void Always_6_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(6, ng0);
    t2 = (t0 + 1548);
    *((int *)t2) = 1;
    t3 = (t0 + 1380);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(7, ng0);

LAB5:    xsi_set_current_line(8, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 8);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng34)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng36)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 8);
    if (t6 == 1)
        goto LAB47;

LAB48:
LAB50:
LAB49:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB51:    goto LAB2;

LAB7:    xsi_set_current_line(9, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 828);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB51;

LAB9:    xsi_set_current_line(10, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB11:    xsi_set_current_line(11, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB13:    xsi_set_current_line(12, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB15:    xsi_set_current_line(13, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB17:    xsi_set_current_line(14, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB19:    xsi_set_current_line(15, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB21:    xsi_set_current_line(16, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB23:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB25:    xsi_set_current_line(18, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB27:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB29:    xsi_set_current_line(20, ng0);
    t3 = ((char*)((ng21)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB31:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB33:    xsi_set_current_line(22, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB35:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB37:    xsi_set_current_line(24, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB39:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB41:    xsi_set_current_line(26, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB43:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB45:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

LAB47:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 828);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB51;

}


extern void work_m_00000000002076040134_2138213552_init()
{
	static char *pe[] = {(void *)Always_6_0};
	xsi_register_didat("work_m_00000000002076040134_2138213552", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000002076040134_2138213552.didat");
	xsi_register_executes(pe);
}
