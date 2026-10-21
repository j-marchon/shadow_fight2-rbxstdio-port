// Nekki.SF2.GUI.Map.ContentTourChallBoss$$HKCNMPNMAJA @ RVA 0x3290DE8

void Nekki_SF2_GUI_Map_ContentTourChallBoss__HKCNMPNMAJA
               (Nekki_SF2_GUI_Map_ContentTourChallBoss_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_24;
  
  if ((DAT_0456731c & 1) == 0) {
    FUN_01bab630(&PMFNDKKBEKN_TypeInfo);
    FUN_01bab630(&StringLiteral_15850);
    DAT_0456731c = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    if ((iVar2 == 9) ||
       (iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0), iVar2 == 10)) {
      bVar1 = (PMFNDKKBEKN_TypeInfo->_2).naturalAligment;
      if (((BANHBMINMMP->klass->_2).naturalAligment < bVar1) ||
         ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)PMFNDKKBEKN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(BANHBMINMMP);
      }
      pNVar4 = (__this->fields)._replaysLabel;
      local_24 = PMFNDKKBEKN__EBDBABMAIAM((PMFNDKKBEKN_o *)BANHBMINMMP,(MethodInfo *)0x0);
      pSVar3 = System_Int32__ToString((int32_t)&local_24,(MethodInfo *)0x0);
      pSVar3 = System_String__Format(StringLiteral_15850,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar4,pSVar3,(MethodInfo *)0x0);
        pNVar4 = (__this->fields)._replaysLabel;
        if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
           (__this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
           __this_00 != (UnityEngine_GameObject_o *)0x0)) {
          value = true;
          goto LAB_03390f0c;
        }
      }
    }
    else {
      pNVar4 = (__this->fields)._replaysLabel;
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        value = false;
LAB_03390f0c:
        UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

