// Nekki.SF2.GUI.Common.PaymentUI$$HJAIGFGKNBM @ RVA 0x334B568

void Nekki_SF2_GUI_Common_PaymentUI__HJAIGFGKNBM
               (Nekki_SF2_GUI_Common_PaymentUI_o *__this,System_String_o *KKDELPFMDFM,
               MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *NONPLOOOOAG;
  Nekki_SF2_GUI_Common_PaymentUI_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_045679fa & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1607);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1608);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_045679fa = 1;
  }
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1607,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_1608,(MethodInfo *)0x0);
  NONPLOOOOAG = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(OCLJMFBDKOA_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  OCLJMFBDKOA__HKGFEJGHMGM(NONPLOOOOAG,StringLiteral_1,(MethodInfo *)0x0);
  Nekki_SF2_GUI_Common_PaymentUI__BHEIENCJENJ(__this_00,false,method_00);
  return;
}

