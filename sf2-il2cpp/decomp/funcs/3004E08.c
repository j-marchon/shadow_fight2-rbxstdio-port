// GNJBJKEJEGC$$FOOHBJNHOKK @ RVA 0x3004E08

void GNJBJKEJEGC__FOOHBJNHOKK
               (GNJBJKEJEGC_o *__this,System_String_o *PMACBPAMPJA,float CJNHFNHJHPE,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__float__o *__this_00;
  
  if ((DAT_04565b43 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    DAT_04565b43 = 1;
  }
  __this_00 = (__this->fields).CMHJMGKMCCI;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__float__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_float>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (Il2CppObject *)PMACBPAMPJA,CJNHFNHJHPE,
               Method_System_Collections_Generic_Dictionary<string,_float>_set_Item__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

