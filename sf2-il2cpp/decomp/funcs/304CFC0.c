// Nekki.SF2.GUI.Dialogs.Raids.RaidTopClanCell$$IDCALAONCCE @ RVA 0x304CFC0

void Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDCALAONCCE
               (Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell_o *__this,bool CJNHFNHJHPE,
               MethodInfo *method)

{
  ClanLogoImage_o **ppCVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *root;
  MethodInfo *method_00;
  CBPENMDOJDB_o *pCVar3;
  ClanLogoImage_o *pCVar4;
  
  if ((DAT_04565e1a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565e1a = 1;
  }
  if (!CJNHFNHJHPE) {
    return;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    bVar2 = Nekki_SF2_GUI_Dialogs_Raids_RaidTopClanCell__IDNHDAOBNAM(__this,method_00);
    if (!bVar2) {
      return;
    }
    pCVar4 = (__this->fields).FDOKACGMDHB;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    ppCVar1 = &(__this->fields).FDOKACGMDHB;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar2) {
      __this_01 = (__this->fields)._clanLogoMountRoot;
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        root = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects(root,(MethodInfo *)0x0);
        pCVar3 = (__this->fields).FBILHKCKHEJ;
        if (pCVar3 != (CBPENMDOJDB_o *)0x0) {
          pCVar4 = KFCFGKEHPNK__LEIGOOFFFPE
                             ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,
                              (pCVar3->fields).JAAACMPGMKJ,0,1.0,(MethodInfo *)0x0);
          (__this->fields).FDOKACGMDHB = pCVar4;
          thunk_FUN_01c20e04(ppCVar1,pCVar4);
          return;
        }
      }
    }
    else {
      pCVar3 = (__this->fields).FBILHKCKHEJ;
      if (pCVar3 != (CBPENMDOJDB_o *)0x0) {
        KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar1,(pCVar3->fields).JAAACMPGMKJ,0,1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

