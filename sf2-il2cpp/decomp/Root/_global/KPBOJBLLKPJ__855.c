// TypeDefIndex 855
// Namespace: 
// public class KPBOJBLLKPJ
// Fields:
//   private List<KeyValuePair<CKLIGNAPKFO, KOPGBBHMPDP>> LOBBELCAMJC; // 0x10
//   private Dictionary<CKLIGNAPKFO, List<ODKDFMHHLIP>> NGKLIODAFAG; // 0x18
//   private int HPMNDFPMJFG; // 0x20

// ===== protected void GBDKELGIOEK(CKLIGNAPKFO ACCIHBHMFPN)  [RVA 0x3088200]
// KPBOJBLLKPJ$$GBDKELGIOEK @ RVA 0x3088200

void KPBOJBLLKPJ__GBDKELGIOEK(KPBOJBLLKPJ_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  uint length;
  int iVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if ((DAT_04566031 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_Clear__);
    DAT_04566031 = 1;
  }
  KPBOJBLLKPJ__NBKAMBPCHNJ(__this,ACCIHBHMFPN,method);
  __this_00 = (__this->fields).NGKLIODAFAG;
  if ((__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0)
     && (pIVar2 = System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                             ACCIHBHMFPN,
                             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                            ), pIVar2 != (Il2CppObject *)0x0)) {
    length = *(uint *)&pIVar2[1].monitor;
    method_00 = (MethodInfo *)(ulong)length;
    iVar1 = *(int *)((long)&pIVar2[1].monitor + 4);
    *(undefined4 *)&pIVar2[1].monitor = 0;
    *(int *)((long)&pIVar2[1].monitor + 4) = iVar1 + 1;
    if (0 < (int)length) {
      System_Array__Clear((System_Array_o *)pIVar2[1].klass,0,length,(MethodInfo *)0x0);
    }
    KPBOJBLLKPJ__ICKMLIPLCLC(__this,ACCIHBHMFPN,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void FNPAHFFOFJL(CKLIGNAPKFO BOFAKAEIMME, ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x3088560]
// KPBOJBLLKPJ$$FNPAHFFOFJL @ RVA 0x3088560

void KPBOJBLLKPJ__FNPAHFFOFJL
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  long *plVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  long *local_48;
  
  if ((DAT_04566032 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_get_Current__
                );
    FUN_01bab630(&KOPGBBHMPDP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
                );
    DAT_04566032 = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48 = (long *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOBBELCAMJC;
  if (__this_00 == (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
  {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
            );
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                        );
      plVar1 = local_48;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                  );
        return;
      }
    } while ((int)local_60.fields._current != BOFAKAEIMME);
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *local_48;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(KOPGBBHMPDP_c **)(piVar6 + -2) == KOPGBBHMPDP_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_03188698;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(local_48,KOPGBBHMPDP_TypeInfo,2);
LAB_03188698:
    (*(code *)*puVar3)(plVar1,IHNKCJHDDKD,puVar3[1]);
  } while( true );
}


// ===== protected void .ctor(int KOKFCIFNNCC)  [RVA 0x3088744]
// KPBOJBLLKPJ$$.ctor @ RVA 0x3088744

void KPBOJBLLKPJ___ctor(KPBOJBLLKPJ_o *__this,int32_t KOKFCIFNNCC,MethodInfo *method)

{
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *__this_01;
  System_Collections_Generic_List_object__o *__this_02;
  int key;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o **ppSVar1;
  
  if ((DAT_04566033 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_TypeInfo);
    DAT_04566033 = 1;
  }
  __this_00 = (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_TypeInfo
                                );
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>___ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__ctor__)
  ;
  (__this->fields).LOBBELCAMJC = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>__ctor__);
  ppSVar1 = &(__this->fields).NGKLIODAFAG;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).HPMNDFPMJFG = KOKFCIFNNCC;
  key = 1;
  do {
    __this_02 = (System_Collections_Generic_List_object__o *)
                thunk_FUN_01bda818(System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this_02,Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
    if (*ppSVar1 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0)
    {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)*ppSVar1,key,
               (Il2CppObject *)__this_02,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__);
    key = key + 1;
  } while (key != 5);
  return;
}


// ===== protected void DLHHBAABHEE(ODKDFMHHLIP NONPLOOOOAG)  [RVA 0x30888B4]
// KPBOJBLLKPJ$$DLHHBAABHEE @ RVA 0x30888B4

void KPBOJBLLKPJ__DLHHBAABHEE(KPBOJBLLKPJ_o *__this,ODKDFMHHLIP_o *NONPLOOOOAG,MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  MethodInfo *in_x3;
  ODKDFMHHLIP_array *pOVar3;
  
  if ((DAT_04566034 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_Add__);
    DAT_04566034 = 1;
  }
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    ACCIHBHMFPN = (NONPLOOOOAG->fields).MOIGDPBNMNI;
    __this_00 = KPBOJBLLKPJ__NBKAMBPCHNJ(__this,ACCIHBHMFPN,method);
    lVar2 = Method_System_Collections_Generic_List<ODKDFMHHLIP>_Add__;
    if (__this_00 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
      pOVar3 = (__this_00->fields)._items;
      (__this_00->fields)._version = (__this_00->fields)._version + 1;
      if (pOVar3 != (ODKDFMHHLIP_array *)0x0) {
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pOVar3->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pOVar3->m_Items[(int)uVar1] = NONPLOOOOAG;
          thunk_FUN_01c20e04(pOVar3->m_Items + (int)uVar1,NONPLOOOOAG);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_00,
                     (Il2CppObject *)NONPLOOOOAG,
                     *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        }
        KPBOJBLLKPJ__FNPAHFFOFJL(__this,ACCIHBHMFPN,NONPLOOOOAG,in_x3);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== private void HDJJADNLHKG(CKLIGNAPKFO BOFAKAEIMME, int DPJIDNBJIBG)  [RVA 0x3088988]
// KPBOJBLLKPJ$$HDJJADNLHKG @ RVA 0x3088988

void KPBOJBLLKPJ__HDJJADNLHKG
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,int32_t DPJIDNBJIBG,MethodInfo *method)

{
  long *plVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  long *local_48;
  
  if ((DAT_04566035 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_get_Current__
                );
    FUN_01bab630(&KOPGBBHMPDP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
                );
    DAT_04566035 = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48 = (long *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOBBELCAMJC;
  if (__this_00 == (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
  {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
            );
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                        );
      plVar1 = local_48;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                  );
        return;
      }
    } while ((int)local_60.fields._current != BOFAKAEIMME);
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *local_48;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(KOPGBBHMPDP_c **)(piVar6 + -2) == KOPGBBHMPDP_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 4) * 0x10 + 0x138);
          goto LAB_03188ac0;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(local_48,KOPGBBHMPDP_TypeInfo,4);
LAB_03188ac0:
    (*(code *)*puVar3)(plVar1,DPJIDNBJIBG,puVar3[1]);
  } while( true );
}


// ===== protected void DFHKMAIAPBJ(ODKDFMHHLIP NONPLOOOOAG, object IMMNELPBGIF)  [RVA 0x3088B6C]
// KPBOJBLLKPJ$$DFHKMAIAPBJ @ RVA 0x3088B6C

void KPBOJBLLKPJ__DFHKMAIAPBJ
               (KPBOJBLLKPJ_o *__this,ODKDFMHHLIP_o *NONPLOOOOAG,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    (*(NONPLOOOOAG->klass->vtable)._4_LLCONNGHGKD.methodPtr)
              (NONPLOOOOAG,IMMNELPBGIF,(NONPLOOOOAG->klass->vtable)._4_LLCONNGHGKD.method);
    KPBOJBLLKPJ__MIDCKCNDGGH(__this,(NONPLOOOOAG->fields).MOIGDPBNMNI,NONPLOOOOAG,method);
    return;
  }
  return;
}


// ===== public void DCLLOBOHLME(CKLIGNAPKFO BOFAKAEIMME, KOPGBBHMPDP PDALMPAOAFM)  [RVA 0x3088D98]
// KPBOJBLLKPJ$$DCLLOBOHLME @ RVA 0x3088D98

void KPBOJBLLKPJ__DCLLOBOHLME
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,KOPGBBHMPDP_o *PDALMPAOAFM,
               MethodInfo *method)

{
  int32_t key;
  uint uVar1;
  System_Collections_Generic_KeyValuePair_Int32Enum__object__o item;
  long lVar2;
  bool bVar3;
  Il2CppObject *__this_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *pSVar4;
  System_Collections_Generic_List_object__o *__this_01;
  System_Func_TSource__bool__o *predicate;
  MethodInfo_2639328 *in_x4;
  System_Collections_Generic_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP__array *pSVar5;
  KOPGBBHMPDP_o **ppKVar6;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *pSVar7;
  System_Collections_Generic_KeyValuePair_Int32Enum__object__o __this_02;
  undefined8 local_40;
  Il2CppObject *pIStack_38;
  
  if ((DAT_04566036 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                );
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>__ctor__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Add__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
    FUN_01bab630(&Method_KPBOJBLLKPJ_OELHACHMOOH_LJCAIHKOGBL__);
    FUN_01bab630(&KPBOJBLLKPJ_OELHACHMOOH_TypeInfo);
    FUN_01bab630(&StringLiteral_9617/*"Not valid channel"*/);
    DAT_04566036 = 1;
  }
  local_40 = 0;
  pIStack_38 = (Il2CppObject *)0x0;
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KPBOJBLLKPJ_OELHACHMOOH_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = PDALMPAOAFM;
    *(int32_t *)&__this_00[1].klass = BOFAKAEIMME;
    thunk_FUN_01c20e04(&__this_00[1].monitor,PDALMPAOAFM);
    bVar3 = ODKDFMHHLIP__NOBCLMOONLJ(*(int32_t *)&__this_00[1].klass,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_9617/*"Not valid channel"*/,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (__this->fields).NGKLIODAFAG;
    if (pSVar4 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,
                         *(int32_t *)&__this_00[1].klass,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                        );
      if (!bVar3) {
        pSVar4 = (__this->fields).NGKLIODAFAG;
        key = *(int32_t *)&__this_00[1].klass;
        __this_01 = (System_Collections_Generic_List_object__o *)
                    thunk_FUN_01bda818(System_Collections_Generic_List<ODKDFMHHLIP>_TypeInfo);
        System_Collections_Generic_List<object>___ctor
                  (__this_01,Method_System_Collections_Generic_List<ODKDFMHHLIP>__ctor__);
        if (pSVar4 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0
           ) goto LAB_0318902c;
        System_Collections_Generic_Dictionary<Int32Enum,_object>__Add
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar4,key,
                   (Il2CppObject *)__this_01,
                   Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_Add__
                  );
      }
      pSVar7 = (__this->fields).LOBBELCAMJC;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(
                                    System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo
                                    );
      System_Func<KeyValuePair<Int32Enum,_object>,_bool>___ctor();
      bVar3 = System_Linq_Enumerable__Any<KeyValuePair<Int32Enum,_object>>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,predicate,
                         Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__
                        );
      if (bVar3) {
        return;
      }
      __this_02.fields.value._0_4_ = *(undefined4 *)&__this_00[1].klass;
      __this_02.fields._0_8_ = &local_40;
      __this_02.fields.value._4_4_ = 0;
      System_Collections_Generic_KeyValuePair<Int32Enum,_object>___ctor
                (__this_02,(int32_t)__this_00[1].monitor,
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>__ctor__,
                 in_x4);
      lVar2 = Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Add__;
      pSVar7 = (__this->fields).LOBBELCAMJC;
      if (pSVar7 != (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0
         ) {
        item.fields.value = pIStack_38;
        item.fields._0_8_ = local_40;
        pSVar5 = (pSVar7->fields)._items;
        (pSVar7->fields)._version = (pSVar7->fields)._version + 1;
        if (pSVar5 != (System_Collections_Generic_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP__array *)0x0
           ) {
          uVar1 = (pSVar7->fields)._size;
          if (uVar1 < (uint)pSVar5->max_length) {
            (pSVar7->fields)._size = uVar1 + 1;
            ppKVar6 = &pSVar5->m_Items[(int)uVar1].fields.value;
            *ppKVar6 = (KOPGBBHMPDP_o *)pIStack_38;
            *(undefined8 *)&pSVar5->m_Items[(int)uVar1].fields = local_40;
            thunk_FUN_01c20e04(ppKVar6,0);
            return;
          }
          System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__AddWithResize
                    ((System_Collections_Generic_List_T__o *)pSVar7,item,
                     *(MethodInfo_2662950 **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
LAB_0318902c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void ICKMLIPLCLC(CKLIGNAPKFO BOFAKAEIMME)  [RVA 0x308838C]
// KPBOJBLLKPJ$$ICKMLIPLCLC @ RVA 0x308838C

void KPBOJBLLKPJ__ICKMLIPLCLC(KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,MethodInfo *method)

{
  long *plVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  System_Collections_Generic_List_Enumerator_T__o local_50;
  long *local_38;
  
  if ((DAT_04566037 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_get_Current__
                );
    FUN_01bab630(&KOPGBBHMPDP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
                );
    DAT_04566037 = 1;
  }
  local_50.fields._index = 0;
  local_50.fields._version = 0;
  local_50.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38 = (long *)0x0;
  local_50.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOBBELCAMJC;
  if (__this_00 == (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
  {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__GetEnumerator
            (&local_50,(System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
            );
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__MoveNext
                        (&local_50,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                        );
      plVar1 = local_38;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__Dispose
                  (&local_50,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                  );
        return;
      }
    } while ((int)local_50.fields._current != BOFAKAEIMME);
    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *local_38;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(KOPGBBHMPDP_c **)(piVar6 + -2) == KOPGBBHMPDP_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 5) * 0x10 + 0x138);
          goto LAB_031884bc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(local_38,KOPGBBHMPDP_TypeInfo,5);
LAB_031884bc:
    (*(code *)*puVar3)(plVar1,puVar3[1]);
  } while( true );
}


// ===== public virtual void JPGGPDEIENC(string NONPLOOOOAG, CKLIGNAPKFO HPIPAGINPJK)  [RVA 0x3089038]
// KPBOJBLLKPJ$$JPGGPDEIENC @ RVA 0x3089038

void KPBOJBLLKPJ__JPGGPDEIENC
               (KPBOJBLLKPJ_o *__this,System_String_o *NONPLOOOOAG,int32_t HPIPAGINPJK,
               MethodInfo *method)

{
  return;
}


// ===== public List<ODKDFMHHLIP> NBKAMBPCHNJ(CKLIGNAPKFO ACCIHBHMFPN)  [RVA 0x30882A4]
// KPBOJBLLKPJ$$NBKAMBPCHNJ @ RVA 0x30882A4

System_Collections_Generic_List_ODKDFMHHLIP__o *
KPBOJBLLKPJ__NBKAMBPCHNJ(KPBOJBLLKPJ_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *pSVar2;
  System_Collections_Generic_List_ODKDFMHHLIP__o *pSVar3;
  
  if ((DAT_04566038 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                );
    FUN_01bab630(&StringLiteral_4288/*"ChatMessageType Is Not Valid!!!"*/);
    DAT_04566038 = 1;
  }
  bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (__this->fields).NGKLIODAFAG;
    if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,ACCIHBHMFPN
                         ,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_ContainsKey__
                        );
      if (!bVar1) goto LAB_0318834c;
      pSVar2 = (__this->fields).NGKLIODAFAG;
      if (pSVar2 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__List_ODKDFMHHLIP___o *)0x0)
      {
        pSVar3 = (System_Collections_Generic_List_ODKDFMHHLIP__o *)
                 System_Collections_Generic_Dictionary<Int32Enum,_object>__get_Item
                           ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                            ACCIHBHMFPN,
                            Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_List<ODKDFMHHLIP>>_get_Item__
                           );
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0318834c:
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4288/*"ChatMessageType Is Not Valid!!!"*/,(MethodInfo *)0x0);
  return (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0;
}


// ===== private void MIDCKCNDGGH(CKLIGNAPKFO BOFAKAEIMME, ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x3088BB4]
// KPBOJBLLKPJ$$MIDCKCNDGGH @ RVA 0x3088BB4

void KPBOJBLLKPJ__MIDCKCNDGGH
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,ODKDFMHHLIP_o *IHNKCJHDDKD,
               MethodInfo *method)

{
  long *plVar1;
  bool bVar2;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *__this_00;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  System_Collections_Generic_List_Enumerator_T__o local_60;
  long *local_48;
  
  if ((DAT_04566039 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_get_Current__
                );
    FUN_01bab630(&KOPGBBHMPDP_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Key__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>_get_Value__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
                );
    DAT_04566039 = 1;
  }
  local_60.fields._index = 0;
  local_60.fields._version = 0;
  local_60.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48 = (long *)0x0;
  local_60.fields._current = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).LOBBELCAMJC;
  if (__this_00 == (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
  {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__GetEnumerator
            (&local_60,(System_Collections_Generic_List_T__o *)__this_00,
             Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_GetEnumerator__
            );
  do {
    do {
      bVar2 = System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__MoveNext
                        (&local_60,
                         Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_MoveNext__
                        );
      plVar1 = local_48;
      if (!bVar2) {
        System_Collections_Generic_List_Enumerator<KeyValuePair<Int32Enum,_object>>__Dispose
                  (&local_60,
                   Method_System_Collections_Generic_List_Enumerator<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Dispose__
                  );
        return;
      }
    } while ((int)local_60.fields._current != BOFAKAEIMME);
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    lVar4 = *local_48;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(KOPGBBHMPDP_c **)(piVar6 + -2) == KOPGBBHMPDP_TypeInfo) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 3) * 0x10 + 0x138);
          goto LAB_03188cec;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_01b81914(local_48,KOPGBBHMPDP_TypeInfo,3);
LAB_03188cec:
    (*(code *)*puVar3)(plVar1,IHNKCJHDDKD,puVar3[1]);
  } while( true );
}


// ===== protected void CELMCMFOEAO(ODKDFMHHLIP NONPLOOOOAG)  [RVA 0x308903C]
// KPBOJBLLKPJ$$CELMCMFOEAO @ RVA 0x308903C

void KPBOJBLLKPJ__CELMCMFOEAO(KPBOJBLLKPJ_o *__this,ODKDFMHHLIP_o *NONPLOOOOAG,MethodInfo *method)

{
  int32_t ACCIHBHMFPN;
  int32_t index;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_00;
  MethodInfo *in_x3;
  
  if ((DAT_0456603a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_RemoveAt__);
    DAT_0456603a = 1;
  }
  if (NONPLOOOOAG != (ODKDFMHHLIP_o *)0x0) {
    ACCIHBHMFPN = (NONPLOOOOAG->fields).MOIGDPBNMNI;
    __this_00 = KPBOJBLLKPJ__NBKAMBPCHNJ(__this,ACCIHBHMFPN,method);
    if (__this_00 == (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    index = System_Collections_Generic_List<object>__IndexOf
                      ((System_Collections_Generic_List_object__o *)__this_00,
                       (Il2CppObject *)NONPLOOOOAG,
                       Method_System_Collections_Generic_List<ODKDFMHHLIP>_IndexOf__);
    if (-1 < index) {
      System_Collections_Generic_List<object>__RemoveAt
                ((System_Collections_Generic_List_object__o *)__this_00,index,
                 Method_System_Collections_Generic_List<ODKDFMHHLIP>_RemoveAt__);
      KPBOJBLLKPJ__HDJJADNLHKG(__this,ACCIHBHMFPN,index,in_x3);
      return;
    }
  }
  return;
}


// ===== public void KMJIIFFEJLH(CKLIGNAPKFO BOFAKAEIMME, KOPGBBHMPDP PDALMPAOAFM)  [RVA 0x30890FC]
// KPBOJBLLKPJ$$KMJIIFFEJLH @ RVA 0x30890FC

void KPBOJBLLKPJ__KMJIIFFEJLH
               (KPBOJBLLKPJ_o *__this,int32_t BOFAKAEIMME,KOPGBBHMPDP_o *PDALMPAOAFM,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *pSVar2;
  System_Collections_Generic_KeyValuePair_Int32Enum__object__o item;
  
  if ((DAT_0456603b & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_First<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&Method_System_Linq_Enumerable_Where<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    FUN_01bab630(&System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo);
    FUN_01bab630(&Method_KPBOJBLLKPJ_GANGLJMEKOF_ODGFHIJGLPJ__);
    FUN_01bab630(&KPBOJBLLKPJ_GANGLJMEKOF_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Remove__
                );
    DAT_0456603b = 1;
  }
  __this_00 = (Il2CppObject *)thunk_FUN_01bda818(KPBOJBLLKPJ_GANGLJMEKOF_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    *(int32_t *)&__this_00[1].klass = BOFAKAEIMME;
    __this_00[1].monitor = PDALMPAOAFM;
    thunk_FUN_01c20e04(&__this_00[1].monitor,PDALMPAOAFM);
    pSVar2 = (__this->fields).LOBBELCAMJC;
    predicate = (System_Func_TSource__bool__o *)
                thunk_FUN_01bda818(
                                  System_Func<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>,_bool>_TypeInfo
                                  );
    System_Func<KeyValuePair<Int32Enum,_object>,_bool>___ctor();
    source = System_Linq_Enumerable__Where<KeyValuePair<Int32Enum,_object>>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,predicate,
                        Method_System_Linq_Enumerable_Where<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__
                       );
    bVar1 = System_Linq_Enumerable__Any<KeyValuePair<Int32Enum,_object>>
                      (source,
                       Method_System_Linq_Enumerable_Any<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__);
    if (!bVar1) {
      return;
    }
    pSVar2 = (__this->fields).LOBBELCAMJC;
    item = System_Linq_Enumerable__First<KeyValuePair<Int32Enum,_object>>
                     (source,
                      Method_System_Linq_Enumerable_First<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>__)
    ;
    if (pSVar2 != (System_Collections_Generic_List_KeyValuePair_CKLIGNAPKFO__KOPGBBHMPDP___o *)0x0)
    {
      System_Collections_Generic_List<KeyValuePair<Int32Enum,_object>>__Remove
                ((System_Collections_Generic_List_T__o *)pSVar2,item,
                 Method_System_Collections_Generic_List<KeyValuePair<CKLIGNAPKFO,_KOPGBBHMPDP>>_Remove__
                );
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

