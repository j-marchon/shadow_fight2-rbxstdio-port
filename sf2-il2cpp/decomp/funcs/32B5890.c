// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$EOOPHGBLFMI @ RVA 0x32B5890

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__EOOPHGBLFMI
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,
               DLOALGNBPNL_o *PIMBGGLBFAA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_0456744d & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<CBPENMDOJDB>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456744d = 1;
  }
  if ((__this->fields)._BOGAKJOFOEK_k__BackingField == false) {
    pNVar2 = (__this->fields)._tableClans;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields)._tableClans;
      if (pNVar2 == (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *)0x0) goto LAB_033b59a0;
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__SetClansInfo
                (pNVar2,PIMBGGLBFAA,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields)._resultLabel;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar3 = (__this->fields)._resultLabel;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         PIMBGGLBFAA != (DLOALGNBPNL_o *)0x0)) {
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_IList_T__o *)
                           (PIMBGGLBFAA->fields).EHBNKDHKJNI,
                           Method_DJNBJHPDKDP_OBECCOPBADO<CBPENMDOJDB>__);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_00,bVar1,(MethodInfo *)0x0);
          return;
        }
      }
LAB_033b59a0:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* try { // try from 033b5998 to 034b5b17 has its CatchHandler @ 033b5998
                       catch() { ... } // from try @ 033b5998 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5b50 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5c64 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5ca4 with catch @ 033b5998
                       catch() { ... } // from try @ 033b5d8c with catch @ 033b5998 */
  return;
}

