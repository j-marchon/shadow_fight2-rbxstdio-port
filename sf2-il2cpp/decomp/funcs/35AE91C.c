// Nekki.SF2.GUI.Dialogs.Raids.RaidViewCell$$CJFHNCGHAPF @ RVA 0x35AE91C

void Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell__CJFHNCGHAPF
               (Nekki_SF2_GUI_Dialogs_Raids_RaidViewCell_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               MethodInfo *method)

{
  ClanLogoImage_o **ppCVar1;
  bool bVar2;
  ClanLogoImage_o *pCVar3;
  
  if ((DAT_04568e70 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568e70 = 1;
  }
  pCVar3 = (__this->fields).FDOKACGMDHB;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  ppCVar1 = &(__this->fields).FDOKACGMDHB;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    UnityEngine_TransformExtensions__DeleteAllChildrenObjects
              ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,(MethodInfo *)0x0);
    pCVar3 = KFCFGKEHPNK__LEIGOOFFFPE
                       ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,PBNPKBJKFHE,
                        false,1.0,(MethodInfo *)0x0);
    (__this->fields).FDOKACGMDHB = pCVar3;
    thunk_FUN_01c20e04(ppCVar1,pCVar3);
    return;
  }
  KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar1,PBNPKBJKFHE,false,1.0,(MethodInfo *)0x0);
  return;
}

