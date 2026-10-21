// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$AIBHLHDCMIO @ RVA 0x3028360

bool Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__AIBHLHDCMIO
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,MethodInfo *method)

{
  NFFDIPBFJHP_o *pNVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *message;
  MethodInfo *extraout_x1;
  GLPEFEEGCPM_o *pGVar2;
  bool bVar3;
  
  if ((DAT_04565c99 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_8);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1666);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04565c99 = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
  if (pNVar1 == (NFFDIPBFJHP_o *)0x0) {
LAB_031284cc:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((pNVar1->fields).NEACDFLBNFO != (GLPEFEEGCPM_o *)0x0) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = HJPEKDOPBHN__FPALMCILCOD((MethodInfo *)0x0);
    if ((pNVar1 == (NFFDIPBFJHP_o *)0x0) ||
       (pGVar2 = (pNVar1->fields).NEACDFLBNFO, pGVar2 == (GLPEFEEGCPM_o *)0x0)) goto LAB_031284cc;
    if ((pGVar2->fields).PBBGNHKFEPG != (FADHMEJJCPO_o *)0x0) {
      bVar3 = false;
      if ((__this->fields).NCJONEIOCML != (BDMABHJEEGD_o *)0x0) {
        return false;
      }
      goto LAB_0312842c;
    }
  }
  bVar3 = true;
LAB_0312842c:
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1666,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x80);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy128___field_8,(MethodInfo *)0x0);
  message = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
  return bVar3;
}

