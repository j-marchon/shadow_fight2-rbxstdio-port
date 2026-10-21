// JFDPMLLJKFH$$.ctor @ RVA 0x3339068

void JFDPMLLJKFH___ctor(JFDPMLLJKFH_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,int32_t HEHMPFLAEGE,
                       MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o *pSVar2;
  System_Collections_Generic_List_JGIFDELCGOJ__o *__this_00;
  System_Collections_Generic_Dictionary_string__ObscuredFloat__o **ppSVar3;
  Il2CppClass *key;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o local_70;
  
  if ((DAT_04567960 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_ObscuredFloat>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04567960 = 1;
  }
  local_88.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_88.fields._index = 0;
  local_88.fields._version = 0;
  local_88.fields._current = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_ObscuredFloat>_TypeInfo)
  ;
  System_Collections_Generic_Dictionary<object,_ObscuredFloat>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
             Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>__ctor__);
  ppSVar3 = &(__this->fields).CMHJMGKMCCI;
  *ppSVar3 = pSVar2;
  thunk_FUN_01c20e04(ppSVar3,pSVar2);
  CNIGOFCKBGI___ctor((CNIGOFCKBGI_o *)__this,10,HEHMPFLAEGE,AHDGNOJPPIB,(CNIGOFCKBGI_o *)0x0,
                     (MethodInfo *)0x0);
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = MGNPHCAAEIO_TypeInfo->static_fields->HNPCJGMHLCM;
  if (__this_00 != (System_Collections_Generic_List_JGIFDELCGOJ__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JGIFDELCGOJ>_GetEnumerator__);
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (&local_88,
                         Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_MoveNext__);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (&local_88,
                   Method_System_Collections_Generic_List_Enumerator<JGIFDELCGOJ>_Dispose__);
        (*(__this->klass->vtable)._12_HNIHOIAMDPC.methodPtr)
                  (__this,AHDGNOJPPIB,(__this->klass->vtable)._12_HNIHOIAMDPC.method);
        return;
      }
      if (local_88.fields._current == (Il2CppObject *)0x0) break;
      pSVar2 = *ppSVar3;
      key = local_88.fields._current[1].klass;
      CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO(&local_70,0.0,(MethodInfo *)0x0);
      if (pSVar2 == (System_Collections_Generic_Dictionary_string__ObscuredFloat__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_Dictionary<object,_ObscuredFloat>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)key
                 ,&local_70,
                 Method_System_Collections_Generic_Dictionary<string,_ObscuredFloat>_set_Item__);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

