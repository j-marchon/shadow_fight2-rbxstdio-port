// GGLKHCAIGDI$$ICMIMIOJPMK @ RVA 0x33A5268

int32_t GGLKHCAIGDI__ICMIMIOJPMK
                  (GGLKHCAIGDI_o *__this,IGFGDDANEPE_o *NKCMBEFHFII,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  int32_t iVar3;
  System_Collections_Generic_List_MDLDFLDGLND__o *__this_00;
  HOOAAGABMBL_o *pHVar4;
  System_String_o *b;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_04567ce9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
    DAT_04567ce9 = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  iVar3 = 0;
  if (NKCMBEFHFII != (IGFGDDANEPE_o *)0x0) {
    pHVar4 = (NKCMBEFHFII->fields).PCBECBEFJOI;
    if (pHVar4 == (HOOAAGABMBL_o *)0x0) {
LAB_034a5364:
      iVar3 = 0;
    }
    else {
      __this_00 = (__this->fields).HEHMAPDMHIG;
      if (__this_00 == (System_Collections_Generic_List_MDLDFLDGLND__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      b = (pHVar4->fields)._GMPAEDFIIHF_k__BackingField;
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_00,
                 Method_System_Collections_Generic_List<MDLDFLDGLND>_GetEnumerator__);
      do {
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (&local_38,
                           Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_MoveNext__
                          );
        pIVar1 = local_38.fields._current;
        if (!bVar2) {
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (&local_38,
                     Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__);
          goto LAB_034a5364;
        }
        if (local_38.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = System_String__op_Equality
                          ((System_String_o *)local_38.fields._current[1].klass,b,(MethodInfo *)0x0)
        ;
      } while (!bVar2);
      iVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ALBJPLAPOBO
                        ((CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)
                         *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_Fields *)(pIVar1 + 2),
                         (MethodInfo *)0x0);
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<MDLDFLDGLND>_Dispose__)
      ;
    }
  }
  return iVar3;
}

