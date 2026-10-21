// EINKKMIHCHI$$IKFHKGFDHBP @ RVA 0x34C7A88

void EINKKMIHCHI__IKFHKGFDHBP(EINKKMIHCHI_o *__this,System_String_o *OGPGLGPMEPD,MethodInfo *method)

{
  System_String_o *JLNPKGGFFDD;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Action_string__o *pSVar1;
  
  if ((DAT_04568648 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_HashSet<string>_Add__);
    FUN_01bab630(&NHJCFGACFDF_TypeInfo);
    FUN_01bab630(&StringLiteral_3643);
    DAT_04568648 = 1;
  }
  JLNPKGGFFDD = System_String__Concat(StringLiteral_3643,OGPGLGPMEPD,(MethodInfo *)0x0);
  NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,JLNPKGGFFDD,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).FEKDPAPKONP;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add
              (__this_00,(Il2CppObject *)OGPGLGPMEPD,
               Method_System_Collections_Generic_HashSet<string>_Add__);
    if ((NHJCFGACFDF_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar1 = NHJCFGACFDF_TypeInfo->static_fields->EDCABNJMIHN;
    if (pSVar1 != (System_Action_string__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035c7b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar1->fields).super.super.invoke_impl)
                ((pSVar1->fields).super.super.method_code,OGPGLGPMEPD,
                 (pSVar1->fields).super.super.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

