// MainMenuRaidRatingPanel$$KFBJGJHEIHC @ RVA 0x32BC740

void MainMenuRaidRatingPanel__KFBJGJHEIHC
               (MainMenuRaidRatingPanel_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  SFButton_o *pSVar3;
  ClanLogoImage_o **ppCVar4;
  ClanLogoImage_o *pCVar5;
  
  if ((DAT_0456749f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456749f = 1;
  }
  pSVar3 = (__this->fields)._btnClan;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  ppCVar4 = &(__this->fields).FDOKACGMDHB;
  pCVar5 = *ppCVar4;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar3 = (__this->fields)._btnClan;
    if (pSVar3 != (SFButton_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar2,(MethodInfo *)0x0);
      pSVar3 = (__this->fields)._btnClan;
      if (pSVar3 != (SFButton_o *)0x0) {
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pSVar3,(MethodInfo *)0x0);
        pCVar5 = KFCFGKEHPNK__LEIGOOFFFPE(pUVar2,PBNPKBJKFHE,false,1.3,(MethodInfo *)0x0);
        *ppCVar4 = pCVar5;
        thunk_FUN_01c20e04(ppCVar4,pCVar5);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar4,PBNPKBJKFHE,false,1.3,(MethodInfo *)0x0);
  return;
}

