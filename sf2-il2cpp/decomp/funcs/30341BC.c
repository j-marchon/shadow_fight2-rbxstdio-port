// Nekki.SF2.GUI.Dialogs.Raids.ChatSFViewController$$FPKAMILHIJJ @ RVA 0x30341BC

System_Collections_Generic_List_ODKDFMHHLIP__o *
Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController__FPKAMILHIJJ
          (Nekki_SF2_GUI_Dialogs_Raids_ChatSFViewController_o *__this,MethodInfo *method)

{
  KPBOJBLLKPJ_o *__this_00;
  System_Collections_Generic_List_ODKDFMHHLIP__o *pSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565d29 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_9641);
    DAT_04565d29 = 1;
    method = extraout_x1;
  }
  __this_00 = (__this->fields).EBBJNLDAMCC;
  if (__this_00 != (KPBOJBLLKPJ_o *)0x0) {
    pSVar1 = KPBOJBLLKPJ__NBKAMBPCHNJ(__this_00,(__this->fields).FIACGKGFFJP,(MethodInfo *)0x0);
    return pSVar1;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo,method);
  }
  UnityEngine_Debug__LogError(StringLiteral_9641,(MethodInfo *)0x0);
  return (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0;
}

