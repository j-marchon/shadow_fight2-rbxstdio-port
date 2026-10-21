// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanWidget$$MHCAHALNKHG @ RVA 0x32B5BE4

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MHCAHALNKHG
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_o *__this,MethodInfo *method)

{
  bool bVar1;
  EEOMEMBBGNA_o *__this_00;
  System_Action_KEFHDOHHHML__o *LPAJOAAAFGH;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar2;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_04567450 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget_DJHCNNLCEMN__);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567450 = 1;
    method = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__FNMNFEGFOEK(__this,method);
  pNVar2 = (__this->fields)._editBoxForClanName;
  if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((pNVar2->fields).super.m_Text,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 033b5c60 to 034b5c63 has its CatchHandler @ 033b5c70 */
                    /* try { // try from 033b5c64 to 034b5c8b has its CatchHandler @ 033b5998 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b5b40 with catch @ 033b5c6c
                        */
      Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MPNLJKCHCKP(__this,3,in_x2);
      return;
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b5c60 with catch @ 033b5c70
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033b5b18 with catch @ 033b5c74
                        */
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 033b5c8c to 034b5ca3 has its CatchHandler @ 033b5d84 */
    __this_00 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
    pNVar2 = (__this->fields)._editBoxForClanName;
    if (pNVar2 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
      KGLJICLJHEL = (pNVar2->fields).super.m_Text;
                    /* try { // try from 033b5ca4 to 034b5d73 has its CatchHandler @ 033b5998 */
      LPAJOAAAFGH = (System_Action_KEFHDOHHHML__o *)
                    thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (__this_00 != (EEOMEMBBGNA_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        EEOMEMBBGNA__NFLCHIPCOMI(__this_00,KGLJICLJHEL,false,LPAJOAAAFGH,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanWidget__MIGKOMENMKP(__this,1,method_00);
        pNVar3 = (__this->fields)._resultLabel;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        pNVar3 = (__this->fields)._resultLabel;
        if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

