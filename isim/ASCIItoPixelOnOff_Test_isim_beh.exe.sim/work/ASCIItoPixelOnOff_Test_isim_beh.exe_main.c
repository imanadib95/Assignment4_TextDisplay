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
    work_m_00000000003429337837_1998437584_init();
    xilinxcorelib_ver_m_00000000001358910285_2850622551_init();
    xilinxcorelib_ver_m_00000000001687936702_4089291157_init();
    xilinxcorelib_ver_m_00000000001080096809_1316075304_init();
    xilinxcorelib_ver_m_00000000001603977570_1152840882_init();
    work_m_00000000003289761879_2601090648_init();
    work_m_00000000003479724211_2573735814_init();
    work_m_00000000002573224171_0519718218_init();
    work_m_00000000001143143964_1017430132_init();
    work_m_00000000002613013270_1359891518_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002613013270_1359891518");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
