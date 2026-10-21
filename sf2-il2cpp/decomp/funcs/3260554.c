// AAPGCAPGBLG$$EEKPOHKAFCO @ RVA 0x3260554

void AAPGCAPGBLG__EEKPOHKAFCO(AAPGCAPGBLG_o *__this,CCLKPGBIBOP_o *KEFILECBPMF,MethodInfo *method)

{
  bool bVar1;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456719c & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_591);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_592);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    __this = (AAPGCAPGBLG_o *)FUN_01bab630(&MGENAMAJALB_TypeInfo);
    DAT_0456719c = 1;
  }
  if (KEFILECBPMF != (CCLKPGBIBOP_o *)0x0) {
    if ((KEFILECBPMF->fields)._BNIHGHLPOHB_k__BackingField == false) {
      if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar2 = MGENAMAJALB__JKLFLNNFEMP((MethodInfo *)0x0);
      MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)MOPNMEHIMFJ,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_591,(MethodInfo *)0x0
                );
      LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)LFINFBNOLFG,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_592,(MethodInfo *)0x0
                );
      pSVar3 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat
                         (pSVar2,pSVar3,(KEFILECBPMF->fields)._COIPKAKHDFP_k__BackingField,
                          (MethodInfo *)0x0);
      bVar1 = NEHNBJKKABI__HALDCNGHJCO(pSVar2,(MethodInfo *)0x0);
    }
    else {
      pSVar2 = (KEFILECBPMF->fields)._COIPKAKHDFP_k__BackingField;
      pSVar3 = (KEFILECBPMF->fields)._JKGLJFGKPNN_k__BackingField;
      if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = CLFCKIFNGHA__KPOPGHNAGAE(pSVar2,pSVar3,(MethodInfo *)0x0);
    }
    (KEFILECBPMF->fields)._PCFJKILMDCE_k__BackingField = bVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

