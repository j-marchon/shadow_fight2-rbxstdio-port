// TypeDefIndex 3183
// Namespace: 
// public class Model.IEMCMOPNPEA
// Fields:
//   private Dictionary<string, List<OIGAJAKPPEO>> EHJHKEEDKBE; // 0x10

// ===== public OIGAJAKPPEO MFMDEIBOOEG(string KGLJICLJHEL)  [RVA 0x34F7F98]
// Model.IEMCMOPNPEA$$MFMDEIBOOEG @ RVA 0x34F7F98

OIGAJAKPPEO_o *
Model_IEMCMOPNPEA__MFMDEIBOOEG
          (Model_IEMCMOPNPEA_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *source;
  OIGAJAKPPEO_o *item;
  System_Collections_Generic_List_object__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  
  if ((DAT_0456880a & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_LastOrDefault<OIGAJAKPPEO>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Remove__);
    DAT_0456880a = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                      );
    if (!bVar1) {
      return (OIGAJAKPPEO_o *)0x0;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      source = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                         );
      item = (OIGAJAKPPEO_o *)
             System_Linq_Enumerable__LastOrDefault<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        Method_System_Linq_Enumerable_LastOrDefault<OIGAJAKPPEO>__);
      if (item == (OIGAJAKPPEO_o *)0x0) {
        return (OIGAJAKPPEO_o *)0x0;
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EHJHKEEDKBE;
      if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (__this_00 = (System_Collections_Generic_List_object__o *)
                      System_Collections_Generic_Dictionary<object,_object>__get_Item
                                (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                                ), __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        System_Collections_Generic_List<object>__Remove
                  (__this_00,(Il2CppObject *)item,
                   Method_System_Collections_Generic_List<OIGAJAKPPEO>_Remove__);
        __this_01 = (item->fields).super.LDAKOINICNJ;
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          return item;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GHCALGCCKKP()  [RVA 0x34F80A4]
// Model.IEMCMOPNPEA$$GHCALGCCKKP @ RVA 0x34F80A4

void Model_IEMCMOPNPEA__GHCALGCCKKP(Model_IEMCMOPNPEA_o *__this,MethodInfo *method)

{
  int32_t length;
  Il2CppObject *__this_00;
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Action_OIGAJAKPPEO__o **ppSVar3;
  System_Action_OIGAJAKPPEO__o *action;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_b8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_0456880b & 1) == 0) {
    FUN_01bab630(&System_Action<OIGAJAKPPEO>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Clear__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_List<OIGAJAKPPEO>>_get_Value__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_ForEach__);
    FUN_01bab630(&Method_OLKKAIFGGAK_IEMCMOPNPEA_<>c_KLDHGFMNGJF__);
    FUN_01bab630(&Model_IEMCMOPNPEA_<>c_TypeInfo);
    DAT_0456880b = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              (&local_b8,pSVar2,
               Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_GetEnumerator__
              );
    local_90.fields._version = local_b8.fields._version;
    local_90.fields._index = local_b8.fields._index;
    local_90.fields._dictionary = local_b8.fields._dictionary;
    local_90.fields._current.fields.value = local_b8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_b8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_b8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_b8.fields._36_4_;
    while( true ) {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_MoveNext__
                        );
      __this_00 = local_90.fields._current.fields.value;
      if (!bVar1) break;
      if ((Model_IEMCMOPNPEA_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Model_IEMCMOPNPEA_<>c_TypeInfo);
      }
      action = Model_IEMCMOPNPEA_<>c_TypeInfo->static_fields->__9__3_0;
      if (action == (System_Action_OIGAJAKPPEO__o *)0x0) {
        if ((Model_IEMCMOPNPEA_<>c_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(Model_IEMCMOPNPEA_<>c_TypeInfo);
        }
        action = (System_Action_OIGAJAKPPEO__o *)
                 thunk_FUN_01bda818(System_Action<OIGAJAKPPEO>_TypeInfo);
        System_Action<object>___ctor();
        ppSVar3 = &Model_IEMCMOPNPEA_<>c_TypeInfo->static_fields->__9__3_0;
        *ppSVar3 = action;
        thunk_FUN_01c20e04(ppSVar3,action);
      }
      if ((System_Collections_Generic_List_object__o *)__this_00 ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      System_Collections_Generic_List<object>__ForEach
                ((System_Collections_Generic_List_object__o *)__this_00,(System_Action_T__o *)action
                 ,Method_System_Collections_Generic_List<OIGAJAKPPEO>_ForEach__);
      length = ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_size;
      ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_size = 0;
      ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_version =
           ((System_Collections_Generic_List_object__Fields *)((long)__this_00 + 0x10))->_version +
           1;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)
                            ((System_Collections_Generic_List_object__Fields *)
                            ((long)__this_00 + 0x10))->_items,0,length,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_List<OIGAJAKPPEO>>_Dispose__
              );
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE
    ;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object,_object>__Clear
                (pSVar2,
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Clear__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void BOPOPKLPHOJ(string KGLJICLJHEL, OIGAJAKPPEO BCKBBGCOMJD)  [RVA 0x34F8350]
// Model.IEMCMOPNPEA$$BOPOPKLPHOJ @ RVA 0x34F8350

void Model_IEMCMOPNPEA__BOPOPKLPHOJ
               (Model_IEMCMOPNPEA_o *__this,System_String_o *KGLJICLJHEL,
               OIGAJAKPPEO_o *BCKBBGCOMJD,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  UnityEngine_GameObject_o *__this_00;
  System_Object_array *pSVar6;
  
  if ((DAT_0456880c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<OIGAJAKPPEO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<OIGAJAKPPEO>_TypeInfo);
    DAT_0456880c = 1;
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).EHJHKEEDKBE;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar4,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_ContainsKey__
                      );
    if (!bVar3) {
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EHJHKEEDKBE;
      pSVar5 = (System_Collections_Generic_List_object__o *)
               thunk_FUN_01bda818(System_Collections_Generic_List<OIGAJAKPPEO>_TypeInfo);
      System_Collections_Generic_List<object>___ctor
                (pSVar5,Method_System_Collections_Generic_List<OIGAJAKPPEO>__ctor__);
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_035f84dc;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar4,(Il2CppObject *)KGLJICLJHEL,(Il2CppObject *)pSVar5,
                 Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_Add__);
    }
    if ((BCKBBGCOMJD != (OIGAJAKPPEO_o *)0x0) &&
       (__this_00 = (BCKBBGCOMJD->fields).super.LDAKOINICNJ,
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).EHJHKEEDKBE;
      if ((pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
         (pSVar5 = (System_Collections_Generic_List_object__o *)
                   System_Collections_Generic_Dictionary<object,_object>__get_Item
                             (pSVar4,(Il2CppObject *)KGLJICLJHEL,
                              Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_get_Item__
                             ), lVar2 = Method_System_Collections_Generic_List<OIGAJAKPPEO>_Add__,
         pSVar5 != (System_Collections_Generic_List_object__o *)0x0)) {
        pSVar6 = (pSVar5->fields)._items;
        (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
        if (pSVar6 != (System_Object_array *)0x0) {
          uVar1 = (pSVar5->fields)._size;
          if (uVar1 < (uint)pSVar6->max_length) {
            (pSVar5->fields)._size = uVar1 + 1;
            pSVar6->m_Items[(int)uVar1] = (Il2CppObject *)BCKBBGCOMJD;
            thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar1,BCKBBGCOMJD);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar5,(Il2CppObject *)BCKBBGCOMJD,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_035f84dc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34F84E0]
// Model.IEMCMOPNPEA$$.ctor @ RVA 0x34F84E0

void Model_IEMCMOPNPEA___ctor(Model_IEMCMOPNPEA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456880d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_TypeInfo);
    DAT_0456880d = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_List<OIGAJAKPPEO>>__ctor__);
  (__this->fields).EHJHKEEDKBE =
       (System_Collections_Generic_Dictionary_string__List_OIGAJAKPPEO___o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

