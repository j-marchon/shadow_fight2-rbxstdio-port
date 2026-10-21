// NKDMOOEFPHJ$$LINKPADNPGE @ RVA 0x33A95D0

NKDMOOEFPHJ_ACFDNGGGDIJ_o *
NKDMOOEFPHJ__LINKPADNPGE
          (NKDMOOEFPHJ_o *__this,bool KPGNMOKKJNI,ECENNHNBAME_o *NLEBDPHNIDI,MethodInfo *method)

{
  long lVar1;
  bool bVar2;
  NKDMOOEFPHJ_ACFDNGGGDIJ_o *pNVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if ((DAT_04567d03 & 1) == 0) {
    FUN_01bab630(&NKDMOOEFPHJ_ACFDNGGGDIJ_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Item__
                );
    DAT_04567d03 = 1;
  }
  lVar1 = 0x18;
  if (!KPGNMOKKJNI) {
    lVar1 = 0x20;
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               ((long)&__this->klass + lVar1);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this_00,(Il2CppObject *)NLEBDPHNIDI,
                       Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_ContainsKey__
                      );
    if (bVar2) {
      pNVar3 = (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (__this_00,(Il2CppObject *)NLEBDPHNIDI,
                          Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_get_Item__
                         );
      return pNVar3;
    }
    pNVar3 = (NKDMOOEFPHJ_ACFDNGGGDIJ_o *)thunk_FUN_01bda818(NKDMOOEFPHJ_ACFDNGGGDIJ_TypeInfo);
    System_Object___ctor((Il2CppObject *)pNVar3,(MethodInfo *)0x0);
    (pNVar3->fields).BPJEIHLJFHO = NLEBDPHNIDI;
    thunk_FUN_01c20e04(&pNVar3->fields,NLEBDPHNIDI);
    (pNVar3->fields).KMENOPCKFLM = 0.0;
    (pNVar3->fields).AIKGGIJGOOP = 0.0;
    (pNVar3->fields).JCIDLNABHMN = 0.0;
    (pNVar3->fields).AGMCOJBKCAA = 0.0;
    (pNVar3->fields).ILGLFEKDGND = 0.0;
    (pNVar3->fields).FAMAEGGIJCF = 0;
    System_Collections_Generic_Dictionary<object,_object>__Add
              (__this_00,(Il2CppObject *)NLEBDPHNIDI,(Il2CppObject *)pNVar3,
               Method_System_Collections_Generic_Dictionary<ECENNHNBAME,_NKDMOOEFPHJ_ACFDNGGGDIJ>_Add__
              );
    return pNVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

