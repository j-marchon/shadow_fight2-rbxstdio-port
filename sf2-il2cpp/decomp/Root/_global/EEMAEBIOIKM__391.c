// TypeDefIndex 391
// Namespace: 
// public static class EEMAEBIOIKM
// Fields:
//   private static readonly Dictionary<string, List<KeyValuePair<string, Sprite>>> JMCDIEANFCM; // 0x0
//   private static readonly bool HEKGKIBPBPI; // 0x8

// ===== private static void .cctor()  [RVA 0x347FD70]
// EEMAEBIOIKM$$.cctor @ RVA 0x347FD70

void EEMAEBIOIKM___cctor(MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
                    /* catch() { ... } // from try @ 0357fd38 with catch @ 0357fd74
                       catch() { ... } // from try @ 0357fd6c with catch @ 0357fd74 */
  if ((DAT_04568374 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TypeInfo
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    DAT_04568374 = 1;
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(
                             System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TypeInfo
                             );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this,
             Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>__ctor__
            );
  EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM =
       (System_Collections_Generic_Dictionary_string__List_KeyValuePair_string__Sprite____o *)__this
  ;
  thunk_FUN_01c20e04(EEMAEBIOIKM_TypeInfo->static_fields,__this);
  bVar1 = Nekki_SF2_Core_ApplicationController__IsInEditor((MethodInfo *)0x0);
  EEMAEBIOIKM_TypeInfo->static_fields->HEKGKIBPBPI = (bool_conflict)(~bVar1 & 1);
  return;
}


// ===== public static Sprite GKMHEGHFEDN(string OOKEKJMFKPE, string HCAAAAMDCNO)  [RVA 0x347FE28]
// EEMAEBIOIKM$$GKMHEGHFEDN @ RVA 0x347FE28

UnityEngine_Sprite_o *
EEMAEBIOIKM__GKMHEGHFEDN
          (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  int index;
  System_Collections_Generic_KeyValuePair_object__object__o SVar2;
  System_Collections_Generic_List_T__o *local_28;
  
  if ((DAT_04568375 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TryGetValue__
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_get_Item__);
    DAT_04568375 = 1;
  }
  local_28 = (System_Collections_Generic_List_T__o *)0x0;
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (EEMAEBIOIKM_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (__this,(Il2CppObject *)OOKEKJMFKPE,(Il2CppObject **)&local_28,
                       Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TryGetValue__
                      );
    if (!bVar1) {
      return (UnityEngine_Sprite_o *)0x0;
    }
    if (local_28 != (System_Collections_Generic_List_T__o *)0x0) {
      index = 0;
      do {
        if ((local_28->fields)._size <= index) {
          return (UnityEngine_Sprite_o *)0x0;
        }
        SVar2 = System_Collections_Generic_List<KeyValuePair<object,_object>>__get_Item
                          (local_28,index,
                           Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_get_Item__
                          );
        bVar1 = System_String__op_Equality
                          ((System_String_o *)SVar2.fields.key,HCAAAAMDCNO,(MethodInfo *)0x0);
        if (bVar1) {
          return (UnityEngine_Sprite_o *)SVar2.fields.value;
        }
        index = index + 1;
      } while (local_28 != (System_Collections_Generic_List_T__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void NDNPGAKJLHM()  [RVA 0x347FF64]
// EEMAEBIOIKM$$NDNPGAKJLHM @ RVA 0x347FF64

void EEMAEBIOIKM__NDNPGAKJLHM(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
  if ((DAT_04568376 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_Clear__
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    DAT_04568376 = 1;
  }
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__Clear
              (__this,
               Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_Clear__
              );
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static void GADEAHMJDCN(string OOKEKJMFKPE, string HCAAAAMDCNO, Sprite DMMLPNCPPHD)  [RVA 0x347FFDC]
// EEMAEBIOIKM$$GADEAHMJDCN @ RVA 0x347FFDC

void EEMAEBIOIKM__GADEAHMJDCN
               (System_String_o *OOKEKJMFKPE,System_String_o *HCAAAAMDCNO,
               UnityEngine_Sprite_o *DMMLPNCPPHD,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_KeyValuePair_object__object__o item;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  MethodInfo_2639E28 *in_x4;
  System_Object_array *pSVar6;
  System_Collections_Generic_KeyValuePair_object__object__o __this;
  Il2CppObject local_48;
  System_Collections_Generic_List_T__o *local_38;
  
  if ((DAT_04568377 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TryGetValue__
                );
    FUN_01bab630(&EEMAEBIOIKM_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_Sprite>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568377 = 1;
  }
  local_38 = (System_Collections_Generic_List_T__o *)0x0;
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (EEMAEBIOIKM_TypeInfo->static_fields->HEKGKIBPBPI == false) {
    return;
  }
  if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
           EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object,_object>__TryGetValue
                      (pSVar4,(Il2CppObject *)OOKEKJMFKPE,(Il2CppObject **)&local_38,
                       Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_TryGetValue__
                      );
    if (!bVar3) {
      pSVar5 = (System_Collections_Generic_List_T__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_TypeInfo
                                 );
      System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
                (pSVar5,Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>__ctor__
                );
      local_38 = pSVar5;
      if ((EEMAEBIOIKM_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
               EEMAEBIOIKM_TypeInfo->static_fields->JMCDIEANFCM;
      if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03580200;
      System_Collections_Generic_Dictionary<object,_object>__Add
                (pSVar4,(Il2CppObject *)OOKEKJMFKPE,(Il2CppObject *)local_38,
                 Method_System_Collections_Generic_Dictionary<string,_List<KeyValuePair<string,_Sprite>>>_Add__
                );
    }
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)DMMLPNCPPHD,(UnityEngine_Object_o *)0x0,
                       (MethodInfo *)0x0);
    pSVar5 = local_38;
    if (!bVar3) {
      return;
    }
    local_48.klass = (Il2CppClass *)0x0;
    local_48.monitor = (Il2CppObject *)0x0;
    __this.fields.value = (Il2CppObject *)HCAAAAMDCNO;
    __this.fields.key = &local_48;
    System_Collections_Generic_KeyValuePair<object,_object>___ctor
              (__this,(Il2CppObject *)DMMLPNCPPHD,
               Method_System_Collections_Generic_KeyValuePair<string,_Sprite>__ctor__,in_x4);
    lVar2 = Method_System_Collections_Generic_List<KeyValuePair<string,_Sprite>>_Add__;
    if (pSVar5 != (System_Collections_Generic_List_T__o *)0x0) {
      item.fields.value = local_48.monitor;
      item.fields.key = (Il2CppObject *)local_48.klass;
      pSVar6 = (pSVar5->fields)._items;
      (pSVar5->fields)._version = (pSVar5->fields)._version + 1;
      if (pSVar6 != (System_Object_array *)0x0) {
        uVar1 = (pSVar5->fields)._size;
        if (uVar1 < (uint)pSVar6->max_length) {
          (pSVar5->fields)._size = uVar1 + 1;
          pSVar6->m_Items[(long)(int)uVar1 * 2] = (Il2CppObject *)local_48.klass;
          pSVar6->m_Items[(long)(int)uVar1 * 2 + 1] = local_48.monitor;
          thunk_FUN_01c20e04(pSVar6->m_Items + (long)(int)uVar1 * 2,0);
          return;
        }
        System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                  (pSVar5,item,
                   *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
LAB_03580200:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

