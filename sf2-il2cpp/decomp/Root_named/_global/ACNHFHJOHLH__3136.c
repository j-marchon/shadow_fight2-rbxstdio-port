// TypeDefIndex 3136
// Namespace: 
// public static class ACNHFHJOHLH
// Fields:
//   private static StringBuilder KHHGPLOMHBB; // 0x0

// ===== private static void .cctor()  [RVA 0x34D362C]
// ACNHFHJOHLH$$.cctor @ RVA 0x34D362C

void ACNHFHJOHLH___cctor(MethodInfo *method)

{
  System_Text_StringBuilder_o *__this;
  
  if ((DAT_045686c6 & 1) == 0) {
    FUN_01bab630(&ACNHFHJOHLH_TypeInfo);
    FUN_01bab630(&System_Text_StringBuilder_TypeInfo);
    DAT_045686c6 = 1;
  }
  __this = (System_Text_StringBuilder_o *)thunk_FUN_01bda818(System_Text_StringBuilder_TypeInfo);
  System_Text_StringBuilder___ctor(__this,(MethodInfo *)0x0);
  ACNHFHJOHLH_TypeInfo->static_fields->KHHGPLOMHBB = __this;
  thunk_FUN_01c20e04(ACNHFHJOHLH_TypeInfo->static_fields,__this);
  return;
}


// ===== private static void BHFGGAKKJKP()  [RVA 0x34D36A8]
// ACNHFHJOHLH$$BHFGGAKKJKP @ RVA 0x34D36A8

void ACNHFHJOHLH__BHFGGAKKJKP(MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *FDLJCNLNCOC;
  
  if ((DAT_045686c7 & 1) == 0) {
    FUN_01bab630(&ACNHFHJOHLH_TypeInfo);
    FUN_01bab630(&StringLiteral_1502/*"/Users/otarius/Nekki/Temp/u.txt"*/);
    DAT_045686c7 = 1;
  }
  if ((ACNHFHJOHLH_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar1 = ACNHFHJOHLH_TypeInfo->static_fields->KHHGPLOMHBB;
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    FDLJCNLNCOC = (System_String_o *)
                  (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                            (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    NEHNBJKKABI__GPNPELOHJCJ(StringLiteral_1502/*"/Users/otarius/Nekki/Temp/u.txt"*/,FDLJCNLNCOC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void FNJHLJHJOMO(string ODAMFBHJKIH)  [RVA 0x34D3738]
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

