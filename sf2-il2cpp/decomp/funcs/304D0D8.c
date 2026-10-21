// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$IDNHDAOBNAM @ RVA 0x304D0D8

bool Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDNHDAOBNAM
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  CBPENMDOJDB_o *pCVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04565e1c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e1c = 1;
    method = extraout_x1;
  }
  if ((__this->fields).FBILHKCKHEJ == (CBPENMDOJDB_o *)0x0) {
    bVar1 = false;
  }
  else {
    pCVar3 = (__this->fields).FDOKACGMDHB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (!bVar1) {
      pCVar2 = (__this->fields).FBILHKCKHEJ;
      if ((pCVar2 != (CBPENMDOJDB_o *)0x0) &&
         (pCVar3 = (__this->fields).FDOKACGMDHB, pCVar3 != (ClanLogoImage_o *)0x0)) {
        bVar1 = ClanLogoImage__NeedUpdate(pCVar3,(pCVar2->fields).JAAACMPGMKJ,0,(MethodInfo *)0x0);
        return bVar1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = true;
  }
  return bVar1;
}

