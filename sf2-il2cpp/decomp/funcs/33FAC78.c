// Nekki.SF2.GUI.Dialogs.Raids.Clans.MembersClanView$$EDGHMNHEFKD @ RVA 0x33FAC78

void Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView__EDGHMNHEFKD
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_MembersClanView_o *__this,
               Il2CppObject *IMMNELPBGIF,MethodInfo *method)

{
  int iVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *value;
  LKJJCAEOJBG_o *__this_00;
  EEOMEMBBGNA_o *__this_01;
  Il2CppObject *extraout_x1;
  IDGOGBNEGAM_o **ppIVar3;
  int local_34;
  
                    /* try { // try from 034fac78 to 035fac83 has its CatchHandler @ 034fa998 */
                    /* try { // try from 034fac84 to 035fac8b has its CatchHandler @ 034fac8c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034fac50 with catch @ 034fac8c
                       catch(type#2 @ 00000000) { ... } // from try @ 034fac84 with catch @ 034fac8c
                        */
  if ((DAT_04567fb3 & 1) == 0) {
    FUN_01bab630(&System_Enum_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&KCFAKHLDKJM_var);
    FUN_01bab630(&KCFAKHLDKJM_TypeInfo);
    FUN_01bab630(&LKJJCAEOJBG_TypeInfo);
    FUN_01bab630(&System_Type_TypeInfo);
    DAT_04567fb3 = 1;
    IMMNELPBGIF = extraout_x1;
  }
  handle = KCFAKHLDKJM_var;
  ppIVar3 = &(__this->fields).FANGHLLLOLB;
  if (*ppIVar3 != (IDGOGBNEGAM_o *)0x0) {
    iVar1 = ((*ppIVar3)->fields).LLNMDPPIGLF + 1;
    if ((System_Type_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Type_TypeInfo,IMMNELPBGIF);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_34 = iVar1;
    value = (Il2CppObject *)thunk_FUN_01bda448(KCFAKHLDKJM_TypeInfo,&local_34);
    if ((System_Enum_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Enum_TypeInfo);
    }
    bVar2 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (LKJJCAEOJBG_o *)thunk_FUN_01bda818(LKJJCAEOJBG_TypeInfo);
      LKJJCAEOJBG___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 == (LKJJCAEOJBG_o *)0x0) {
LAB_034fae04:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (__this_00->fields).IGBAAAHPLAA = iVar1;
      if (*ppIVar3 == (IDGOGBNEGAM_o *)0x0) goto LAB_034fae04;
      (__this_00->fields).MKGNDFBBANC = ((*ppIVar3)->fields).HLFBMBHOPMI;
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      __this_01 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
      if (__this_01 == (EEOMEMBBGNA_o *)0x0) goto LAB_034fae04;
      EEOMEMBBGNA__HHJEKOPMOKB
                (__this_01,__this_00,(System_Action_KEFHDOHHHML__o *)0x0,(MethodInfo *)0x0);
    }
    *ppIVar3 = (IDGOGBNEGAM_o *)0x0;
    thunk_FUN_01c20e04(ppIVar3,0);
  }
  return;
}

