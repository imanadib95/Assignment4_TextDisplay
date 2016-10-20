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
    work_m_00000000003675022148_4094267476_init();
    xilinxcorelib_ver_m_00000000001358910285_1933459722_init();
    xilinxcorelib_ver_m_00000000001687936702_3412580636_init();
    xilinxcorelib_ver_m_00000000000277421008_1170360980_init();
    xilinxcorelib_ver_m_00000000001603977570_1269247100_init();
    work_m_00000000003289761879_0450250084_init();
    work_m_00000000001106627736_2685491932_init();
    work_m_00000000001891001969_2342248591_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001891001969_2342248591");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
