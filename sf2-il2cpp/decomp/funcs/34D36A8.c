// ACNHFHJOHLH$$BHFGGAKKJKP @ RVA 0x34D36A8

void ACNHFHJOHLH__BHFGGAKKJKP(MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *FDLJCNLNCOC;
  
  if ((DAT_045686c7 & 1) == 0) {
    FUN_01bab630(&ACNHFHJOHLH_TypeInfo);
    FUN_01bab630(&StringLiteral_1502);
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
    NEHNBJKKABI__GPNPELOHJCJ(StringLiteral_1502,FDLJCNLNCOC,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

