// Nekki.SF2.GUI.TextPic.AIBKGOEIOLC$$HMMKHGFOMNP @ RVA 0x30B6C1C

void Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__HMMKHGFOMNP
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_IHIFNKAMALG__o *pSVar3;
  System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *pSVar4;
  
  if ((DAT_04566226 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Application_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<IHIFNKAMALG>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_OFKFGMDCIJP>_Clear__);
    DAT_04566226 = 1;
    method = extraout_x1;
  }
  if ((UnityEngine_Application_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Application_TypeInfo,method);
  }
  bVar2 = UnityEngine_Application__get_isEditor((MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pSVar3 = (__this->fields)._CODCAPKKACN_k__BackingField;
  if (pSVar3 != (System_Collections_Generic_List_IHIFNKAMALG__o *)0x0) {
    iVar1 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    (pSVar3->fields)._version = (pSVar3->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._NNFPEOCIPFE_k__BackingField;
    if (pSVar4 != (System_Collections_Generic_List_TextPic_OFKFGMDCIJP__o *)0x0) {
      iVar1 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (iVar1 < 1) {
        return;
      }
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

