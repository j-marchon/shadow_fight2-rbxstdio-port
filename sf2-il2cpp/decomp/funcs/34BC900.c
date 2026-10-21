// IONAICHLBOO.OAMNHEMLLFO$$LNFPEEFDEGM @ RVA 0x34BC900

bool IONAICHLBOO_OAMNHEMLLFO__LNFPEEFDEGM
               (IONAICHLBOO_OAMNHEMLLFO_o *__this,
               System_Collections_Generic_KeyValuePair_Func_string__bool___string__o filter,
               MethodInfo *method)

{
  undefined1 uVar1;
  System_Func_string__bool__o *pSVar2;
  
  pSVar2 = filter.fields.key;
  if ((DAT_045685eb & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<Func<string,_bool>,_string>_get_Key__
                 ,pSVar2,filter.fields.value);
    DAT_045685eb = 1;
  }
  if (pSVar2 != (System_Func_string__bool__o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035bc94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,(__this->fields).strToCheck,
                       (pSVar2->fields).super.super.method);
    return (bool)uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

