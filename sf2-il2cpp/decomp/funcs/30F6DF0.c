// Nekki.SF2.GUI.Dialogs.NotificationsGame$$CreateClanLogoImage @ RVA 0x30F6DF0

void Nekki_SF2_GUI_Dialogs_NotificationsGame__CreateClanLogoImage
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,
               bool KLJCGIAILPD,float JKOJPEKLBCI,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImageAvatar_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_RectTransform_o *__this_01;
  ClanLogoImage_o **ppCVar3;
  ClanLogoImage_o *pCVar4;
  
  if ((DAT_04566467 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566467 = 1;
  }
  __this_00 = (__this->fields)._image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImageAvatar_o *)0x0) &&
     (pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._clanLogoMountRoot;
    if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
      ppCVar3 = &(__this->fields).FDOKACGMDHB;
      pCVar4 = *ppCVar3;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects
                  ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,(MethodInfo *)0x0)
        ;
        pCVar4 = KFCFGKEHPNK__LEIGOOFFFPE
                           ((UnityEngine_Transform_o *)(__this->fields)._clanLogoMountRoot,
                            PBNPKBJKFHE,KLJCGIAILPD,JKOJPEKLBCI,(MethodInfo *)0x0);
        (__this->fields).FDOKACGMDHB = pCVar4;
        thunk_FUN_01c20e04(ppCVar3,pCVar4);
        return;
      }
      KFCFGKEHPNK__CJFHNCGHAPF(*ppCVar3,PBNPKBJKFHE,KLJCGIAILPD,JKOJPEKLBCI,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

