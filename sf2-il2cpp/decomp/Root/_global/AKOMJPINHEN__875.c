// TypeDefIndex 875
// Namespace: 
// public class AKOMJPINHEN : KPBOJBLLKPJ
// Fields:
//   private const int IPBICJGCKOG = 0;
//   private const int JMICCDOGIGF = 100;
//   private Dictionary<CKLIGNAPKFO, int> AGJMNCAMEDP; // 0x28
//   private Dictionary<int, ADOCEKEFHJN> CCDJIIOOAML; // 0x30
//   private List<EKMDOGKFEBJ> PNNKHCDPPAE; // 0x38
//   private static int FNOHBBCCMJD; // 0x0
//   private long LMANLFKJNKN; // 0x40

// ===== public long CKFEAEEKEMK()  [RVA 0x308DD58]
// AKOMJPINHEN$$CKFEAEEKEMK @ RVA 0x308DD58

int64_t AKOMJPINHEN__CKFEAEEKEMK(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  return (__this->fields).LMANLFKJNKN;
}


// ===== private void FJIFDGEPKBH(NLFLMJPNOLF AOMBONOOJFP)  [RVA 0x308DD60]
// AKOMJPINHEN$$FJIFDGEPKBH @ RVA 0x308DD60

void AKOMJPINHEN__FJIFDGEPKBH(AKOMJPINHEN_o *__this,NLFLMJPNOLF_o *AOMBONOOJFP,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  ODKDFMHHLIP_o *NONPLOOOOAG;
  MethodInfo *method_00;
  MethodInfo *in_x3;
  
  if ((DAT_04566079 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__);
    DAT_04566079 = 1;
  }
  if (AOMBONOOJFP == (NLFLMJPNOLF_o *)0x0) {
    return;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    method_00 = Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__;
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,(int32_t)(AOMBONOOJFP->fields).OHMDCKEDOGH,
                       (MethodInfo_22F4D3C *)
                       Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__)
    ;
    if (!bVar1) {
      AKOMJPINHEN__HEJHGFDOMMG(__this,AOMBONOOJFP,method_00);
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      NONPLOOOOAG = (ODKDFMHHLIP_o *)
                    System_Collections_Generic_Dictionary<int,_object>__get_Item
                              (pSVar2,(int32_t)(AOMBONOOJFP->fields).OHMDCKEDOGH,
                               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__
                              );
      KPBOJBLLKPJ__DFHKMAIAPBJ
                ((KPBOJBLLKPJ_o *)__this,NONPLOOOOAG,(Il2CppObject *)AOMBONOOJFP,in_x3);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void PAKCJFFMNFH(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x308DF70]
// AKOMJPINHEN$$PAKCJFFMNFH @ RVA 0x308DF70

void AKOMJPINHEN__PAKCJFFMNFH(AKOMJPINHEN_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *__this_00;
  
  if ((DAT_0456607a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    DAT_0456607a = 1;
  }
  if (IHNKCJHDDKD != (ODKDFMHHLIP_o *)0x0) {
    if ((IHNKCJHDDKD->fields).JEFOELMOCEI != false) {
      CJNHFNHJHPE = (IHNKCJHDDKD->fields).MOIGDPBNMNI;
      bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(CJNHFNHJHPE,(MethodInfo *)0x0);
      if (bVar1) {
        __this_00 = (__this->fields).AGJMNCAMEDP;
        if (__this_00 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        iVar2 = System_Collections_Generic_Dictionary<Int32Enum,_int>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           CJNHFNHJHPE,
                           Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__
                          );
        method = (MethodInfo *)(ulong)(iVar2 + 1U);
        System_Collections_Generic_Dictionary<Int32Enum,_int>__set_Item
                  ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,CJNHFNHJHPE,
                   iVar2 + 1U,
                   Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
      }
    }
    KPBOJBLLKPJ__DLHHBAABHEE((KPBOJBLLKPJ_o *)__this,IHNKCJHDDKD,method);
    return;
  }
  return;
}


// ===== public void CNCFBMNAIMG(EKMDOGKFEBJ PDALMPAOAFM)  [RVA 0x308E038]
// AKOMJPINHEN$$CNCFBMNAIMG @ RVA 0x308E038

void AKOMJPINHEN__CNCFBMNAIMG(AKOMJPINHEN_o *__this,EKMDOGKFEBJ_o *PDALMPAOAFM,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  
  if ((DAT_0456607b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<EKMDOGKFEBJ>_Add__);
    DAT_0456607b = 1;
  }
  lVar2 = Method_System_Collections_Generic_List<EKMDOGKFEBJ>_Add__;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).PNNKHCDPPAE;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)PDALMPAOAFM;
        thunk_FUN_01c20e04(pSVar3->m_Items + (int)uVar1,PDALMPAOAFM);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,(Il2CppObject *)PDALMPAOAFM,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JODGDOIFKKM(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x308E0E4]
// AKOMJPINHEN$$JODGDOIFKKM @ RVA 0x308E0E4

void AKOMJPINHEN__JODGDOIFKKM(AKOMJPINHEN_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *FNCOALJKOCK;
  
  if ((DAT_0456607c & 1) == 0) {
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<EIBAKHBHMAO>__);
    DAT_0456607c = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (pIVar1 = KEFHDOHHHML__PFNEPJAFEDF<object>
                         (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<EIBAKHBHMAO>__),
     pIVar1 != (Il2CppObject *)0x0)) {
    if (*(int *)&pIVar1[1].monitor == 2) {
      FNCOALJKOCK = pIVar1[2].klass;
      (__this->fields).LMANLFKJNKN = (int64_t)FNCOALJKOCK;
      AKOMJPINHEN__BJKMEDKAIOH(__this,(int64_t)FNCOALJKOCK,method);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DGLOODJIEBC(ODKDFMHHLIP IHNKCJHDDKD)  [RVA 0x308E314]
// AKOMJPINHEN$$DGLOODJIEBC @ RVA 0x308E314

void AKOMJPINHEN__DGLOODJIEBC(AKOMJPINHEN_o *__this,ODKDFMHHLIP_o *IHNKCJHDDKD,MethodInfo *method)

{
  int32_t CJNHFNHJHPE;
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *__this_00;
  
  if ((DAT_0456607d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    DAT_0456607d = 1;
  }
  if ((IHNKCJHDDKD != (ODKDFMHHLIP_o *)0x0) && ((IHNKCJHDDKD->fields).JEFOELMOCEI != false)) {
    CJNHFNHJHPE = (IHNKCJHDDKD->fields).MOIGDPBNMNI;
    bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(CJNHFNHJHPE,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields).AGJMNCAMEDP;
      if (__this_00 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar2 = System_Collections_Generic_Dictionary<Int32Enum,_int>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                         CJNHFNHJHPE,
                         Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__);
      method = (MethodInfo *)(ulong)(iVar2 - 1U);
      System_Collections_Generic_Dictionary<Int32Enum,_int>__set_Item
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,CJNHFNHJHPE,
                 iVar2 - 1U,
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    }
  }
  KPBOJBLLKPJ__CELMCMFOEAO((KPBOJBLLKPJ_o *)__this,IHNKCJHDDKD,method);
  return;
}


// ===== public void JKHLALJIKOJ(CKLIGNAPKFO ACCIHBHMFPN)  [RVA 0x308E3CC]
// AKOMJPINHEN$$JKHLALJIKOJ @ RVA 0x308E3CC

void AKOMJPINHEN__JKHLALJIKOJ(AKOMJPINHEN_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *__this_00;
  System_Collections_Generic_List_ODKDFMHHLIP__o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_List_Enumerator_T__o local_38;
  
  if ((DAT_0456607e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ODKDFMHHLIP>_GetEnumerator__);
    DAT_0456607e = 1;
  }
  local_38.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_38.fields._index = 0;
  local_38.fields._version = 0;
  local_38.fields._current = (Il2CppObject *)0x0;
  bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (!bVar1) {
    return;
  }
  __this_00 = (__this->fields).AGJMNCAMEDP;
  if (__this_00 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    System_Collections_Generic_Dictionary<Int32Enum,_int>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,ACCIHBHMFPN,0,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    __this_01 = KPBOJBLLKPJ__NBKAMBPCHNJ((KPBOJBLLKPJ_o *)__this,ACCIHBHMFPN,method_00);
    if (__this_01 != (System_Collections_Generic_List_ODKDFMHHLIP__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                (&local_38,(System_Collections_Generic_List_object__o *)__this_01,
                 Method_System_Collections_Generic_List<ODKDFMHHLIP>_GetEnumerator__);
      while (bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                               (&local_38,
                                Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_MoveNext__
                               ), bVar1) {
        if (local_38.fields._current != (Il2CppObject *)0x0) {
          *(undefined1 *)&local_38.fields._current[2].klass = 0;
        }
      }
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_38,Method_System_Collections_Generic_List_Enumerator<ODKDFMHHLIP>_Dispose__)
      ;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MLBNBCLLKEL(long IMMNELPBGIF)  [RVA 0x308E550]
// AKOMJPINHEN$$MLBNBCLLKEL @ RVA 0x308E550

void AKOMJPINHEN__MLBNBCLLKEL(AKOMJPINHEN_o *__this,int64_t IMMNELPBGIF,MethodInfo *method)

{
  if ((DAT_0456607f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4284/*"ChatManager::OnClanRaidDestroyed: Try to remove nonexistent raid invite message!"*/);
    DAT_0456607f = 1;
  }
  if ((int)IMMNELPBGIF != 0) {
    AKOMJPINHEN__NBFGBBFJFNP(__this,(int)IMMNELPBGIF,method);
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4284/*"ChatManager::OnClanRaidDestroyed: Try to remove nonexistent raid invite message!"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void BJKMEDKAIOH(long FNCOALJKOCK)  [RVA 0x308E164]
// AKOMJPINHEN$$BJKMEDKAIOH @ RVA 0x308E164

void AKOMJPINHEN__BJKMEDKAIOH(AKOMJPINHEN_o *__this,int64_t FNCOALJKOCK,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  System_Collections_Generic_List_object__o *__this_00;
  VirtualInvokeData *pVVar4;
  Il2CppClass *pIVar5;
  ulong uVar6;
  int32_t *piVar7;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if ((DAT_04566080 & 1) == 0) {
    FUN_01bab630(&EKMDOGKFEBJ_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_Dispose__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_MoveNext__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_get_Current__);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKMDOGKFEBJ>_GetEnumerator__);
    DAT_04566080 = 1;
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).PNNKHCDPPAE;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,__this_00,Method_System_Collections_Generic_List<EKMDOGKFEBJ>_GetEnumerator__
            );
  do {
    bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (&local_48,
                       Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_MoveNext__);
    pIVar2 = local_48.fields._current;
    if (!bVar3) {
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (&local_48,Method_System_Collections_Generic_List_Enumerator<EKMDOGKFEBJ>_Dispose__)
      ;
      return;
    }
    if (local_48.fields._current == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pIVar5 = (local_48.fields._current)->klass;
    uVar1._0_1_ = (pIVar5->_2).rank;
    uVar1._1_1_ = (pIVar5->_2).minimumAlignment;
    uVar6 = (ulong)uVar1;
    if (uVar6 != 0) {
      piVar7 = &((pIVar5->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
            (Il2CppClass *)EKMDOGKFEBJ_TypeInfo) {
          pVVar4 = pIVar5->vtable + *piVar7;
          goto LAB_0318e26c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    pVVar4 = (VirtualInvokeData *)FUN_01b81914(local_48.fields._current,EKMDOGKFEBJ_TypeInfo,0);
LAB_0318e26c:
    (*pVVar4->methodPtr)(pIVar2,FNCOALJKOCK,pVVar4->method);
  } while( true );
}


// ===== private void GCNOBMBNIAA(ADOCEKEFHJN MEGFNNANAOD)  [RVA 0x308E6E4]
// AKOMJPINHEN$$GCNOBMBNIAA @ RVA 0x308E6E4

void AKOMJPINHEN__GCNOBMBNIAA(AKOMJPINHEN_o *__this,ADOCEKEFHJN_o *MEGFNNANAOD,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  ADOCEKEFHJN_o *method_00;
  
  if ((DAT_04566081 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_set_Item__);
    DAT_04566081 = 1;
  }
  if ((MEGFNNANAOD != (ADOCEKEFHJN_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                  (__this->fields).CCDJIIOOAML,
     __this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    method_00 = MEGFNNANAOD;
    System_Collections_Generic_Dictionary<int,_object>__set_Item
              (__this_00,(MEGFNNANAOD->fields).NLPOCKANMGL,(Il2CppObject *)MEGFNNANAOD,
               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_set_Item__);
    AKOMJPINHEN__PAKCJFFMNFH(__this,(ODKDFMHHLIP_o *)MEGFNNANAOD,(MethodInfo *)method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void KHFOCHBBBLH(CKLIGNAPKFO ACCIHBHMFPN)  [RVA 0x308E750]
// AKOMJPINHEN$$KHFOCHBBBLH @ RVA 0x308E750

void AKOMJPINHEN__KHFOCHBBBLH(AKOMJPINHEN_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(ACCIHBHMFPN,(MethodInfo *)0x0);
  if (bVar1) {
    AKOMJPINHEN__JKHLALJIKOJ(__this,ACCIHBHMFPN,method);
    KPBOJBLLKPJ__GBDKELGIOEK((KPBOJBLLKPJ_o *)__this,ACCIHBHMFPN,method);
    return;
  }
  return;
}


// ===== private void JNCKDHJJBPM(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x308E79C]
// AKOMJPINHEN$$JNCKDHJJBPM @ RVA 0x308E79C

void AKOMJPINHEN__JNCKDHJJBPM(AKOMJPINHEN_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  if (PBNPKBJKFHE != (OJEHKJHEBID_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,PBNPKBJKFHE,method);
    return;
  }
  return;
}


// ===== private void FELKMAJFHIE(CHDGOFBHAFI.DCENIHNBCAA LBKOHHHPNIP)  [RVA 0x308ED2C]
// AKOMJPINHEN$$FELKMAJFHIE @ RVA 0x308ED2C

void AKOMJPINHEN__FELKMAJFHIE(AKOMJPINHEN_o *__this,int32_t LBKOHHHPNIP,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  
  if ((DAT_0456608e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo,LBKOHHHPNIP);
    DAT_0456608e = 1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,(pEVar1->fields).MICFEIBNOLM,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x308ED98]
// AKOMJPINHEN$$.ctor @ RVA 0x308ED98

void AKOMJPINHEN___ctor(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *__this_01;
  System_Collections_Generic_Dictionary_int__ADOCEKEFHJN__o **ppSVar1;
  System_Collections_Generic_List_object__o *__this_02;
  System_Collections_Generic_List_EKMDOGKFEBJ__o **ppSVar2;
  EEGDOGKBLNG_o *pEVar3;
  int64_t FNCOALJKOCK;
  KKLJIDJBFEI_o *pKVar4;
  System_Action_KEFHDOHHHML__o *pSVar5;
  EEOMEMBBGNA_o *pEVar6;
  System_Action_NLFLMJPNOLF__o *pSVar7;
  System_Action_long__o *CJNHFNHJHPE;
  System_Action_OJEHKJHEBID__o *CJNHFNHJHPE_00;
  System_Action_o *pSVar8;
  CHDGOFBHAFI_o *pCVar9;
  System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *CJNHFNHJHPE_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  MethodInfo *method_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o **ppSVar10;
  DCHAJIMIFHP_o *pDVar11;
  CJFBGEEIPBA_o *pCVar12;
  int key;
  
                    /* try { // try from 0318eda4 to 0328edcb has its CatchHandler @ 0318f3f8 */
                    /* try { // try from 0318edcc to 0328ef43 has its CatchHandler @ 0318e838 */
  if ((DAT_04566082 & 1) == 0) {
    FUN_01bab630(&Method_AKOMJPINHEN_CBEOFBGGGDG__);
    FUN_01bab630(&Method_AKOMJPINHEN_FELKMAJFHIE__);
    FUN_01bab630(&Method_AKOMJPINHEN_FJIFDGEPKBH__);
    FUN_01bab630(&Method_AKOMJPINHEN_HEJHGFDOMMG__);
    FUN_01bab630(&Method_AKOMJPINHEN_JNCKDHJJBPM__);
    FUN_01bab630(&Method_AKOMJPINHEN_JODGDOIFKKM__);
    FUN_01bab630(&Method_AKOMJPINHEN_JOMFHMDCMNG__);
    FUN_01bab630(&Method_AKOMJPINHEN_LMKOLDHCAAK__);
    FUN_01bab630(&Method_AKOMJPINHEN_MLBNBCLLKEL__);
    FUN_01bab630(&Method_AKOMJPINHEN_NDINMGLBGDN__);
    FUN_01bab630(&Method_AKOMJPINHEN_OJAPEIKHMAP__);
    FUN_01bab630(&System_Action<NLFLMJPNOLF>_TypeInfo);
    FUN_01bab630(&System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
    FUN_01bab630(&System_Action<OJEHKJHEBID>_TypeInfo);
    FUN_01bab630(&System_Action<long>_TypeInfo);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<EKMDOGKFEBJ>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<EKMDOGKFEBJ>_TypeInfo);
    FUN_01bab630(&StringLiteral_16985/*"chat_event"*/);
    FUN_01bab630(&StringLiteral_19782/*"mute_event"*/);
    DAT_04566082 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0318ef44 to 0328ef6b has its CatchHandler @ 0318f358 */
  __this_00 = (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_TypeInfo,
                                 method);
  System_Collections_Generic_Dictionary<Int32Enum,_int>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>__ctor__);
  ppSVar10 = &(__this->fields).AGJMNCAMEDP;
  *ppSVar10 = __this_00;
  thunk_FUN_01c20e04(ppSVar10,__this_00);
  __this_01 = (System_Collections_Generic_Dictionary_int__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_TypeInfo);
  System_Collections_Generic_Dictionary<int,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>__ctor__);
  ppSVar1 = &(__this->fields).CCDJIIOOAML;
                    /* try { // try from 0318efa0 to 0328efc7 has its CatchHandler @ 0318f354 */
  *ppSVar1 = (System_Collections_Generic_Dictionary_int__ADOCEKEFHJN__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  __this_02 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<EKMDOGKFEBJ>_TypeInfo);
                    /* try { // try from 0318efc8 to 0328f143 has its CatchHandler @ 0318e838 */
  System_Collections_Generic_List<object>___ctor
            (__this_02,Method_System_Collections_Generic_List<EKMDOGKFEBJ>__ctor__);
  ppSVar2 = &(__this->fields).PNNKHCDPPAE;
  *ppSVar2 = (System_Collections_Generic_List_EKMDOGKFEBJ__o *)__this_02;
  thunk_FUN_01c20e04(ppSVar2,__this_02);
  KPBOJBLLKPJ___ctor((KPBOJBLLKPJ_o *)__this,100,in_x2);
  key = 1;
  do {
    if (*ppSVar10 == (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0)
    goto LAB_0318f3a0;
    System_Collections_Generic_Dictionary<Int32Enum,_int>__set_Item
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)*ppSVar10,key,0,
               Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_set_Item__);
    key = key + 1;
  } while (key != 5);
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    FNCOALJKOCK = EEGDOGKBLNG__HBJCAIGDNLF(pEVar3,2,(MethodInfo *)0x0);
    (__this->fields).LMANLFKJNKN = FNCOALJKOCK;
    AKOMJPINHEN__BJKMEDKAIOH(__this,FNCOALJKOCK,method_00);
    pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
      pDVar11 = (pKVar4->fields).super.FNHOHLGNHGN;
      pSVar5 = (System_Action_KEFHDOHHHML__o *)
               thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
      System_Action<object>___ctor();
      if (pDVar11 != (DCHAJIMIFHP_o *)0x0) {
        DCHAJIMIFHP__MPFFOIIBAKO(pDVar11,StringLiteral_16985/*"chat_event"*/,pSVar5,(MethodInfo *)0x0);
        pKVar4 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
        if (pKVar4 != (KKLJIDJBFEI_o *)0x0) {
          pDVar11 = (pKVar4->fields).super.FNHOHLGNHGN;
          pSVar5 = (System_Action_KEFHDOHHHML__o *)
                   thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
          System_Action<object>___ctor();
          if (pDVar11 != (DCHAJIMIFHP_o *)0x0) {
            DCHAJIMIFHP__MPFFOIIBAKO(pDVar11,StringLiteral_19782/*"mute_event"*/,pSVar5,(MethodInfo *)0x0);
            pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
            if (pEVar6 != (EEOMEMBBGNA_o *)0x0) {
              pCVar12 = (pEVar6->fields).GMNJEBCECDA;
              pSVar7 = (System_Action_NLFLMJPNOLF__o *)
                       thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
              System_Action<object>___ctor();
              if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                CJFBGEEIPBA__LIKOAKDJPJI(pCVar12,pSVar7,(MethodInfo *)0x0);
                pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                if (pEVar6 != (EEOMEMBBGNA_o *)0x0) {
                  pCVar12 = (pEVar6->fields).GMNJEBCECDA;
                    /* try { // try from 0318f144 to 0328f16b has its CatchHandler @ 0318f2bc */
                  pSVar7 = (System_Action_NLFLMJPNOLF__o *)
                           thunk_FUN_01bda818(System_Action<NLFLMJPNOLF>_TypeInfo);
                  System_Action<object>___ctor();
                  if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                    CJFBGEEIPBA__APAKFIKINCF(pCVar12,pSVar7,(MethodInfo *)0x0);
                    pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                    if (pEVar6 != (EEOMEMBBGNA_o *)0x0) {
                      pCVar12 = (pEVar6->fields).GMNJEBCECDA;
                      CJNHFNHJHPE = (System_Action_long__o *)
                                    thunk_FUN_01bda818(System_Action<long>_TypeInfo);
                    /* try { // try from 0318f1a0 to 0328f1c7 has its CatchHandler @ 0318f2b8 */
                      System_Action<long>___ctor();
                      if (pCVar12 != (CJFBGEEIPBA_o *)0x0) {
                        CJFBGEEIPBA__EHJDAGPJFAB(pCVar12,CJNHFNHJHPE,(MethodInfo *)0x0);
                    /* try { // try from 0318f1c8 to 0328f26f has its CatchHandler @ 0318e838 */
                        pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                        CJNHFNHJHPE_00 =
                             (System_Action_OJEHKJHEBID__o *)
                             thunk_FUN_01bda818(System_Action<OJEHKJHEBID>_TypeInfo);
                        System_Action<object>___ctor();
                        if (pEVar6 != (EEOMEMBBGNA_o *)0x0) {
                          EEOMEMBBGNA__MFDOCMJONOH(pEVar6,CJNHFNHJHPE_00,(MethodInfo *)0x0);
                          pEVar6 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
                          pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                          System_Action___ctor();
                          if (pEVar6 != (EEOMEMBBGNA_o *)0x0) {
                            EEOMEMBBGNA__EMKEMHIPNOF(pEVar6,pSVar8,(MethodInfo *)0x0);
                            pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* try { // try from 0318f270 to 0328f277 has its CatchHandler @ 0318f400 */
                            pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 0318f278 to 0328f27f has its CatchHandler @ 0318f35c */
                    /* try { // try from 0318f280 to 0328f287 has its CatchHandler @ 0318f2c0 */
                    /* try { // try from 0318f288 to 0328f297 has its CatchHandler @ 0318e838 */
                            System_Action___ctor();
                            if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                    /* try { // try from 0318f298 to 0328f29b has its CatchHandler @ 0318f2b4 */
                    /* try { // try from 0318f29c to 0328f29f has its CatchHandler @ 0318f2b0 */
                    /* try { // try from 0318f2a0 to 0328f2a3 has its CatchHandler @ 0318f2ac */
                    /* try { // try from 0318f2a4 to 0328f2d7 has its CatchHandler @ 0318e838 */
                              CHDGOFBHAFI__HMBJHHDACKC(pCVar9,pSVar8,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0318f2a0 with catch @ 0318f2ac */
                              pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0318f29c with catch @ 0318f2b0 */
                    /* catch() { ... } // from try @ 0318f298 with catch @ 0318f2b4 */
                    /* catch() { ... } // from try @ 0318f1a0 with catch @ 0318f2b8 */
                    /* catch() { ... } // from try @ 0318f144 with catch @ 0318f2bc */
                              pSVar8 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo)
                              ;
                    /* catch() { ... } // from try @ 0318f280 with catch @ 0318f2c0 */
                    /* try { // try from 0318f2d8 to 0328f2db has its CatchHandler @ 0318f2e8 */
                              System_Action___ctor();
                              if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                    /* catch() { ... } // from try @ 0318f2d8 with catch @ 0318f2e8 */
                                CHDGOFBHAFI__LCMOGMIIEIN(pCVar9,pSVar8,(MethodInfo *)0x0);
                                pCVar9 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
                                CJNHFNHJHPE_01 =
                                     (System_Action_CHDGOFBHAFI_DCENIHNBCAA__o *)
                                     thunk_FUN_01bda818(
                                                  System_Action<CHDGOFBHAFI_DCENIHNBCAA>_TypeInfo);
                    /* try { // try from 0318f320 to 0328f353 has its CatchHandler @ 0318f4a4 */
                                System_Action<Int32Enum>___ctor();
                                if (pCVar9 != (CHDGOFBHAFI_o *)0x0) {
                                  CHDGOFBHAFI__ENIDGKKPNAO(pCVar9,CJNHFNHJHPE_01,(MethodInfo *)0x0);
                                  pEVar3 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0318efa0 with catch @ 0318f354
                       try { // try from 0318f354 to 0328f373 has its CatchHandler @ 0318e838 */
                                  pSVar8 = (System_Action_o *)
                                           thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 0318ef44 with catch @ 0318f358 */
                    /* catch() { ... } // from try @ 0318f278 with catch @ 0318f35c */
                                  System_Action___ctor();
                    /* try { // try from 0318f374 to 0328f377 has its CatchHandler @ 0318f38c */
                                  if (pEVar3 != (EEGDOGKBLNG_o *)0x0) {
                    /* catch() { ... } // from try @ 0318f374 with catch @ 0318f38c */
                                    EEGDOGKBLNG__DNJPBDHOMOI(pEVar3,pSVar8,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0318f3a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void EHJAAHEJFEO(EKMDOGKFEBJ PDALMPAOAFM)  [RVA 0x308F3A4]
// AKOMJPINHEN$$EHJAAHEJFEO @ RVA 0x308F3A4

void AKOMJPINHEN__EHJAAHEJFEO(AKOMJPINHEN_o *__this,EKMDOGKFEBJ_o *PDALMPAOAFM,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if ((DAT_04566083 & 1) == 0) {
                    /* try { // try from 0318f3c4 to 0328f3f7 has its CatchHandler @ 0318f4a4 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EKMDOGKFEBJ>_Remove__);
    DAT_04566083 = 1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)(__this->fields).PNNKHCDPPAE;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List<object>__Remove
              (__this_00,(Il2CppObject *)PDALMPAOAFM,
               Method_System_Collections_Generic_List<EKMDOGKFEBJ>_Remove__);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0318eda4 with catch @ 0318f3f8
                       try { // try from 0318f3f8 to 0328f417 has its CatchHandler @ 0318e838 */
  FUN_01bab8c8();
}


// ===== private void NDINMGLBGDN()  [RVA 0x308F3FC]
// AKOMJPINHEN$$NDINMGLBGDN @ RVA 0x308F3FC

void AKOMJPINHEN__NDINMGLBGDN(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  MethodInfo *in_x2;
  
                    /* catch() { ... } // from try @ 0318ed48 with catch @ 0318f3fc */
                    /* catch() { ... } // from try @ 0318f270 with catch @ 0318f400 */
  if ((DAT_04566084 & 1) == 0) {
                    /* try { // try from 0318f418 to 0328f41b has its CatchHandler @ 0318f430 */
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Clear__);
    DAT_04566084 = 1;
  }
                    /* catch() { ... } // from try @ 0318f418 with catch @ 0318f430 */
  AKOMJPINHEN__KHFOCHBBBLH(__this,3,in_x2);
  __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Clear__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public int ILGBGMMJHMK(CKLIGNAPKFO ACCIHBHMFPN)  [RVA 0x308F458]
// AKOMJPINHEN$$ILGBGMMJHMK @ RVA 0x308F458

int32_t AKOMJPINHEN__ILGBGMMJHMK(AKOMJPINHEN_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *pSVar3;
  
                    /* try { // try from 0318f468 to 0328f48f has its CatchHandler @ 0318f4a4 */
  if ((DAT_04566085 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__);
                    /* try { // try from 0318f490 to 0328f49b has its CatchHandler @ 0318e838 */
    DAT_04566085 = 1;
  }
  pSVar3 = (__this->fields).AGJMNCAMEDP;
  if (pSVar3 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
                    /* try { // try from 0318f49c to 0328f4a3 has its CatchHandler @ 0318f4a4 */
                    /* catch() { ... } // from try @ 0318f320 with catch @ 0318f4a4
                       catch() { ... } // from try @ 0318f3c4 with catch @ 0318f4a4
                       catch() { ... } // from try @ 0318f468 with catch @ 0318f4a4
                       catch() { ... } // from try @ 0318f49c with catch @ 0318f4a4 */
    bVar1 = System_Collections_Generic_Dictionary<Int32Enum,_int>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,ACCIHBHMFPN,
                       Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_ContainsKey__)
    ;
    if (!bVar1) {
      return 0;
    }
    pSVar3 = (__this->fields).AGJMNCAMEDP;
    if (pSVar3 != (System_Collections_Generic_Dictionary_CKLIGNAPKFO__int__o *)0x0) {
      iVar2 = System_Collections_Generic_Dictionary<Int32Enum,_int>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar3,ACCIHBHMFPN
                         ,Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_int>_get_Item__)
      ;
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void CBEOFBGGGDG(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x308F4EC]
// AKOMJPINHEN$$CBEOFBGGGDG @ RVA 0x308F4EC

void AKOMJPINHEN__CBEOFBGGGDG(AKOMJPINHEN_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  OLCBPIHLPEC_o *OMPNCGNDGMI;
  CMOAIOLDOIJ_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566086 & 1) == 0) {
    FUN_01bab630(&CMOAIOLDOIJ_TypeInfo);
    FUN_01bab630(&IOHDCPBJGFF_TypeInfo);
    FUN_01bab630(&Method_KEFHDOHHHML_PFNEPJAFEDF<OLCBPIHLPEC>__);
    DAT_04566086 = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (OMPNCGNDGMI = (OLCBPIHLPEC_o *)
                    KEFHDOHHHML__PFNEPJAFEDF<object>
                              (IDCGLBOIAFJ,Method_KEFHDOHHHML_PFNEPJAFEDF<OLCBPIHLPEC>__),
     OMPNCGNDGMI != (OLCBPIHLPEC_o *)0x0)) {
    if ((OMPNCGNDGMI->fields).NGODFBDEMLE == 0) {
      __this_00 = (CMOAIOLDOIJ_o *)thunk_FUN_01bda818(IOHDCPBJGFF_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      IOHDCPBJGFF___ctor((IOHDCPBJGFF_o *)__this_00,OMPNCGNDGMI,(MethodInfo *)0x0);
    }
    else {
      __this_00 = (CMOAIOLDOIJ_o *)thunk_FUN_01bda818(CMOAIOLDOIJ_TypeInfo);
      method_00 = (MethodInfo *)0x0;
      CMOAIOLDOIJ___ctor(__this_00,OMPNCGNDGMI,(MethodInfo *)0x0);
    }
    AKOMJPINHEN__PAKCJFFMNFH(__this,(ODKDFMHHLIP_o *)__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void HEJHGFDOMMG(NLFLMJPNOLF IMMNELPBGIF)  [RVA 0x308DE18]
// AKOMJPINHEN$$HEJHGFDOMMG @ RVA 0x308DE18

void AKOMJPINHEN__HEJHGFDOMMG(AKOMJPINHEN_o *__this,NLFLMJPNOLF_o *IMMNELPBGIF,MethodInfo *method)

{
  bool bVar1;
  CHDGOFBHAFI_o *__this_00;
  ADOCEKEFHJN_o *__this_01;
  Nekki_SF2_Core_Quests_QuestsManager_o *__this_02;
  Google_Protobuf_Collections_RepeatedField_long__o *__this_03;
  int64_t iVar2;
  EEGDOGKBLNG_o *__this_04;
  int64_t iVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if ((DAT_04566087 & 1) == 0) {
    FUN_01bab630(&ADOCEKEFHJN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
    DAT_04566087 = 1;
  }
  if (IMMNELPBGIF == (NLFLMJPNOLF_o *)0x0) {
    return;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = HJPEKDOPBHN__FKBPIBLMJEF((MethodInfo *)0x0);
  if (__this_00 != (CHDGOFBHAFI_o *)0x0) {
    bVar1 = CHDGOFBHAFI__BHHNJDDGDHF(__this_00,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    __this_01 = (ADOCEKEFHJN_o *)thunk_FUN_01bda818(ADOCEKEFHJN_TypeInfo);
    method_01 = (MethodInfo *)0x3;
    ADOCEKEFHJN___ctor(__this_01,IMMNELPBGIF,3,(MethodInfo *)0x0);
    AKOMJPINHEN__GCNOBMBNIAA(__this,__this_01,method_01);
    __this_02 = Nekki_SF2_Core_Quests_QuestsManager__get_Instance((MethodInfo *)0x0);
    if (__this_02 != (Nekki_SF2_Core_Quests_QuestsManager_o *)0x0) {
      Nekki_SF2_Core_Quests_QuestsManager__ScheduleAndRunQuests(__this_02,0x35,(MethodInfo *)0x0);
      __this_03 = (IMMNELPBGIF->fields).MABPCBMOECE;
      if (__this_03 != (Google_Protobuf_Collections_RepeatedField_long__o *)0x0) {
        if ((__this_03->fields).count < 1) {
          return;
        }
        iVar2 = Google_Protobuf_Collections_RepeatedField<long>__get_Item
                          (__this_03,0,
                           Method_Google_Protobuf_Collections_RepeatedField<long>_get_Item__);
        if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo);
        }
        __this_04 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
        if (__this_04 != (EEGDOGKBLNG_o *)0x0) {
          iVar3 = EEGDOGKBLNG__APCMGOCHMGC(__this_04,(MethodInfo *)0x0);
          if (iVar2 == iVar3) {
            return;
          }
          KFCFGKEHPNK__EECLBEHBHFI(8,method_00);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GMDGMGDNHHP(OJEHKJHEBID PBNPKBJKFHE)  [RVA 0x308E7A8]
// AKOMJPINHEN$$GMDGMGDNHHP @ RVA 0x308E7A8

void AKOMJPINHEN__GMDGMGDNHHP(AKOMJPINHEN_o *__this,OJEHKJHEBID_o *PBNPKBJKFHE,MethodInfo *method)

{
  int32_t item;
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  bool bVar4;
  System_Collections_Generic_List_int__o *__this_00;
  System_Collections_Generic_Dictionary_int__object__o *pSVar5;
  Il2CppObject *__this_01;
  System_Func_TSource__bool__o *predicate;
  Il2CppObject *pIVar6;
  NLFLMJPNOLF_o *IMMNELPBGIF;
  MethodInfo *method_00;
  System_Int32_array *pSVar7;
  int index;
  Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *pGVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_d8;
  undefined1 local_b0 [16];
  Il2CppObject *local_a0;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_90;
  
  if ((DAT_04566088 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_GetEnumerator__);
    FUN_01bab630(&Method_System_Linq_Enumerable_FirstOrDefault<NLFLMJPNOLF>__);
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_MoveNext__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List_Enumerator<int>_get_Current__);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_get_Current__
                );
                    /* try { // try from 0318e838 to 0328ed47 has its CatchHandler @ 0318e838
                       catch() { ... } // from try @ 0318e838 with catch @ 0318e838
                       catch() { ... } // from try @ 0318edcc with catch @ 0318e838
                       catch() { ... } // from try @ 0318efc8 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f1c8 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f288 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f2a4 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f354 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f3f8 with catch @ 0318e838
                       catch() { ... } // from try @ 0318f490 with catch @ 0318e838 */
    FUN_01bab630(&System_Func<NLFLMJPNOLF,_bool>_TypeInfo);
    FUN_01bab630(&Method_AKOMJPINHEN_KNOFIPGKEPL_HEMCLEPCEHJ__);
    FUN_01bab630(&AKOMJPINHEN_KNOFIPGKEPL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_ADOCEKEFHJN>_get_Key__);
    FUN_01bab630(&Method_System_Collections_Generic_KeyValuePair<int,_ADOCEKEFHJN>_get_Value__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_GetEnumerator__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<int>_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__);
    DAT_04566088 = 1;
  }
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  local_b0._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b0._8_4_ = 0;
  local_b0._12_4_ = 0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a0 = (Il2CppObject *)0x0;
  if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
    return;
  }
  __this_00 = (System_Collections_Generic_List_int__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<int>_TypeInfo);
  System_Collections_Generic_List<int>___ctor
            (__this_00,Method_System_Collections_Generic_List<int>__ctor__);
  pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (pSVar5 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
              (&local_d8,pSVar5,
               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_GetEnumerator__);
    local_90.fields._version = local_d8.fields._version;
    local_90.fields._index = local_d8.fields._index;
    local_90.fields._dictionary = local_d8.fields._dictionary;
    local_90.fields._current.fields.value = local_d8.fields._current.fields.value;
    local_90.fields._current.fields.key = local_d8.fields._current.fields.key;
    local_90.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_d8.fields._36_4_;
    while (bVar4 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                             (&local_90,
                              Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_MoveNext__
                             ), bVar4) {
      uVar3 = local_90.fields._current.fields.key._0_4_;
      __this_01 = (Il2CppObject *)thunk_FUN_01bda818(AKOMJPINHEN_KNOFIPGKEPL_TypeInfo);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      *(undefined4 *)&__this_01[1].klass = uVar3;
      pGVar8 = (PBNPKBJKFHE->fields).MJIHCLLODMF;
      predicate = (System_Func_TSource__bool__o *)
                  thunk_FUN_01bda818(System_Func<NLFLMJPNOLF,_bool>_TypeInfo);
      System_Func<object,_bool>___ctor();
      method = Method_System_Linq_Enumerable_FirstOrDefault<NLFLMJPNOLF>__;
      pIVar6 = System_Linq_Enumerable__FirstOrDefault<object>
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pGVar8,predicate,
                          (MethodInfo_1EA1A5C *)
                          Method_System_Linq_Enumerable_FirstOrDefault<NLFLMJPNOLF>__);
      lVar2 = Method_System_Collections_Generic_List<int>_Add__;
      if (pIVar6 == (Il2CppObject *)0x0) {
        if (__this_00 == (System_Collections_Generic_List_int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        item = *(int32_t *)&__this_01[1].klass;
        pSVar7 = (__this_00->fields)._items;
        (__this_00->fields)._version = (__this_00->fields)._version + 1;
        if (pSVar7 == (System_Int32_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (__this_00->fields)._size;
        if (uVar1 < (uint)pSVar7->max_length) {
          (__this_00->fields)._size = uVar1 + 1;
          pSVar7->m_Items[(int)uVar1] = item;
        }
        else {
          method = *(MethodInfo **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<int>__AddWithResize
                    (__this_00,item,(MethodInfo_26C766C *)method);
        }
      }
    }
    System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
              (&local_90,
               Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__);
    if (__this_00 != (System_Collections_Generic_List_int__o *)0x0) {
      System_Collections_Generic_List<int>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&local_d8,__this_00,
                 Method_System_Collections_Generic_List<int>_GetEnumerator__);
      local_b0._8_4_ = local_d8.fields._version;
      local_b0._12_4_ = local_d8.fields._index;
      local_b0._0_8_ = local_d8.fields._dictionary;
      local_a0 = local_d8.fields._current.fields.key;
      while (bVar4 = System_Collections_Generic_List_Enumerator<int>__MoveNext
                               ((System_Collections_Generic_List_Enumerator_int__o *)local_b0,
                                Method_System_Collections_Generic_List_Enumerator<int>_MoveNext__),
            bVar4) {
        AKOMJPINHEN__NBFGBBFJFNP(__this,(int32_t)local_a0,method);
      }
      System_Collections_Generic_List_Enumerator<int>__Dispose
                ((System_Collections_Generic_List_Enumerator_int__o *)local_b0,
                 Method_System_Collections_Generic_List_Enumerator<int>_Dispose__);
      pGVar8 = (PBNPKBJKFHE->fields).MJIHCLLODMF;
      if (pGVar8 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0) {
        index = 0;
        do {
          if ((pGVar8->fields).count <= index) {
            return;
          }
          method_00 = Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__;
          IMMNELPBGIF = (NLFLMJPNOLF_o *)
                        Google_Protobuf_Collections_RepeatedField<object>__get_Item
                                  ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar8,index,
                                   (MethodInfo_295F6AC *)
                                   Method_Google_Protobuf_Collections_RepeatedField<NLFLMJPNOLF>_get_Item__
                                  );
          pSVar5 = (System_Collections_Generic_Dictionary_int__object__o *)
                   (__this->fields).CCDJIIOOAML;
          if (pSVar5 == (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
          System_Collections_Generic_Dictionary<int,_object>__GetEnumerator
                    (&local_d8,pSVar5,
                     Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_GetEnumerator__)
          ;
          local_90.fields._version = local_d8.fields._version;
          local_90.fields._index = local_d8.fields._index;
          local_90.fields._dictionary = local_d8.fields._dictionary;
          local_90.fields._current.fields.value = local_d8.fields._current.fields.value;
          local_90.fields._current.fields.key = local_d8.fields._current.fields.key;
          local_90.fields._getEnumeratorRetType = local_d8.fields._getEnumeratorRetType;
          local_90.fields._36_4_ = local_d8.fields._36_4_;
          do {
            bVar4 = System_Collections_Generic_Dictionary_Enumerator<int,_object>__MoveNext
                              (&local_90,
                               Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_MoveNext__
                              );
            if (!bVar4) {
              System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                        (&local_90,
                         Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__
                        );
              AKOMJPINHEN__HEJHGFDOMMG(__this,IMMNELPBGIF,method_00);
              goto LAB_0318eb60;
            }
            if (local_90.fields._current.fields.value == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            if (IMMNELPBGIF == (NLFLMJPNOLF_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
          } while ((IMMNELPBGIF->fields).OHMDCKEDOGH !=
                   (long)*(int *)&local_90.fields._current.fields.value[5].klass);
          System_Collections_Generic_Dictionary_Enumerator<int,_object>__Dispose
                    (&local_90,
                     Method_System_Collections_Generic_Dictionary_Enumerator<int,_ADOCEKEFHJN>_Dispose__
                    );
          AKOMJPINHEN__FJIFDGEPKBH(__this,IMMNELPBGIF,method_00);
LAB_0318eb60:
          pGVar8 = (PBNPKBJKFHE->fields).MJIHCLLODMF;
          index = index + 1;
        } while (pGVar8 != (Google_Protobuf_Collections_RepeatedField_NLFLMJPNOLF__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public override void JPGGPDEIENC(string IHNKCJHDDKD, CKLIGNAPKFO HPIPAGINPJK)  [RVA 0x308F5C0]
// AKOMJPINHEN$$JPGGPDEIENC @ RVA 0x308F5C0

void AKOMJPINHEN__JPGGPDEIENC
               (AKOMJPINHEN_o *__this,System_String_o *IHNKCJHDDKD,int32_t HPIPAGINPJK,
               MethodInfo *method)

{
  bool bVar1;
  KKLJIDJBFEI_o *__this_00;
  System_Action_KEFHDOHHHML__o *IELDNEAAPBE;
  
  if ((DAT_04566089 & 1) == 0) {
    FUN_01bab630(&Method_AKOMJPINHEN_PMBDGIJIIDD__);
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4287/*"ChatManager::SendMessage: Empty message or wrong channel"*/);
    DAT_04566089 = 1;
  }
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IHNKCJHDDKD,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = ODKDFMHHLIP__NOBCLMOONLJ(HPIPAGINPJK,(MethodInfo *)0x0), bVar1)) {
    __this_00 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    IELDNEAAPBE = (System_Action_KEFHDOHHHML__o *)
                  thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
    System_Action<object>___ctor();
    if (__this_00 != (KKLJIDJBFEI_o *)0x0) {
      KKLJIDJBFEI__CADOGBHCINN(__this_00,IHNKCJHDDKD,HPIPAGINPJK,IELDNEAAPBE,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4287/*"ChatManager::SendMessage: Empty message or wrong channel"*/,(MethodInfo *)0x0);
  return;
}


// ===== private void PMBDGIJIIDD(KEFHDOHHHML IDCGLBOIAFJ)  [RVA 0x308F6DC]
// AKOMJPINHEN$$PMBDGIJIIDD @ RVA 0x308F6DC

void AKOMJPINHEN__PMBDGIJIIDD(AKOMJPINHEN_o *__this,KEFHDOHHHML_o *IDCGLBOIAFJ,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_0456608a & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_4285/*"ChatManager::OnSendMsgResponse: Error delivering the chat message"*/);
    DAT_0456608a = 1;
  }
  if ((IDCGLBOIAFJ != (KEFHDOHHHML_o *)0x0) &&
     (bVar1 = KEFHDOHHHML__BOJJBGPIKDP(IDCGLBOIAFJ,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  UnityEngine_Debug__LogError(StringLiteral_4285/*"ChatManager::OnSendMsgResponse: Error delivering the chat message"*/,(MethodInfo *)0x0);
  return;
}


// ===== public void GJAEDMLMJIK(string NONPLOOOOAG, CKLIGNAPKFO ACCIHBHMFPN, bool MPKMGOGPJKJ = True)  [RVA 0x308F768]
// AKOMJPINHEN$$GJAEDMLMJIK @ RVA 0x308F768

void AKOMJPINHEN__GJAEDMLMJIK
               (AKOMJPINHEN_o *__this,System_String_o *NONPLOOOOAG,int32_t ACCIHBHMFPN,
               bool MPKMGOGPJKJ,MethodInfo *method)

{
  IOHDCPBJGFF_o *__this_00;
  System_String_o **ppSVar1;
  KKLJIDJBFEI_o *__this_01;
  PGICCMFLDPI_o *pPVar2;
  MethodInfo *method_00;
  int64_t iVar3;
  
  method_00 = (MethodInfo *)(ulong)(uint)ACCIHBHMFPN;
  if ((DAT_0456608b & 1) == 0) {
    FUN_01bab630(&IOHDCPBJGFF_TypeInfo);
    DAT_0456608b = 1;
  }
  __this_00 = (IOHDCPBJGFF_o *)thunk_FUN_01bda818(IOHDCPBJGFF_TypeInfo);
  IOHDCPBJGFF___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (IOHDCPBJGFF_o *)0x0) {
    ppSVar1 = &(__this_00->fields).super.ABCHAOKFLGL;
    *ppSVar1 = NONPLOOOOAG;
    thunk_FUN_01c20e04(ppSVar1,NONPLOOOOAG);
    __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
    if ((__this_01 != (KKLJIDJBFEI_o *)0x0) &&
       (pPVar2 = KKLJIDJBFEI__MPBLBEGCAKP(__this_01,(MethodInfo *)0x0),
       pPVar2 != (PGICCMFLDPI_o *)0x0)) {
      iVar3 = (pPVar2->fields).GDKPGIBMFPA;
      (__this_00->fields).super.MOIGDPBNMNI = ACCIHBHMFPN;
      (__this_00->fields).super.JEFOELMOCEI = MPKMGOGPJKJ;
      (__this_00->fields).super.HCNDEELOKHA = iVar3;
      AKOMJPINHEN__PAKCJFFMNFH(__this,(ODKDFMHHLIP_o *)__this_00,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void LMKOLDHCAAK()  [RVA 0x308F824]
// AKOMJPINHEN$$LMKOLDHCAAK @ RVA 0x308F824

void AKOMJPINHEN__LMKOLDHCAAK(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
  if ((DAT_0456608c & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456608c = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,(pEVar1->fields).MICFEIBNOLM,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void JOMFHMDCMNG()  [RVA 0x308F88C]
// AKOMJPINHEN$$JOMFHMDCMNG @ RVA 0x308F88C

void AKOMJPINHEN__JOMFHMDCMNG(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  EEGDOGKBLNG_o *__this_00;
  int64_t FNCOALJKOCK;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  
  if ((DAT_0456608d & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456608d = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  __this_00 = HJPEKDOPBHN__NLNDOENIAEO((MethodInfo *)0x0);
  if (__this_00 != (EEGDOGKBLNG_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    FNCOALJKOCK = EEGDOGKBLNG__HBJCAIGDNLF(__this_00,2,(MethodInfo *)0x0);
    (__this->fields).LMANLFKJNKN = FNCOALJKOCK;
    AKOMJPINHEN__BJKMEDKAIOH(__this,FNCOALJKOCK,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OJAPEIKHMAP()  [RVA 0x308ED30]
// AKOMJPINHEN$$OJAPEIKHMAP @ RVA 0x308ED30

void AKOMJPINHEN__OJAPEIKHMAP(AKOMJPINHEN_o *__this,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  
                    /* try { // try from 0318ed48 to 0328ed6f has its CatchHandler @ 0318f3fc */
  if ((DAT_0456608e & 1) == 0) {
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_0456608e = 1;
    method = extraout_x1;
  }
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(HJPEKDOPBHN_TypeInfo,method);
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,(pEVar1->fields).MICFEIBNOLM,in_x2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void NBFGBBFJFNP(int OILECKFDMDB)  [RVA 0x308E5D8]
// AKOMJPINHEN$$NBFGBBFJFNP @ RVA 0x308E5D8

void AKOMJPINHEN__NBFGBBFJFNP(AKOMJPINHEN_o *__this,int32_t OILECKFDMDB,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  ODKDFMHHLIP_o *IHNKCJHDDKD;
  MethodInfo *method_00;
  
  if ((DAT_0456608f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__);
    FUN_01bab630(&StringLiteral_4286/*"ChatManager::RemoveInvitaionMsg: Try to remove nonexistent raid invite message!"*/);
    DAT_0456608f = 1;
  }
  pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
  if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<int,_object>__ContainsKey
                      (pSVar2,OILECKFDMDB,
                       Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_ContainsKey__)
    ;
    if (!bVar1) {
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      UnityEngine_Debug__LogError(StringLiteral_4286/*"ChatManager::RemoveInvitaionMsg: Try to remove nonexistent raid invite message!"*/,(MethodInfo *)0x0);
      return;
    }
    pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
    if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      IHNKCJHDDKD = (ODKDFMHHLIP_o *)
                    System_Collections_Generic_Dictionary<int,_object>__get_Item
                              (pSVar2,OILECKFDMDB,
                               Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_get_Item__
                              );
      pSVar2 = (System_Collections_Generic_Dictionary_int__object__o *)(__this->fields).CCDJIIOOAML;
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        method_00 = Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Remove__;
        System_Collections_Generic_Dictionary<int,_object>__Remove
                  (pSVar2,OILECKFDMDB,
                   (MethodInfo_22F5FD0 *)
                   Method_System_Collections_Generic_Dictionary<int,_ADOCEKEFHJN>_Remove__);
        AKOMJPINHEN__DGLOODJIEBC(__this,IHNKCJHDDKD,method_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void MCAIDEFDJHF(AADKBCFCLKK IIPPMAOIKHB)  [RVA 0x308F904]
// AKOMJPINHEN$$MCAIDEFDJHF @ RVA 0x308F904

void AKOMJPINHEN__MCAIDEFDJHF(AKOMJPINHEN_o *__this,AADKBCFCLKK_o *IIPPMAOIKHB,MethodInfo *method)

{
  EEOMEMBBGNA_o *pEVar1;
  
  if ((DAT_04566090 & 1) == 0) {
    FUN_01bab630(&AKOMJPINHEN_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
    DAT_04566090 = 1;
  }
  if ((IIPPMAOIKHB == (AADKBCFCLKK_o *)0x0) ||
     ((IIPPMAOIKHB->fields).AMKHEHFFAKJ == (long)AKOMJPINHEN_TypeInfo->static_fields->FNOHBBCCMJD))
  {
    return;
  }
  AKOMJPINHEN__KHFOCHBBBLH(__this,2,method);
  AKOMJPINHEN_TypeInfo->static_fields->FNOHBBCCMJD = (int32_t)(IIPPMAOIKHB->fields).AMKHEHFFAKJ;
  if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pEVar1 = HJPEKDOPBHN__CEFGBPEHJJG((MethodInfo *)0x0);
  if (pEVar1 != (EEOMEMBBGNA_o *)0x0) {
    AKOMJPINHEN__GMDGMGDNHHP(__this,(pEVar1->fields).MICFEIBNOLM,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

