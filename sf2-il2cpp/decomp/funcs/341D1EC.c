// HEFOANCOHDC$$ECODHNNKEBC @ RVA 0x341D1EC

bool HEFOANCOHDC__ECODHNNKEBC
               (HEFOANCOHDC_o *__this,System_String_o *KGLJICLJHEL,System_String_o **CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *local_28;
  
  if ((DAT_045680d3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_TryGetValue__
                );
    DAT_045680d3 = 1;
  }
  local_28 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)0x0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              (__this->fields).NBOMAJCMIIL;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this_00,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_TryGetValue__
                      );
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       (local_28,(MethodInfo *)0x0);
    *CJNHFNHJHPE = pSVar2;
    thunk_FUN_01c20e04(CJNHFNHJHPE,pSVar2);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

