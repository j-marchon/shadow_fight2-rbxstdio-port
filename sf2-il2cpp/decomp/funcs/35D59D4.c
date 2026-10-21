// GGLDGAAPKCF$$APEHKFPAPCF @ RVA 0x35D59D4

SimpleJSON_JSONNode_o *
GGLDGAAPKCF__APEHKFPAPCF
          (GGLDGAAPKCF_o *__this,SimpleJSON_JSONNode_o *FFJLPMFOGOI,System_String_o *ABHMAEMOCCM,
          MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  SimpleJSON_JSONNode_o *pSVar4;
  System_Byte_array *pSVar5;
  System_Byte_array *pSVar6;
  System_String_o *pSVar7;
  SimpleJSON_JSONNode_o *pSVar8;
  System_String_o *str2;
  System_String_o *str3;
  System_Collections_Generic_List_int__o *pSVar9;
  System_Int32_array *pSVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  undefined1 auStack_f8 [72];
  SimpleJSON_JSONNode_Enumerator_Fields local_b0;
  int32_t local_64;
  
                    /* try { // try from 036d59e4 to 037d59e7 has its CatchHandler @ 036d5a10 */
                    /* try { // try from 036d59e8 to 037d5a1f has its CatchHandler @ 036d5574 */
  if ((DAT_04568ff4 & 1) == 0) {
                    /* catch() { ... } // from try @ 036d59e4 with catch @ 036d5a10 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_828);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_829);
                    /* try { // try from 036d5a20 to 037d5a27 has its CatchHandler @ 036d5a3c */
                    /* try { // try from 036d5a28 to 037d5a33 has its CatchHandler @ 036d5574 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_830);
                    /* try { // try from 036d5a34 to 037d5a3b has its CatchHandler @ 036d5a3c */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_831);
                    /* catch() { ... } // from try @ 036d5a20 with catch @ 036d5a3c
                       catch() { ... } // from try @ 036d5a34 with catch @ 036d5a3c */
                    /* try { // try from 036d5a40 to 037d5c1f has its CatchHandler @ 036d5a40
                       catch() { ... } // from try @ 036d5a40 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5d60 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5d9c with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5f24 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d5f60 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d6064 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d60c4 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d610c with catch @ 036d5a40
                       catch() { ... } // from try @ 036d6128 with catch @ 036d5a40
                       catch() { ... } // from try @ 036d6168 with catch @ 036d5a40 */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_832);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_833);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_834);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_835);
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Contains__);
    DAT_04568ff4 = 1;
  }
  local_64 = 0;
  local_b0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_b0.m_Object.fields._getEnumeratorRetType = 0;
  local_b0.m_Object.fields._36_4_ = 0;
  local_b0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b0.m_Array.fields._index = 0;
  local_b0.m_Array.fields._version = 0;
  local_b0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0.type = 0;
  local_b0._4_4_ = 0;
  local_b0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b0.m_Object.fields._version = 0;
  local_b0.m_Object.fields._index = 0;
  if (FFJLPMFOGOI == (SimpleJSON_JSONNode_o *)0x0) {
LAB_036d5e30:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 036d5e30 to 037d5e37 has its CatchHandler @ 036d5f44 */
    FUN_01bab8c8();
  }
  (*(FFJLPMFOGOI->klass->vtable)._30_unknown.methodPtr)
            (auStack_f8,FFJLPMFOGOI,(FFJLPMFOGOI->klass->vtable)._30_unknown.method);
  memcpy(&local_b0,auStack_f8,0x48);
  bVar3 = SimpleJSON_JSONNode_Enumerator__MoveNext
                    ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
  if (bVar3) {
    do {
      aKeyValue = SimpleJSON_JSONNode_Enumerator__get_Current
                            ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
      if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = SimpleJSON_JSONNode__op_Implicit(aKeyValue,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_828,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_829,(MethodInfo *)0x0
                );
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
      if (pSVar4 == (SimpleJSON_JSONNode_o *)0x0) goto LAB_036d5e30;
      pSVar8 = (SimpleJSON_JSONNode_o *)
               (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,pSVar7,(pSVar4->klass->vtable)._7_get_Item.method);
      local_64 = OGMFFOMHGIA__EHJNCGCICMP(pSVar8,0,(MethodInfo *)0x0);
      pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar5,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_830,(MethodInfo *)0x0
                );
      pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                ((System_Array_o *)pSVar6,
                 Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_831,(MethodInfo *)0x0
                );
                    /* try { // try from 036d5c20 to 037d5c27 has its CatchHandler @ 036d610c */
      pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 036d5c40 to 037d5c47 has its CatchHandler @ 036d609c */
      pSVar8 = (SimpleJSON_JSONNode_o *)
               (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,pSVar7,(pSVar4->klass->vtable)._7_get_Item.method);
      pSVar7 = OGMFFOMHGIA__JPKEHIBGOEM(pSVar8,(System_String_o *)0x0,(MethodInfo *)0x0);
      pSVar9 = (__this->fields).KNKAAIDGBJL;
      if (pSVar9 == (System_Collections_Generic_List_int__o *)0x0) goto LAB_036d5e30;
                    /* try { // try from 036d5c5c to 037d5c63 has its CatchHandler @ 036d5d80 */
      bVar3 = System_Collections_Generic_List<int>__Contains
                        (pSVar9,local_64,Method_System_Collections_Generic_List<int>_Contains__);
      if (bVar3) {
                    /* try { // try from 036d5c78 to 037d5c7b has its CatchHandler @ 036d5d68 */
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_832,
                   (MethodInfo *)0x0);
                    /* try { // try from 036d5c98 to 037d5c9b has its CatchHandler @ 036d5d7c */
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
                    /* try { // try from 036d5cac to 037d5caf has its CatchHandler @ 036d5d64 */
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_833,
                   (MethodInfo *)0x0);
        pSVar7 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
        pSVar5 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar5,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_834,
                   (MethodInfo *)0x0);
                    /* try { // try from 036d5cfc to 037d5d17 has its CatchHandler @ 036d5d6c */
        pSVar6 = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
                  ((System_Array_o *)pSVar6,
                   Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_835,
                   (MethodInfo *)0x0);
        str2 = OMHODMCHILE__NPKGDBHJKCK(pSVar5,pSVar6,(MethodInfo *)0x0);
                    /* try { // try from 036d5d28 to 037d5d2f has its CatchHandler @ 036d6080 */
        str3 = System_Int32__ToString((int32_t)&local_64,(MethodInfo *)0x0);
                    /* try { // try from 036d5d44 to 037d5d47 has its CatchHandler @ 036d5d74 */
                    /* try { // try from 036d5d4c to 037d5d4f has its CatchHandler @ 036d5d70 */
        pSVar7 = System_String__Concat(pSVar7,ABHMAEMOCCM,str2,str3,(MethodInfo *)0x0);
                    /* try { // try from 036d5d54 to 037d5d5f has its CatchHandler @ 036d5d78 */
                    /* try { // try from 036d5d60 to 037d5d97 has its CatchHandler @ 036d5a40 */
                    /* catch() { ... } // from try @ 036d5cac with catch @ 036d5d64 */
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 036d5c78 with catch @ 036d5d68 */
                    /* catch() { ... } // from try @ 036d5cfc with catch @ 036d5d6c */
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
                    /* catch() { ... } // from try @ 036d5d4c with catch @ 036d5d70 */
                    /* catch() { ... } // from try @ 036d5d44 with catch @ 036d5d74 */
                    /* catch() { ... } // from try @ 036d5d54 with catch @ 036d5d78 */
        UnityEngine_Debug__Log((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 036d5c98 with catch @ 036d5d7c */
      }
      else {
                    /* catch() { ... } // from try @ 036d5c5c with catch @ 036d5d80 */
        bVar3 = System_String__op_Equality(pSVar7,ABHMAEMOCCM,(MethodInfo *)0x0);
        lVar2 = Method_System_Collections_Generic_List<int>_Add__;
        if (bVar3) {
          pSVar9 = (__this->fields).KNKAAIDGBJL;
          if (pSVar9 != (System_Collections_Generic_List_int__o *)0x0) {
            pSVar10 = (pSVar9->fields)._items;
            (pSVar9->fields)._version = (pSVar9->fields)._version + 1;
            if (pSVar10 != (System_Int32_array *)0x0) {
              uVar1 = (pSVar9->fields)._size;
              if ((uint)pSVar10->max_length <= uVar1) {
                System_Collections_Generic_List<int>__AddWithResize
                          (pSVar9,local_64,
                           *(MethodInfo_26C766C **)
                            (*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return pSVar4;
              }
              (pSVar9->fields)._size = uVar1 + 1;
                    /* try { // try from 036d5df4 to 037d5dfb has its CatchHandler @ 036d60a8 */
              pSVar10->m_Items[(int)uVar1] = local_64;
              return pSVar4;
            }
          }
          goto LAB_036d5e30;
        }
      }
                    /* try { // try from 036d5d98 to 037d5d9b has its CatchHandler @ 036d6068 */
                    /* try { // try from 036d5d9c to 037d5df3 has its CatchHandler @ 036d5a40 */
      bVar3 = SimpleJSON_JSONNode_Enumerator__MoveNext
                        ((SimpleJSON_JSONNode_Enumerator_o *)&local_b0,(MethodInfo *)0x0);
    } while (bVar3);
  }
                    /* try { // try from 036d5e14 to 037d5e1b has its CatchHandler @ 036d6098 */
  return (SimpleJSON_JSONNode_o *)0x0;
}

