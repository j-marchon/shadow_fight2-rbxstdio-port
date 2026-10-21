// PDFMAHPKIEI$$HHFEEKFDDIF @ RVA 0x31A55D8

void PDFMAHPKIEI__HHFEEKFDDIF(PDFMAHPKIEI_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *KGLJICLJHEL;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  method_00 = (MethodInfo *)CJNHFNHJHPE;
  if ((DAT_04566b01 & 1) == 0) {
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4063);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4064);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_PDFMAHPKIEI_MLDEHFFGJDP<string>__);
    FUN_01bab630(&string_TypeInfo);
    DAT_04566b01 = 1;
    method_00 = extraout_x1;
  }
  PDFMAHPKIEI__GIENGNEGHPJ(__this,method_00);
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4063,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_4064,(MethodInfo *)0x0);
  KGLJICLJHEL = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  if (CJNHFNHJHPE == (System_String_o *)0x0) {
    CJNHFNHJHPE = string_TypeInfo->static_fields->Empty;
  }
  if (__this != (PDFMAHPKIEI_o *)0x0) {
    PDFMAHPKIEI__MLDEHFFGJDP<object>
              (__this,KGLJICLJHEL,(Il2CppObject *)CJNHFNHJHPE,
               Method_PDFMAHPKIEI_MLDEHFFGJDP<string>__);
    PDFMAHPKIEI__BHFGGAKKJKP(__this,method_01);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

