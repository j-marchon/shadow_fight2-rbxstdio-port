// TypeDefIndex 3149
// Namespace: 
// public class DCHAJIMIFHP
// Fields:
//   private Dictionary<string, Action<KEFHDOHHHML>> HOECLHGDCCJ; // 0x10

// ===== public void GMNFJKHEJLO(object ANGBPBINHBL)  [RVA 0x34D84A0]
// DCHAJIMIFHP$$GMNFJKHEJLO @ RVA 0x34D84A0

void DCHAJIMIFHP__GMNFJKHEJLO(DCHAJIMIFHP_o *__this,Il2CppObject *ANGBPBINHBL,MethodInfo *method)

{
  System_Collections_Generic_KeyValuePair_object__object__o item;
  System_Action_KEFHDOHHHML__c *pSVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_T__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  long lVar5;
  System_Delegate_o *pSVar6;
  System_Action_T__o *source;
  MethodInfo_2639E28 *in_x4;
  System_Object_array *pSVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  System_Collections_Generic_KeyValuePair_object__object__o __this_01;
  undefined1 local_d8 [8];
  Il2CppObject *pIStack_d0;
  Il2CppObject *local_c8;
  System_Action_T__o *pSStack_c0;
  int32_t local_b8;
  undefined4 uStack_b4;
  System_Collections_Generic_List_Enumerator_T__o local_b0;
  Il2CppObject *pIStack_98;
  undefined1 local_90 [8];
  Il2CppObject *pIStack_88;
  Il2CppObject *local_80;
  System_Action_T__o *pSStack_78;
  undefined8 local_70;
  
  if ((DAT_045686ef & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Action<KEFHDOHHHML>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Action<KEFHDOHHHML>>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Action<KEFHDOHHHML>>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Action<KEFHDOHHHML>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<string,_Action<KEFHDOHHHML>>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Action<KEFHDOHHHML>>>_get_Current__
                );
    FUN_01bab630(&Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Action<KEFHDOHHHML>>__ctor__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Action<KEFHDOHHHML>>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<string,_Action<KEFHDOHHHML>>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>__ctor__
                );
    FUN_01bab630(&
                 System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>_TypeInfo
                );
    DAT_045686ef = 1;
  }
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  pIStack_88 = (Il2CppObject *)0x0;
  local_90 = (undefined1  [8])0x0;
  pSStack_78 = (System_Action_T__o *)0x0;
  local_80 = (Il2CppObject *)0x0;
  local_b0.fields._index = 0;
  local_b0.fields._version = 0;
  local_b0.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  pIStack_98 = (Il2CppObject *)0x0;
  local_b0.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_T__o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<object,_object>>___ctor
            (__this_00,0x10,
             Method_System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>__ctor__
            );
  pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ;
  if (pSVar4 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object,_object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_d8,pSVar4,
               Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_GetEnumerator__
              );
    pIStack_88 = pIStack_d0;
    local_90 = local_d8;
    pSStack_78 = pSStack_c0;
    local_80 = local_c8;
    local_70._0_4_ = local_b8;
    local_70._4_4_ = uStack_b4;
    while (bVar3 = System_Collections_Generic_Dictionary_Enumerator<object,_object>__MoveNext
                             ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                              local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<string,_Action<KEFHDOHHHML>>_MoveNext__
                             ), source = pSStack_78, pIVar2 = local_80, bVar3) {
      bVar3 = FDAHDCHADGJ__BDLEIEHBFAD<object>
                        (pSStack_78,Method_FDAHDCHADGJ_BDLEIEHBFAD<KEFHDOHHHML>__);
      if (!bVar3) {
        if (source == (System_Action_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        lVar5 = (*(source->klass->vtable)._10_GetInvocationList.methodPtr)
                          (source,(source->klass->vtable)._10_GetInvocationList.method);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar8 = *(uint *)(lVar5 + 0x18);
        if (0 < (int)uVar8) {
          uVar9 = 0;
          bVar3 = false;
          do {
            pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
            if (uVar8 <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8d0();
            }
            lVar10 = *(long *)(lVar5 + (long)(int)uVar9 * 8 + 0x20);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (*(Il2CppObject **)(lVar10 + 0x20) == ANGBPBINHBL) {
              pSVar6 = (System_Delegate_o *)
                       thunk_FUN_01bda71c(lVar10,System_Action<KEFHDOHHHML>_TypeInfo);
              if (pSVar6 == (System_Delegate_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01babc64(lVar10,pSVar1);
              }
              pSVar6 = System_Delegate__Remove((System_Delegate_o *)source,pSVar6,(MethodInfo *)0x0)
              ;
              pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
              if (pSVar6 == (System_Delegate_o *)0x0) {
                source = (System_Action_T__o *)0x0;
              }
              else {
                source = (System_Action_T__o *)
                         thunk_FUN_01bda71c(pSVar6,System_Action<KEFHDOHHHML>_TypeInfo);
                if (source == (System_Action_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_01babc64(pSVar6,pSVar1);
                }
              }
              bVar3 = true;
            }
            uVar8 = *(uint *)(lVar5 + 0x18);
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)uVar8);
          if (bVar3) {
            local_d8 = (undefined1  [8])0x0;
            pIStack_d0 = (Il2CppObject *)0x0;
            __this_01.fields.value = pIVar2;
            __this_01.fields.key = (Il2CppObject *)local_d8;
            System_Collections_Generic_KeyValuePair<object,_object>___ctor
                      (__this_01,(Il2CppObject *)source,
                       Method_System_Collections_Generic_KeyValuePair<string,_Action<KEFHDOHHHML>>__ctor__
                       ,in_x4);
            lVar5 = 
            Method_System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>_Add__;
            if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            item.fields.value = pIStack_d0;
            item.fields.key = (Il2CppObject *)local_d8;
            pSVar7 = (__this_00->fields)._items;
            (__this_00->fields)._version = (__this_00->fields)._version + 1;
            if (pSVar7 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar8 = (__this_00->fields)._size;
            if (uVar8 < (uint)pSVar7->max_length) {
              (__this_00->fields)._size = uVar8 + 1;
              pSVar7->m_Items[(long)(int)uVar8 * 2] = (Il2CppObject *)local_d8;
              pSVar7->m_Items[(long)(int)uVar8 * 2 + 1] = pIStack_d0;
              thunk_FUN_01c20e04(pSVar7->m_Items + (long)(int)uVar8 * 2,0);
            }
            else {
              System_Collections_Generic_List<KeyValuePair<object,_object>>__AddWithResize
                        (__this_00,item,
                         *(MethodInfo_266FF2C **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<object,_object>__Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<string,_Action<KEFHDOHHHML>>_Dispose__
              );
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List<KeyValuePair<object,_object>>__GetEnumerator
                (&local_b0,__this_00,
                 Method_System_Collections_Generic_List<KeyValuePair<string,_Action<KEFHDOHHHML>>>_GetEnumerator__
                );
      while( true ) {
        bVar3 = System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__MoveNext
                          (&local_b0,
                           Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Action<KEFHDOHHHML>>>_MoveNext__
                          );
        if (!bVar3) {
          System_Collections_Generic_List_Enumerator<KeyValuePair<object,_object>>__Dispose
                    (&local_b0,
                     Method_System_Collections_Generic_List_Enumerator<KeyValuePair<string,_Action<KEFHDOHHHML>>>_Dispose__
                    );
          return;
        }
        pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields).HOECLHGDCCJ;
        if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (pSVar4,local_b0.fields._current,pIStack_98,
                   Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                  );
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void COEFNEICBLH(string PMACBPAMPJA, Action<KEFHDOHHHML> EKDIECDFOIO)  [RVA 0x34D8980]
// DCHAJIMIFHP$$COEFNEICBLH @ RVA 0x34D8980

void DCHAJIMIFHP__COEFNEICBLH
               (DCHAJIMIFHP_o *__this,System_String_o *PMACBPAMPJA,
               System_Action_KEFHDOHHHML__o *EKDIECDFOIO,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *value;
  
  if ((DAT_045686f0 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                );
    DAT_045686f0 = 1;
  }
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                      );
    if (!bVar2) {
      return;
    }
    FDAHDCHADGJ__FFPEGNCKDLO((System_Delegate_o *)EKDIECDFOIO,(MethodInfo *)0x0);
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      pSVar4 = (System_Delegate_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                          Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                         );
      pSVar4 = System_Delegate__Remove(pSVar4,(System_Delegate_o *)EKDIECDFOIO,(MethodInfo *)0x0);
      pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
      if (pSVar4 == (System_Delegate_o *)0x0) {
        value = (Il2CppObject *)0x0;
      }
      else {
        value = (Il2CppObject *)thunk_FUN_01bda71c(pSVar4,System_Action<KEFHDOHHHML>_TypeInfo);
        if (value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4,pSVar1);
        }
      }
      pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).HOECLHGDCCJ;
      if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object,_object>__set_Item
                  (pSVar3,(Il2CppObject *)PMACBPAMPJA,value,
                   Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                  );
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MJKJHFHHFNG(string PMACBPAMPJA, KEFHDOHHHML NONPLOOOOAG)  [RVA 0x34D8AA0]
// DCHAJIMIFHP$$MJKJHFHHFNG @ RVA 0x34D8AA0

void DCHAJIMIFHP__MJKJHFHHFNG
               (DCHAJIMIFHP_o *__this,System_String_o *PMACBPAMPJA,KEFHDOHHHML_o *NONPLOOOOAG,
               MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Il2CppObject *pIVar3;
  
  if ((DAT_045686f1 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                );
    DAT_045686f1 = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                      );
    if (bVar1) {
      pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields).HOECLHGDCCJ;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_035d8b58;
      pIVar3 = System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)PMACBPAMPJA,
                          Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                         );
      if (pIVar3 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x035d8b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pIVar3[1].monitor)(pIVar3[4].klass,NONPLOOOOAG,pIVar3[2].monitor);
        return;
      }
    }
    return;
  }
LAB_035d8b58:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MPFFOIIBAKO(string PMACBPAMPJA, Action<KEFHDOHHHML> EKDIECDFOIO)  [RVA 0x34D8B5C]
// DCHAJIMIFHP$$MPFFOIIBAKO @ RVA 0x34D8B5C

void DCHAJIMIFHP__MPFFOIIBAKO
               (DCHAJIMIFHP_o *__this,System_String_o *PMACBPAMPJA,
               System_Action_KEFHDOHHHML__o *EKDIECDFOIO,MethodInfo *method)

{
  System_Action_KEFHDOHHHML__c *pSVar1;
  bool bVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *value;
  
  if ((DAT_045686f2 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_Add__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                );
    DAT_045686f2 = 1;
  }
  FDAHDCHADGJ__FFPEGNCKDLO((System_Delegate_o *)EKDIECDFOIO,(MethodInfo *)0x0);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ;
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                       Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_ContainsKey__
                      );
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).HOECLHGDCCJ
    ;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      if (!bVar2) {
        System_Collections_Generic_Dictionary<object,_object>__Add
                  (pSVar3,(Il2CppObject *)PMACBPAMPJA,(Il2CppObject *)EKDIECDFOIO,
                   Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_Add__);
        return;
      }
      pSVar4 = (System_Delegate_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar3,(Il2CppObject *)PMACBPAMPJA,
                          Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_get_Item__
                         );
      pSVar4 = System_Delegate__Combine(pSVar4,(System_Delegate_o *)EKDIECDFOIO,(MethodInfo *)0x0);
      pSVar1 = System_Action<KEFHDOHHHML>_TypeInfo;
      if (pSVar4 == (System_Delegate_o *)0x0) {
        value = (Il2CppObject *)0x0;
      }
      else {
        value = (Il2CppObject *)thunk_FUN_01bda71c(pSVar4,System_Action<KEFHDOHHHML>_TypeInfo);
        if (value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01babc64(pSVar4,pSVar1);
        }
      }
      System_Collections_Generic_Dictionary<object,_object>__set_Item
                (pSVar3,(Il2CppObject *)PMACBPAMPJA,value,
                 Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_set_Item__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34D8CA0]
// DCHAJIMIFHP$$.ctor @ RVA 0x34D8CA0

void DCHAJIMIFHP___ctor(DCHAJIMIFHP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_045686f3 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>__ctor__)
    ;
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_TypeInfo);
    DAT_045686f3 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_00,
             Method_System_Collections_Generic_Dictionary<string,_Action<KEFHDOHHHML>>__ctor__);
  (__this->fields).HOECLHGDCCJ =
       (System_Collections_Generic_Dictionary_string__Action_KEFHDOHHHML___o *)__this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

