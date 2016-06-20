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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002969661313_2661861443_init();
    work_m_00000000003786448449_2487410970_init();
    work_m_00000000000416029555_3981604680_init();
    work_m_00000000000960935896_0921641935_init();
    work_m_00000000001437748857_3305719485_init();
    work_m_00000000001979732902_3410735667_init();
    work_m_00000000003061089122_2943448091_init();
    work_m_00000000000575329215_3512313590_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000575329215_3512313590");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
