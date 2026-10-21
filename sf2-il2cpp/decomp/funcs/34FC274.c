// Nekki.SF2.GUI.Common.Hints.HintGroup$$ContainsHintID @ RVA 0x34FC274

bool Nekki_SF2_GUI_Common_Hints_HintGroup__ContainsHintID
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,int32_t OHLKNCPBCBL,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_T__o *__this_00;
  
  if ((DAT_04568827 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
    DAT_04568827 = 1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
    bVar1 = System_Collections_Generic_List<Int32Enum>__Contains
                      (__this_00,OHLKNCPBCBL,
                       Method_System_Collections_Generic_List<MIBHAJBEMIK>_Contains__);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

