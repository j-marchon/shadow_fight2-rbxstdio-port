// HIKAFDOGMMH$$FENMKGOFPDM @ RVA 0x343AD08

void HIKAFDOGMMH__FENMKGOFPDM
               (HIKAFDOGMMH_o *__this,
               System_Collections_Generic_List_KeyValuePair_string__string___o *ELOCKFLGKNO,
               System_String_o *EIJDDKJONFO,System_String_o *JAFADHFFBPK,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  bool bVar3;
  SimpleJSON_JSONNode_o *a;
  System_String_o *pSVar4;
  long *plVar5;
  ulong uVar6;
  Il2CppObject *key;
  MethodInfo_2639E28 *method_00;
  System_Collections_Generic_KeyValuePair_string__string__array *pSVar7;
  System_Collections_Generic_KeyValuePair_object__object__o __this_00;
  SimpleJSON_JSONNode_KeyEnumerator_o local_128;
  SimpleJSON_JSONNode_Enumerator_Fields local_e0;
  SimpleJSON_JSONNode_Enumerator_Fields local_90;
  
  if ((DAT_045681d0 & 1) == 0) {
    FUN_01bab630(&SimpleJSON_JSONNode_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__);
    DAT_045681d0 = 1;
  }
  method_00 = (MethodInfo_2639E28 *)0x0;
  local_90.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_e0.m_Array.fields._current = (SimpleJSON_JSONNode_o *)0x0;
  local_90.m_Object.fields._getEnumeratorRetType = 0;
  local_90.m_Object.fields._36_4_ = 0;
  local_90.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.m_Array.fields._index = 0;
  local_90.m_Array.fields._version = 0;
  local_90.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_90.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.type = 0;
  local_90._4_4_ = 0;
  local_90.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_90.m_Object.fields._version = 0;
  local_90.m_Object.fields._index = 0;
  local_e0.m_Object.fields._getEnumeratorRetType = 0;
  local_e0.m_Object.fields._36_4_ = 0;
  local_e0.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_e0.m_Array.fields._index = 0;
  local_e0.m_Array.fields._version = 0;
  local_e0.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_e0.m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_e0.type = 0;
  local_e0._4_4_ = 0;
  local_e0.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_e0.m_Object.fields._version = 0;
  local_e0.m_Object.fields._index = 0;
  a = OGMFFOMHGIA__EPNGKDNPNGE(EIJDDKJONFO,JAFADHFFBPK,true,true,0,(MethodInfo *)0x0);
  if ((SimpleJSON_JSONNode_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(SimpleJSON_JSONNode_TypeInfo);
  }
  bVar3 = SimpleJSON_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if (a == (SimpleJSON_JSONNode_o *)0x0) {
LAB_0353af28:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    SimpleJSON_JSONNode__get_Keys(&local_128,a,(MethodInfo *)0x0);
    memcpy(&local_e0,&local_128,0x48);
    SimpleJSON_JSONNode_KeyEnumerator__GetEnumerator
              (&local_128,(SimpleJSON_JSONNode_KeyEnumerator_o *)&local_e0,(MethodInfo *)0x0);
    memcpy(&local_90,&local_128,0x48);
    bVar3 = SimpleJSON_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSON_JSONNode_KeyEnumerator_o *)&local_90,(MethodInfo *)0x0);
    if (bVar3) {
      do {
        pSVar4 = SimpleJSON_JSONNode_KeyEnumerator__get_Current
                           ((SimpleJSON_JSONNode_KeyEnumerator_o *)&local_90,(MethodInfo *)0x0);
        plVar5 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                   (a,pSVar4,(a->klass->vtable)._7_get_Item.method);
        if (plVar5 == (long *)0x0) goto LAB_0353af28;
        uVar6 = (**(code **)(*plVar5 + 0x208))(plVar5,*(undefined8 *)(*plVar5 + 0x210));
        if ((uVar6 & 1) != 0) {
          key = (Il2CppObject *)
                (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
          local_128.fields.m_Enumerator.fields._0_8_ = (Il2CppClass *)0x0;
          local_128.fields.m_Enumerator.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
          __this_00.fields.value = (Il2CppObject *)pSVar4;
          __this_00.fields.key = (Il2CppObject *)&local_128;
          System_Collections_Generic_KeyValuePair<object,_object>___ctor
                    (__this_00,key,
                     Method_System_Collections_Generic_KeyValuePair<string,_string>__ctor__,
                     method_00);
          lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_Add__;
          if (ELOCKFLGKNO == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0)
          goto LAB_0353af28;
          item.fields.value =
               (Il2CppObject *)local_128.fields.m_Enumerator.fields.m_Object.fields._dictionary;
          item.fields.key = (Il2CppObject *)local_128.fields.m_Enumerator.fields._0_8_;
          pSVar7 = (ELOCKFLGKNO->fields)._items;
          (ELOCKFLGKNO->fields)._version = (ELOCKFLGKNO->fields)._version + 1;
          if (pSVar7 == (System_Collections_Generic_KeyValuePair_string__string__array *)0x0)
          goto LAB_0353af28;
          uVar1 = (ELOCKFLGKNO->fields)._size;
          if (uVar1 < (uint)pSVar7->max_length) {
            (ELOCKFLGKNO->fields)._size = uVar1 + 1;
            pSVar7->m_Items[(int)uVar1].fields.key =
                 (System_String_o *)local_128.fields.m_Enumerator.fields._0_8_;
            pSVar7->m_Items[(int)uVar1].fields.value =
                 (System_String_o *)local_128.fields.m_Enumerator.fields.m_Object.fields._dictionary
            ;
            thunk_FUN_01c20e04(pSVar7->m_Items + (int)uVar1,0);
          }
          else {
            System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                      ((System_Collections_Generic_List_T__o *)ELOCKFLGKNO,item,
                       *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        bVar3 = SimpleJSON_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSON_JSONNode_KeyEnumerator_o *)&local_90,(MethodInfo *)0x0);
      } while (bVar3);
    }
  }
  return;
}

