
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Assignment4_TextDisplay -dir "C:/Users/imana/Documents/SCHOOL/ECE3710/Assignment4_TextDisplay/planAhead_run_1" -part xc6slx16csg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "TextDisplay_Top.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/GlyphTable.ngc}]
set hdlfile [add_files [list {ipcore_dir/GlyphTable.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {GlyphPixelExtractor.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {BitFromGlyphWord.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ASCIItoGlyphWord.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {VGA_SignalGen.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ASCIItoPixelOnOff.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {TextDisplay_Top.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top TextDisplay_Top $srcset
add_files [list {TextDisplay_Top.ucf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/GlyphTable.ncf}] -fileset [get_property constrset [current_run]]
add_files [list {ipcore_dir/TextAreaMemory.ncf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx16csg324-3
