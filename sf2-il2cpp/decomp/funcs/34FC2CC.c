// Nekki.SF2.GUI.Common.Hints.HintGroup$$ADOIJKNGHON @ RVA 0x34FC2CC

void Nekki_SF2_GUI_Common_Hints_HintGroup__ADOIJKNGHON
               (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568828 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MIBHAJBEMIK>_Clear__);
    DAT_04568828 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_T__o *)(__this->fields).KDGCEFEPJHP;
  if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
    (__this_00->fields)._size = 0;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    System_Collections_Generic_List<Int32Enum>__AddRange
              (__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)(__this->fields)._DefaultHintIDs,
               Method_System_Collections_Generic_List<MIBHAJBEMIK>_AddRange__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(0,method);
}

