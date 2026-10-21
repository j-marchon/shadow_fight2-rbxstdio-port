// OJHODFIGFMA$$LJENKIPCOAA @ RVA 0x3240680

void OJHODFIGFMA__LJENKIPCOAA(OJHODFIGFMA_o *__this,bool NPKHCHGKFLA,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Il2CppObject *pIVar4;
  MethodInfo *method_00;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar5;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_98;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_70;
  
  if ((DAT_04567084 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__)
    ;
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
                );
                    /* try { // try from 033406cc to 034406e7 has its CatchHandler @ 0334077c */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_get_Current__
                );
                    /* try { // try from 033406e8 to 0344075b has its CatchHandler @ 03340558 */
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_LKPNOBFEAKD>_get_Value__);
    DAT_04567084 = 1;
  }
  local_70.fields._getEnumeratorRetType = 0;
  local_70.fields._36_4_ = 0;
  local_70.fields._version = 0;
  local_70.fields._index = 0;
  local_70.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_70.fields._current.fields.value = (Il2CppObject *)0x0;
  local_70.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).GGPHFPNMIIJ;
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
            (&local_98,pSVar3,
             Method_System_Collections_Generic_Dictionary<string,_LKPNOBFEAKD>_GetEnumerator__);
  local_70.fields._version = local_98.fields._version;
  local_70.fields._index = local_98.fields._index;
  local_70.fields._dictionary = local_98.fields._dictionary;
  local_70.fields._current.fields.value = local_98.fields._current.fields.value;
  local_70.fields._current.fields.key = local_98.fields._current.fields.key;
  local_70.fields._getEnumeratorRetType = local_98.fields._getEnumeratorRetType;
  local_70.fields._36_4_ = local_98.fields._36_4_;
LAB_03340758:
                    /* try { // try from 0334075c to 03440763 has its CatchHandler @ 03340788 */
  bVar2 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                    (&local_70,
                     Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_MoveNext__
                    );
  pIVar1 = local_70.fields._current.fields.value;
                    /* try { // try from 03340764 to 0344076b has its CatchHandler @ 03340778 */
  if (!bVar2) {
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_LKPNOBFEAKD>_Dispose__
              );
    OJHODFIGFMA__MBLPHLDFJOK(__this,method_00);
                    /* catch() { ... } // from try @ 033407a0 with catch @ 033407c4 */
                    /* try { // try from 033407cc to 034407d3 has its CatchHandler @ 033407e8 */
                    /* try { // try from 033407d4 to 034407df has its CatchHandler @ 03340558 */
    return;
  }
                    /* try { // try from 0334076c to 03440773 has its CatchHandler @ 03340788 */
  if (NPKHCHGKFLA) goto code_r0x03340770;
  goto LAB_0334077c;
code_r0x03340770:
  if (local_70.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033407cc with catch @ 033407e8
                       catch(type#2 @ 00000000) { ... } // from try @ 033407e0 with catch @ 033407e8
                        */
    FUN_01bab8c8();
  }
                    /* try { // try from 03340774 to 0344079f has its CatchHandler @ 03340558 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03340764 with catch @ 03340778
                        */
  if (*(char *)&local_70.fields._current.fields.value[6].monitor == '\0') {
LAB_0334077c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033406cc with catch @ 0334077c
                        */
    pOVar5 = (__this->fields).HEHMPFLAEGE;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03340678 with catch @ 03340780
                        */
    if (pOVar5 == (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pOVar5->fields).IAGNJPIIEPO
    ;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0334075c with catch @ 03340788
                       catch(type#1 @ 03f99f68) { ... } // from try @ 0334076c with catch @ 03340788
                        */
    if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar4 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                       (pSVar3,local_70.fields._current.fields.key,
                        Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                       );
    if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (pIVar1 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 033407e0 to 034407e7 has its CatchHandler @ 033407e8 */
      FUN_01bab8c8();
    }
                    /* try { // try from 033407a0 to 034407a3 has its CatchHandler @ 033407c4 */
                    /* try { // try from 033407a4 to 034407cb has its CatchHandler @ 03340558 */
    *(undefined4 *)((long)&pIVar1[6].klass + 4) = *(undefined4 *)&pIVar4[1].monitor;
  }
  goto LAB_03340758;
}

