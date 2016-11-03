
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name VGA_w_Dispatch2 -dir "C:/Users/Kara/Documents/GitHub/Assignment4_TextDisplay/planAhead_run_4" -part xc6slx16csg324-3
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/Kara/Documents/GitHub/Assignment4_TextDisplay/Top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/Kara/Documents/GitHub/Assignment4_TextDisplay} {ipcore_dir} }
add_files [list {ipcore_dir/ram.ncf}] -fileset [get_property constrset [current_run]]
set_property target_constrs_file "Top.ucf" [current_fileset -constrset]
add_files [list {Top.ucf}] -fileset [get_property constrset [current_run]]
link_design
