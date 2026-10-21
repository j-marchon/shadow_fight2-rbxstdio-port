// ACNHFHJOHLH$$FNJHLJHJOMO @ RVA 0x34D3738

void ACNHFHJOHLH__FNJHLJHJOMO(System_String_o *ODAMFBHJKIH,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686c8 & 1) == 0) {
    FUN_01bab630(&ACNHFHJOHLH_TypeInfo);
    DAT_045686c8 = 1;
    method = extraout_x1;
  }
  if ((ACNHFHJOHLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(ACNHFHJOHLH_TypeInfo,method);
  }
  __this = ACNHFHJOHLH_TypeInfo->static_fields->KHHGPLOMHBB;
  if (__this != (System_Text_StringBuilder_o *)0x0) {
    method_00 = (MethodInfo *)
                System_Text_StringBuilder__AppendLine(__this,ODAMFBHJKIH,(MethodInfo *)0x0);
    ACNHFHJOHLH__BHFGGAKKJKP(method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

