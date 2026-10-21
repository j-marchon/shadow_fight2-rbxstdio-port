// IDDIABHBDEE$$EOGKLNAMBEK @ RVA 0x3384050

void IDDIABHBDEE__EOGKLNAMBEK
               (IDDIABHBDEE_o *__this,System_Xml_XmlNode_o *GGDPPDFOEOH,MethodInfo *method)

{
  bool bVar1;
  DOCLKKFHECI_T__o *__this_00;
  System_String_o *pSVar2;
  System_String_o *JNIKAMMPCPE;
  System_Collections_Generic_List_string__o *__this_01;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  MethodInfo *in_x3;
  KMBNFNCDDBP_o *pKVar3;
  System_String_o *JNIKAMMPCPE_00;
  
  if ((DAT_04567ba3 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_393);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_394);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_DOCLKKFHECI<BCGLDKLKKDA>_DGLJCGNHLIG__);
    FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
    FUN_01bab630(&FBEOLJNHGNE_TypeInfo);
    FUN_01bab630(&IDDIABHBDEE_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Contains__);
    DAT_04567ba3 = 1;
  }
  __this_00 = (DOCLKKFHECI_T__o *)(__this->fields)._MOAJPECDFIF_k__BackingField;
  if (__this_00 != (DOCLKKFHECI_T__o *)0x0) {
    DOCLKKFHECI<object>__DGLJCGNHLIG(__this_00,Method_DOCLKKFHECI<BCGLDKLKKDA>_DGLJCGNHLIG__);
    if (GGDPPDFOEOH == (System_Xml_XmlNode_o *)0x0) {
      return;
    }
    if ((FBEOLJNHGNE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar2 = FBEOLJNHGNE__FHHGLEHGBKC(10,(MethodInfo *)0x0);
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(EOAOCPLIKOI_TypeInfo);
    }
    if (DAT_045611dc == '\0') {
      FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
      DAT_045611dc = '\x01';
    }
    if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pKVar3 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
    if (pKVar3 != (KMBNFNCDDBP_o *)0x0) {
      JNIKAMMPCPE_00 = (pKVar3->fields).AHAKHHLCPAB;
      if (DAT_045611dc == '\0') {
        FUN_01bab630(&EOAOCPLIKOI_TypeInfo);
        DAT_045611dc = '\x01';
      }
      if ((EOAOCPLIKOI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pKVar3 = EOAOCPLIKOI_TypeInfo->static_fields->OAJGOBAMPLN;
      if (pKVar3 != (KMBNFNCDDBP_o *)0x0) {
        JNIKAMMPCPE = KMBNFNCDDBP__MLHLAKMLJNI(pKVar3,(MethodInfo *)0x0);
        if ((IDDIABHBDEE_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(IDDIABHBDEE_TypeInfo);
        }
        __this_01 = IDDIABHBDEE_TypeInfo->static_fields->DIOJHDKIGLE;
        if (__this_01 != (System_Collections_Generic_List_string__o *)0x0) {
          bVar1 = System_Collections_Generic_List<object>__Contains
                            ((System_Collections_Generic_List_object__o *)__this_01,
                             (Il2CppObject *)JNIKAMMPCPE,
                             Method_System_Collections_Generic_List<string>_Contains__);
          if (!bVar1) {
            IDDIABHBDEE__IBLOMCIBPKA(__this,GGDPPDFOEOH,pSVar2,in_x3);
          }
          bVar1 = IDDIABHBDEE__IBLOMCIBPKA(__this,GGDPPDFOEOH,JNIKAMMPCPE_00,in_x3);
          if (bVar1) {
            return;
          }
          bVar1 = IDDIABHBDEE__IBLOMCIBPKA(__this,GGDPPDFOEOH,JNIKAMMPCPE,in_x3);
          if (bVar1) {
            return;
          }
          MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)MOPNMEHIMFJ,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_393,
                     (MethodInfo *)0x0);
          LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                    ((System_Array_o *)LFINFBNOLFG,
                     Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_394,
                     (MethodInfo *)0x0);
          pSVar2 = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
          IDDIABHBDEE__IBLOMCIBPKA(__this,GGDPPDFOEOH,pSVar2,in_x3);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

