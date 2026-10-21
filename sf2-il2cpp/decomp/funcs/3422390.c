// HEFOANCOHDC$$EOBFJAOLIMH @ RVA 0x3422390

System_String_o *
HEFOANCOHDC__EOBFJAOLIMH(HEFOANCOHDC_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *CJNHFNHJHPE;
  System_String_o *pSVar3;
  
  if ((DAT_045680ec & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Item__);
    DAT_045680ec = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NBOMAJCMIIL;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_ContainsKey__
                      );
    if (!bVar1) {
      return KGLJICLJHEL;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).NBOMAJCMIIL
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      CJNHFNHJHPE = (CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *)
                    System_Collections_Generic_Dictionary<object,_object>__get_Item
                              (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                               Method_System_Collections_Generic_Dictionary<string,_ObscuredString>_get_Item__
                              );
      pSVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         (CJNHFNHJHPE,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

