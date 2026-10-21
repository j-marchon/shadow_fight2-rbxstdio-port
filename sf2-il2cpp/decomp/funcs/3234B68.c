// BJFCCEEPHOF$$.cctor @ RVA 0x3234B68

void BJFCCEEPHOF___cctor(MethodInfo *method)

{
  System_Globalization_NumberFormatInfo_o *__this;
  
  if ((DAT_04567014 & 1) == 0) {
    FUN_01bab630(&BJFCCEEPHOF_TypeInfo);
    FUN_01bab630(&System_Globalization_NumberFormatInfo_TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    DAT_04567014 = 1;
  }
  __this = (System_Globalization_NumberFormatInfo_o *)
           thunk_FUN_01bda818(System_Globalization_NumberFormatInfo_TypeInfo);
  System_Globalization_NumberFormatInfo___ctor(__this,(MethodInfo *)0x0);
  if (__this != (System_Globalization_NumberFormatInfo_o *)0x0) {
    System_Globalization_NumberFormatInfo__set_NumberGroupSeparator
              (__this,StringLiteral_167,(MethodInfo *)0x0);
    BJFCCEEPHOF_TypeInfo->static_fields->OGELKBJMHBD = __this;
    thunk_FUN_01c20e04(BJFCCEEPHOF_TypeInfo->static_fields,__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

