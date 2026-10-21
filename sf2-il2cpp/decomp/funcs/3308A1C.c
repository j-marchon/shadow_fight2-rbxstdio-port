// Nekki.SF2.GUI.Map.ContentBossesFinal$$HKCNMPNMAJA @ RVA 0x3308A1C

void Nekki_SF2_GUI_Map_ContentBossesFinal__HKCNMPNMAJA
               (Nekki_SF2_GUI_Map_ContentBossesFinal_o *__this,OOMHDDBCBJP_o *BANHBMINMMP,
               MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  bool value;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  int32_t local_24;
  
  if ((DAT_04567774 & 1) == 0) {
    FUN_01bab630(&PMFNDKKBEKN_TypeInfo);
    FUN_01bab630(&StringLiteral_15850);
    DAT_04567774 = 1;
  }
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    iVar2 = OOMHDDBCBJP__NHGGBEACKBD(BANHBMINMMP,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._replaysLabel;
    if (iVar2 == 0x13) {
                    /* try { // try from 03408a80 to 03508bab has its CatchHandler @ 03408a80
                       catch() { ... } // from try @ 03408a80 with catch @ 03408a80
                       catch() { ... } // from try @ 03408bf0 with catch @ 03408a80
                       catch() { ... } // from try @ 03408c0c with catch @ 03408a80
                       catch() { ... } // from try @ 03408c30 with catch @ 03408a80
                       catch() { ... } // from try @ 03408cf8 with catch @ 03408a80 */
      bVar1 = (PMFNDKKBEKN_TypeInfo->_2).naturalAligment;
      if (((BANHBMINMMP->klass->_2).naturalAligment < bVar1) ||
         ((BANHBMINMMP->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)PMFNDKKBEKN_TypeInfo)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(BANHBMINMMP);
      }
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
          goto LAB_03408b2c;
        }
      }
    }
    else if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
            (__this_00 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
            __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      value = false;
LAB_03408b2c:
      UnityEngine_GameObject__SetActive(__this_00,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

