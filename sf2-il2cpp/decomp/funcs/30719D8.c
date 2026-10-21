// EEGDOGKBLNG$$EGENCJMCCEJ @ RVA 0x30719D8

System_String_o *
EEGDOGKBLNG__EGENCJMCCEJ(EEGDOGKBLNG_o *__this,System_String_o *PMACBPAMPJA,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  
  if ((DAT_04565f78 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    DAT_04565f78 = 1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).KPPDBKGGEGA;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = (System_String_o *)
             System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (__this_00,(Il2CppObject *)PMACBPAMPJA,
                        Method_System_Collections_Generic_Dictionary<string,_string>_get_Item__);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

