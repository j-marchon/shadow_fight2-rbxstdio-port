// FJNIPMODEPO$$BNEHJLHGBCD @ RVA 0x3034A6C

void FJNIPMODEPO__BNEHJLHGBCD
               (FJNIPMODEPO_o *__this,System_String_o *PMACBPAMPJA,System_String_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *JLNPKGGFFDD;
  
  if ((DAT_04565d3b & 1) == 0) {
    FUN_01bab630(&StringLiteral_11893);
    FUN_01bab630(&StringLiteral_827);
    DAT_04565d3b = 1;
  }
  bVar1 = System_String__IsNullOrWhiteSpace(CJNHFNHJHPE,(MethodInfo *)0x0);
  if (bVar1) {
    JLNPKGGFFDD = System_String__Concat
                            (StringLiteral_11893,PMACBPAMPJA,StringLiteral_827,(MethodInfo *)0x0);
    KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
    return;
  }
  Firebase_Crashlytics_Crashlytics__SetCustomKey(PMACBPAMPJA,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

