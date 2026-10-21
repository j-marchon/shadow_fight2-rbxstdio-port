// Nekki.SF2.GUI.Common.TwoAxisControlHandler$$JKGFHBLOFKM @ RVA 0x33B0D34

bool Nekki_SF2_GUI_Common_TwoAxisControlHandler__JKGFHBLOFKM
               (Nekki_SF2_GUI_Common_TwoAxisControlHandler_o *__this,int32_t AAJGEHHPMGH,
               MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_List_T__o *__this_00;
  int32_t item;
  
                    /* try { // try from 034b0d38 to 035b0d5f has its CatchHandler @ 034b1f18 */
  if ((DAT_04567d49 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CPABDNGPCHO>_Contains__);
    DAT_04567d49 = 1;
  }
  if (5 < (uint)AAJGEHHPMGH) {
    return false;
  }
  uVar1 = 1 << (ulong)(AAJGEHHPMGH & 0x1f);
  if ((uVar1 & 3) == 0) {
    if ((uVar1 & 0xc) == 0) {
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._Controls;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_034b0dd8;
      item = 2;
    }
    else {
      __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._Controls;
      if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
LAB_034b0dd8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      item = 1;
    }
  }
  else {
                    /* try { // try from 034b0d94 to 035b0dbf has its CatchHandler @ 034b1e54 */
    __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields)._Controls;
    if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto LAB_034b0dd8;
    item = 0;
  }
  bVar2 = System_Collections_Generic_List<Int32Enum>__Contains
                    (__this_00,item,Method_System_Collections_Generic_List<CPABDNGPCHO>_Contains__);
  return bVar2;
}

