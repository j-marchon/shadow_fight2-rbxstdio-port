// TypeDefIndex 2862
// Namespace: 
// public class HIKAFDOGMMH
// Fields:
//   private const string NDIBMJGLLIN = "console_aliases.json";
//   private List<KeyValuePair<string, string>> OMPBOMHFJDN; // 0x10
//   private static HIKAFDOGMMH CBDMFFMCJBK; // 0x0

// ===== public void .ctor()  [RVA 0x343AC28]
// HIKAFDOGMMH$$.ctor @ RVA 0x343AC28

void HIKAFDOGMMH___ctor(HIKAFDOGMMH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_string__string___o *pSVar1;
  System_String_o *EIJDDKJONFO;
  MethodInfo *extraout_x1;
  MethodInfo *in_x4;
  HIKAFDOGMMH_Fields *pHVar2;
  
  if ((DAT_045681cd & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo);
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&StringLiteral_17341/*"console_aliases.json"*/);
    DAT_045681cd = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_KeyValuePair_string__string___o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KeyValuePair<string,_string>>_TypeInfo
                              ,method);
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)pSVar1,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>__ctor__);
  pHVar2 = &__this->fields;
  pHVar2->OMPBOMHFJDN = pSVar1;
  thunk_FUN_01c20e04(pHVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pSVar1 = pHVar2->OMPBOMHFJDN;
  if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  EIJDDKJONFO = MGENAMAJALB__GNOADHJNPCJ((MethodInfo *)0x0);
  HIKAFDOGMMH__FENMKGOFPDM
            ((HIKAFDOGMMH_o *)EIJDDKJONFO,pSVar1,EIJDDKJONFO,StringLiteral_17341/*"console_aliases.json"*/,in_x4);
  return;
}


// ===== private static void GIENGNEGHPJ()  [RVA 0x343AF2C]
// HIKAFDOGMMH$$GIENGNEGHPJ @ RVA 0x343AF2C

void HIKAFDOGMMH__GIENGNEGHPJ(MethodInfo *method)

{
  HIKAFDOGMMH_o *__this;
  undefined1 auVar1 [16];
  
  if ((DAT_045681ce & 1) == 0) {
    FUN_01bab630(&HIKAFDOGMMH_TypeInfo);
    DAT_045681ce = 1;
  }
  if (HIKAFDOGMMH_TypeInfo->static_fields->CBDMFFMCJBK != (HIKAFDOGMMH_o *)0x0) {
    return;
  }
  auVar1 = thunk_FUN_01bda818();
  __this = auVar1._0_8_;
  HIKAFDOGMMH___ctor(__this,auVar1._8_8_);
  HIKAFDOGMMH_TypeInfo->static_fields->CBDMFFMCJBK = __this;
  thunk_FUN_01c20e04(HIKAFDOGMMH_TypeInfo->static_fields,__this);
  return;
}


// ===== public static string FGBMPLNNFHP(string DHCOILBOGHE)  [RVA 0x343AFA8]
// HIKAFDOGMMH$$FGBMPLNNFHP @ RVA 0x343AFA8

System_String_o * HIKAFDOGMMH__FGBMPLNNFHP(System_String_o *DHCOILBOGHE,MethodInfo *method)

{
  Il2CppObject *value;
  System_String_o *newValue;
  bool bVar1;
  MethodInfo *method_00;
  System_Collections_Generic_List_KeyValuePair_string__string___o *__this;
  System_String_o *pSVar2;
  HIKAFDOGMMH_o *pHVar3;
  System_Collections_Generic_List_Enumerator_T__o local_80;
  System_String_o *pSStack_68;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  System_String_o *pSStack_48;
  
  method_00 = (MethodInfo *)DHCOILBOGHE;
  if ((DAT_045681cf & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_get_Current__
                );
    FUN_01bab630(&HIKAFDOGMMH_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<string,_string>_get_Value__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__
                );
    method_00 = (MethodInfo *)FUN_01bab630(&StringLiteral_167/*" "*/);
    DAT_045681cf = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pSStack_48 = (System_String_o *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  HIKAFDOGMMH__GIENGNEGHPJ(method_00);
  pHVar3 = HIKAFDOGMMH_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((pHVar3 == (HIKAFDOGMMH_o *)0x0) ||
     (__this = (pHVar3->fields).OMPBOMHFJDN,
     __this == (System_Collections_Generic_List_KeyValuePair_string__string___o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
            (&local_80,(System_Collections_Generic_List_T__o *)__this,
             Method_System_Collections_Generic_List<KeyValuePair<string,_string>>_GetEnumerator__);
  local_60.fields._index = local_80.fields._index;
  local_60.fields._version = local_80.fields._version;
  local_60.fields._list = local_80.fields._list;
  pSStack_48 = pSStack_68;
  local_60.fields._current = local_80.fields._current;
  do {
    do {
      bVar1 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_MoveNext__
                        );
      newValue = pSStack_48;
      value = local_60.fields._current;
      pSVar2 = DHCOILBOGHE;
      if ((!bVar1) ||
         (bVar1 = System_String__op_Equality
                            ((System_String_o *)local_60.fields._current,DHCOILBOGHE,
                             (MethodInfo *)0x0), pSVar2 = newValue, bVar1)) goto LAB_0353b10c;
      if (DHCOILBOGHE == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar1 = System_String__StartsWith(DHCOILBOGHE,(System_String_o *)value,(MethodInfo *)0x0);
    } while (!bVar1);
    if ((System_String_o *)value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar1 = System_String__EndsWith((System_String_o *)value,StringLiteral_167/*" "*/,(MethodInfo *)0x0);
  } while (!bVar1);
  pSVar2 = System_String__Replace(DHCOILBOGHE,(System_String_o *)value,newValue,(MethodInfo *)0x0);
LAB_0353b10c:
  System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
            (&local_60,
             Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_string>>_Dispose__
            );
  return pSVar2;
}


// ===== private void FENMKGOFPDM(List<KeyValuePair<string, string>> ELOCKFLGKNO, string EIJDDKJONFO, string JAFADHFFBPK)  [RVA 0x343AD08]
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


// ===== public static List<KeyValuePair<string, string>> FMJHKOAGJPF()  [RVA 0x343B1BC]
// HIKAFDOGMMH$$FMJHKOAGJPF @ RVA 0x343B1BC

System_Collections_Generic_List_KeyValuePair_string__string___o *
HIKAFDOGMMH__FMJHKOAGJPF(MethodInfo *method)

{
  HIKAFDOGMMH_o *pHVar1;
  
  if ((DAT_045681d1 & 1) == 0) {
    method = (MethodInfo *)FUN_01bab630(&HIKAFDOGMMH_TypeInfo);
    DAT_045681d1 = 1;
  }
  HIKAFDOGMMH__GIENGNEGHPJ(method);
  pHVar1 = HIKAFDOGMMH_TypeInfo->static_fields->CBDMFFMCJBK;
  if (pHVar1 != (HIKAFDOGMMH_o *)0x0) {
    return (pHVar1->fields).OMPBOMHFJDN;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

