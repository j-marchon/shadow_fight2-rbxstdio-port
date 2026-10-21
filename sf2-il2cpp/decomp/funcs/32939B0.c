// Nekki.SF2.GUI.Fight.StylePanel$$ClearStyleIncrease @ RVA 0x32939B0

void Nekki_SF2_GUI_Fight_StylePanel__ClearStyleIncrease
               (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567349 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_Clear__);
                    /* try { // try from 033939d8 to 034939e7 has its CatchHandler @ 03393a64 */
    DAT_04567349 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).IFAJMBGJEIN;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* try { // try from 033939ec to 034939f7 has its CatchHandler @ 03393a58 */
    System_Collections_Generic_Dictionary<object,_int>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_int>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033939fc to 03493a07 has its CatchHandler @ 03393a54 */
  FUN_01bab8c8(0,method);
}

