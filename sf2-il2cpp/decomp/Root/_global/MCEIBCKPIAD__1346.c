// TypeDefIndex 1346
// Namespace: 
// public class MCEIBCKPIAD
// Fields:
//   private List<KKLFGJCMPDA> BDIHNIGKDLK; // 0x10
//   private List<KKLFGJCMPDA> FEOGLGJBJDE; // 0x18
//   private List<KKLFGJCMPDA> HOIHAFALJIG; // 0x20
//   private List<KKLFGJCMPDA> MNIGCKKBGOH; // 0x28
//   private Action<FAIJGJCCKJC> BJPKLLHHPAO; // 0x30
//   private Action<FAIJGJCCKJC> BKKILNPNELM; // 0x38

// ===== public void JHHCEIDPANF(Action<FAIJGJCCKJC> CJNHFNHJHPE)  [RVA 0x316306C]
// MCEIBCKPIAD$$JHHCEIDPANF @ RVA 0x316306C

void MCEIBCKPIAD__JHHCEIDPANF
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *source;
  
                    /* try { // try from 03263070 to 03363087 has its CatchHandler @ 03263150 */
  if ((DAT_04566891 & 1) == 0) {
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    DAT_04566891 = 1;
  }
  ppSVar6 = &(__this->fields).BKKILNPNELM;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
                    /* try { // try from 032630c8 to 033630eb has its CatchHandler @ 03263138 */
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03263118 to 0336311b has its CatchHandler @ 03263154 */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 032630ec to 03363117 has its CatchHandler @ 03262f18 */
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void HMPDMOOMDAC(Action<FAIJGJCCKJC> CJNHFNHJHPE)  [RVA 0x316311C]
// MCEIBCKPIAD$$HMPDMOOMDAC @ RVA 0x316311C

void MCEIBCKPIAD__HMPDMOOMDAC
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *a;
  
                    /* try { // try from 0326311c to 0336311f has its CatchHandler @ 03263144 */
                    /* try { // try from 03263120 to 03363123 has its CatchHandler @ 03263154 */
                    /* try { // try from 03263124 to 03363127 has its CatchHandler @ 03263140 */
                    /* try { // try from 03263128 to 0336312b has its CatchHandler @ 0326313c */
                    /* try { // try from 0326312c to 0336316b has its CatchHandler @ 03262f18 */
                    /* catch() { ... } // from try @ 0326305c with catch @ 03263130 */
                    /* catch() { ... } // from try @ 03263040 with catch @ 03263134 */
                    /* catch() { ... } // from try @ 032630c8 with catch @ 03263138 */
                    /* catch() { ... } // from try @ 03263128 with catch @ 0326313c */
  if ((DAT_04566892 & 1) == 0) {
                    /* catch() { ... } // from try @ 03263124 with catch @ 03263140 */
                    /* catch() { ... } // from try @ 0326311c with catch @ 03263144 */
                    /* catch() { ... } // from try @ 03263054 with catch @ 03263148 */
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
                    /* catch() { ... } // from try @ 03263020 with catch @ 0326314c */
                    /* catch() { ... } // from try @ 03263070 with catch @ 03263150 */
    DAT_04566892 = 1;
  }
                    /* catch() { ... } // from try @ 03263118 with catch @ 03263154
                       catch() { ... } // from try @ 03263120 with catch @ 03263154 */
  ppSVar6 = &(__this->fields).BKKILNPNELM;
  a = *ppSVar6;
  do {
                    /* try { // try from 0326316c to 0336316f has its CatchHandler @ 03263190 */
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
                    /* try { // try from 03263170 to 03363197 has its CatchHandler @ 03262f18 */
    if (pSVar3 == (System_Delegate_o *)0x0) {
                    /* catch() { ... } // from try @ 0326316c with catch @ 03263190 */
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 03263198 to 0336319f has its CatchHandler @ 032631b4 */
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,a);
                    /* try { // try from 032631a0 to 033631ab has its CatchHandler @ 03262f18 */
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
                    /* try { // try from 032631ac to 033631b3 has its CatchHandler @ 032631b4 */
                    /* catch() { ... } // from try @ 03263198 with catch @ 032631b4
                       catch() { ... } // from try @ 032631ac with catch @ 032631b4 */
  return;
}


// ===== public void .ctor()  [RVA 0x31631CC]
// MCEIBCKPIAD$$.ctor @ RVA 0x31631CC

void MCEIBCKPIAD___ctor(MCEIBCKPIAD_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KKLFGJCMPDA__o *pSVar1;
  System_Collections_Generic_List_KKLFGJCMPDA__o **ppSVar2;
  System_Action_FAIJGJCCKJC__o **ppSVar3;
  MethodInfo *extraout_x1;
  System_Action_FAIJGJCCKJC__o *pSVar4;
  
  if ((DAT_04566893 & 1) == 0) {
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
    FUN_01bab630(&Method_MCEIBCKPIAD_<>c_CJHLLKHEEHH__);
    FUN_01bab630(&Method_MCEIBCKPIAD_<>c_LCCHBPEFMJN__);
    FUN_01bab630(&MCEIBCKPIAD_<>c_TypeInfo);
    DAT_04566893 = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  (__this->fields).BDIHNIGKDLK = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  ppSVar2 = &(__this->fields).FEOGLGJBJDE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  ppSVar2 = &(__this->fields).HOIHAFALJIG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_KKLFGJCMPDA__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<KKLFGJCMPDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<KKLFGJCMPDA>__ctor__);
  ppSVar2 = &(__this->fields).MNIGCKKBGOH;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_0;
  if (pSVar4 == (System_Action_FAIJGJCCKJC__o *)0x0) {
    if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_FAIJGJCCKJC__o *)thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar3 = &MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_0;
    *ppSVar3 = pSVar4;
    thunk_FUN_01c20e04(ppSVar3,pSVar4);
  }
  ppSVar3 = &(__this->fields).BJPKLLHHPAO;
  *ppSVar3 = pSVar4;
  thunk_FUN_01c20e04(ppSVar3,pSVar4);
  if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar4 = MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_1;
  if (pSVar4 == (System_Action_FAIJGJCCKJC__o *)0x0) {
    if ((MCEIBCKPIAD_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = (System_Action_FAIJGJCCKJC__o *)thunk_FUN_01bda818(System_Action<FAIJGJCCKJC>_TypeInfo)
    ;
    System_Action<object>___ctor();
    ppSVar3 = &MCEIBCKPIAD_<>c_TypeInfo->static_fields->__9__14_1;
    *ppSVar3 = pSVar4;
    thunk_FUN_01c20e04(ppSVar3,pSVar4);
  }
  ppSVar3 = &(__this->fields).BKKILNPNELM;
  *ppSVar3 = pSVar4;
  thunk_FUN_01c20e04(ppSVar3,pSVar4);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void DGLJCGNHLIG()  [RVA 0x3163408]
// MCEIBCKPIAD$$DGLJCGNHLIG @ RVA 0x3163408

void MCEIBCKPIAD__DGLJCGNHLIG(MCEIBCKPIAD_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_List_KKLFGJCMPDA__o *pSVar2;
  
  if ((DAT_04566894 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Clear__);
                    /* try { // try from 0326342c to 0336351f has its CatchHandler @ 0326342c
                       catch() { ... } // from try @ 0326342c with catch @ 0326342c
                       catch() { ... } // from try @ 032635a0 with catch @ 0326342c
                       catch() { ... } // from try @ 032635e0 with catch @ 0326342c
                       catch() { ... } // from try @ 03263610 with catch @ 0326342c
                       catch() { ... } // from try @ 03263640 with catch @ 0326342c */
    DAT_04566894 = 1;
  }
  pSVar2 = (__this->fields).MNIGCKKBGOH;
  if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
    iVar1 = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < iVar1) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
    }
    pSVar2 = (__this->fields).BDIHNIGKDLK;
    if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
      iVar1 = (pSVar2->fields)._size;
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      if (0 < iVar1) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
      }
      pSVar2 = (__this->fields).FEOGLGJBJDE;
      if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
        iVar1 = (pSVar2->fields)._size;
        (pSVar2->fields)._size = 0;
        (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
        if (0 < iVar1) {
          System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0);
        }
        pSVar2 = (__this->fields).HOIHAFALJIG;
        if (pSVar2 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
          iVar1 = (pSVar2->fields)._size;
          (pSVar2->fields)._size = 0;
          (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
          if (0 < iVar1) {
            System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,iVar1,(MethodInfo *)0x0)
            ;
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void JPOHHBPJMON(Action<FAIJGJCCKJC> CJNHFNHJHPE)  [RVA 0x31634FC]
// MCEIBCKPIAD$$JPOHHBPJMON @ RVA 0x31634FC

void MCEIBCKPIAD__JPOHHBPJMON
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *source;
  
  if ((DAT_04566895 & 1) == 0) {
                    /* try { // try from 03263520 to 03363527 has its CatchHandler @ 032635f0 */
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    DAT_04566895 = 1;
  }
  ppSVar6 = &(__this->fields).BJPKLLHHPAO;
  source = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Remove
                       ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                        (MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* try { // try from 032635a0 to 033635c7 has its CatchHandler @ 0326342c */
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
                    /* try { // try from 0326357c to 0336359f has its CatchHandler @ 032635e4 */
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,source);
    bVar2 = source != pSVar5;
    source = pSVar5;
  } while (bVar2);
  return;
}


// ===== public void OPMMMKCAADB(KKLFGJCMPDA IMNBAFCEDMA)  [RVA 0x31635AC]
// MCEIBCKPIAD$$OPMMMKCAADB @ RVA 0x31635AC

void MCEIBCKPIAD__OPMMMKCAADB(MCEIBCKPIAD_o *__this,KKLFGJCMPDA_o *IMNBAFCEDMA,MethodInfo *method)

{
  System_Collections_Generic_List_KKLFGJCMPDA__o *__this_00;
  System_Action_FAIJGJCCKJC__o *pSVar1;
  
  if ((DAT_04566896 & 1) == 0) {
                    /* try { // try from 032635c8 to 033635cf has its CatchHandler @ 032635e8 */
                    /* try { // try from 032635d0 to 033635df has its CatchHandler @ 032635ec */
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
                    /* try { // try from 032635e0 to 0336360b has its CatchHandler @ 0326342c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0326357c with catch @ 032635e4
                        */
    DAT_04566896 = 1;
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032635c8 with catch @ 032635e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032635d0 with catch @ 032635ec
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03263520 with catch @ 032635f0
                        */
  if ((IMNBAFCEDMA != (KKLFGJCMPDA_o *)0x0) &&
     (pSVar1 = (__this->fields).BKKILNPNELM, pSVar1 != (System_Action_FAIJGJCCKJC__o *)0x0)) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(IMNBAFCEDMA->fields).EAAEJJKFKEG,
               (pSVar1->fields).super.super.method);
    __this_00 = (__this->fields).FEOGLGJBJDE;
                    /* try { // try from 0326360c to 0336360f has its CatchHandler @ 03263630 */
    if (__this_00 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* try { // try from 03263610 to 03363637 has its CatchHandler @ 0326342c */
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IMNBAFCEDMA,
                 Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
                    /* catch() { ... } // from try @ 0326360c with catch @ 03263630 */
                    /* try { // try from 03263638 to 0336363f has its CatchHandler @ 03263654 */
                    /* try { // try from 03263640 to 0336364b has its CatchHandler @ 0326342c */
      DJNBJHPDKDP__OFNFOGHFDML<object>
                ((System_Collections_Generic_List_T__o *)(__this->fields).HOIHAFALJIG,
                 (Il2CppObject *)IMNBAFCEDMA,Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void GIENGNEGHPJ(JMDPBFOCHHP.NOPCEDPNNKO GHAAKPDHIJJ)  [RVA 0x3163648]
// MCEIBCKPIAD$$GIENGNEGHPJ @ RVA 0x3163648

void MCEIBCKPIAD__GIENGNEGHPJ
               (MCEIBCKPIAD_o *__this,JMDPBFOCHHP_NOPCEDPNNKO_o *GHAAKPDHIJJ,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *IOOJAJAPMBM;
  bool bVar2;
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *__this_00;
  KKLJIDJBFEI_o *__this_01;
  int64_t iVar3;
  FAIJGJCCKJC_o *__this_02;
  KKLFGJCMPDA_o *__this_03;
  System_Collections_Generic_List_KKLFGJCMPDA__o *pSVar4;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  KKLFGJCMPDA_array *pKVar5;
  long lVar6;
  System_Collections_Generic_List_Enumerator_T__o local_88;
  System_Collections_Generic_List_Enumerator_T__o local_70;
  
                    /* try { // try from 0326364c to 03363653 has its CatchHandler @ 03263654 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03263638 with catch @ 03263654
                       catch(type#2 @ 00000000) { ... } // from try @ 0326364c with catch @ 03263654
                        */
  method_00 = (MethodInfo *)GHAAKPDHIJJ;
  if ((DAT_04566897 & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_get_Current__
                );
    FUN_01bab630(&FAIJGJCCKJC_TypeInfo);
    FUN_01bab630(&KKLFGJCMPDA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    DAT_04566897 = 1;
    method_00 = extraout_x1;
  }
  local_70.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_70.fields._index = 0;
  local_70.fields._version = 0;
  local_70.fields._current = (Il2CppObject *)0x0;
  MCEIBCKPIAD__DGLJCGNHLIG(__this,method_00);
  if (GHAAKPDHIJJ != (JMDPBFOCHHP_NOPCEDPNNKO_o *)0x0) {
    __this_00 = (GHAAKPDHIJJ->fields).NPGALOBDIHL;
    if (__this_00 == (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              (&local_88,(System_Collections_Generic_List_object__o *)__this_00,
               Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_GetEnumerator__);
    local_70.fields._index = local_88.fields._index;
    local_70.fields._version = local_88.fields._version;
    local_70.fields._list = local_88.fields._list;
    local_70.fields._current = local_88.fields._current;
    while (bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                             (&local_70,
                              Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_MoveNext__
                             ), IOOJAJAPMBM = local_70.fields._current, bVar2) {
      __this_01 = KKLJIDJBFEI__MBHIKFMIDAO((MethodInfo *)0x0);
      if (__this_01 == (KKLJIDJBFEI_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      iVar3 = KKLJIDJBFEI__HEDLNKCNMCI(__this_01,(MethodInfo *)0x0);
      if ((JMDPBFOCHHP_ENBCJNLAHAC_o *)IOOJAJAPMBM == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      if (((0 < ((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)IOOJAJAPMBM + 0x10))->NFKHJPMMNLM) &&
          (lVar6 = ((JMDPBFOCHHP_ENBCJNLAHAC_Fields *)((long)IOOJAJAPMBM + 0x10))->CEGNAMELGID,
          0 < lVar6)) && (iVar3 <= lVar6)) {
        __this_02 = (FAIJGJCCKJC_o *)thunk_FUN_01bda818(iVar3,FAIJGJCCKJC_TypeInfo);
        FAIJGJCCKJC___ctor(__this_02,(JMDPBFOCHHP_ENBCJNLAHAC_o *)IOOJAJAPMBM,method);
        __this_03 = (KKLFGJCMPDA_o *)thunk_FUN_01bda818(KKLFGJCMPDA_TypeInfo);
        KKLFGJCMPDA___ctor(__this_03,__this,__this_02,(MethodInfo *)0x0);
        if (__this_03 == (KKLFGJCMPDA_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        bVar2 = KKLFGJCMPDA__AJDOCKPPMLK(__this_03,(MethodInfo *)0x0);
        lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
        if (bVar2) {
          bVar2 = KKLFGJCMPDA__HLLOKAJEBDE(__this_03,(MethodInfo *)0x0);
          lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
          if (bVar2) {
            pSVar4 = (__this->fields).FEOGLGJBJDE;
            if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            pKVar5 = (pSVar4->fields)._items;
            (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
            if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_01bab8c8();
            }
            uVar1 = (pSVar4->fields)._size;
            if (uVar1 < (uint)pKVar5->max_length) {
              (pSVar4->fields)._size = uVar1 + 1;
              pKVar5->m_Items[(int)uVar1] = __this_03;
              thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
            }
            else {
              __this_02 = *(FAIJGJCCKJC_o **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pSVar4,
                         (Il2CppObject *)__this_03,(MethodInfo_26E4DAC *)__this_02);
            }
          }
          else {
            bVar2 = KKLFGJCMPDA__PLLLOINIKKH(__this_03,(MethodInfo *)0x0);
            lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
            if (bVar2) {
              pSVar4 = (__this->fields).HOIHAFALJIG;
              if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              pKVar5 = (pSVar4->fields)._items;
              (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
              if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01bab8c8();
              }
              uVar1 = (pSVar4->fields)._size;
              if (uVar1 < (uint)pKVar5->max_length) {
                (pSVar4->fields)._size = uVar1 + 1;
                pKVar5->m_Items[(int)uVar1] = __this_03;
                thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
              }
              else {
                __this_02 = *(FAIJGJCCKJC_o **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar4,
                           (Il2CppObject *)__this_03,(MethodInfo_26E4DAC *)__this_02);
              }
            }
          }
        }
        else {
          pSVar4 = (__this->fields).BDIHNIGKDLK;
          if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          pKVar5 = (pSVar4->fields)._items;
          (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
          if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01bab8c8();
          }
          uVar1 = (pSVar4->fields)._size;
          if (uVar1 < (uint)pKVar5->max_length) {
            (pSVar4->fields)._size = uVar1 + 1;
            pKVar5->m_Items[(int)uVar1] = __this_03;
            thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
          }
          else {
            __this_02 = *(FAIJGJCCKJC_o **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_03
                       ,(MethodInfo_26E4DAC *)__this_02);
          }
        }
        lVar6 = Method_System_Collections_Generic_List<KKLFGJCMPDA>_Add__;
        pSVar4 = (__this->fields).MNIGCKKBGOH;
        if (pSVar4 == (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        pKVar5 = (pSVar4->fields)._items;
        (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
        if (pKVar5 == (KKLFGJCMPDA_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        uVar1 = (pSVar4->fields)._size;
        if (uVar1 < (uint)pKVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pKVar5->m_Items[(int)uVar1] = __this_03;
          thunk_FUN_01c20e04(pKVar5->m_Items + (int)uVar1,__this_03);
          method = (MethodInfo *)__this_02;
        }
        else {
          method = *(MethodInfo **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70);
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)__this_03,
                     (MethodInfo_26E4DAC *)method);
        }
      }
    }
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (&local_70,
               Method_System_Collections_Generic_List_Enumerator<JMDPBFOCHHP_ENBCJNLAHAC>_Dispose__)
    ;
  }
  return;
}


// ===== public void MHGHLDANJBO(KKLFGJCMPDA IMNBAFCEDMA)  [RVA 0x3163D88]
// MCEIBCKPIAD$$MHGHLDANJBO @ RVA 0x3163D88

void MCEIBCKPIAD__MHGHLDANJBO(MCEIBCKPIAD_o *__this,KKLFGJCMPDA_o *IMNBAFCEDMA,MethodInfo *method)

{
  System_Collections_Generic_List_KKLFGJCMPDA__o *__this_00;
  System_Action_FAIJGJCCKJC__o *pSVar1;
  
  if ((DAT_04566898 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
    DAT_04566898 = 1;
  }
  if ((IMNBAFCEDMA != (KKLFGJCMPDA_o *)0x0) &&
     (pSVar1 = (__this->fields).BJPKLLHHPAO, pSVar1 != (System_Action_FAIJGJCCKJC__o *)0x0)) {
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(IMNBAFCEDMA->fields).EAAEJJKFKEG,
               (pSVar1->fields).super.super.method);
    __this_00 = (__this->fields).BDIHNIGKDLK;
    if (__this_00 != (System_Collections_Generic_List_KKLFGJCMPDA__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)IMNBAFCEDMA,
                 Method_System_Collections_Generic_List<KKLFGJCMPDA>_Remove__);
      DJNBJHPDKDP__OFNFOGHFDML<object>
                ((System_Collections_Generic_List_T__o *)(__this->fields).FEOGLGJBJDE,
                 (Il2CppObject *)IMNBAFCEDMA,Method_DJNBJHPDKDP_OFNFOGHFDML<KKLFGJCMPDA>__);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void ACHOOLNHMPK(Action<FAIJGJCCKJC> CJNHFNHJHPE)  [RVA 0x3163E24]
// MCEIBCKPIAD$$ACHOOLNHMPK @ RVA 0x3163E24

void MCEIBCKPIAD__ACHOOLNHMPK
               (MCEIBCKPIAD_o *__this,System_Action_FAIJGJCCKJC__o *CJNHFNHJHPE,MethodInfo *method)

{
  System_Action_FAIJGJCCKJC__c *pSVar1;
  bool bVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_FAIJGJCCKJC__o *pSVar5;
  System_Action_FAIJGJCCKJC__o **ppSVar6;
  System_Action_FAIJGJCCKJC__o *a;
  
  if ((DAT_04566899 & 1) == 0) {
    FUN_01bab630(&System_Action<FAIJGJCCKJC>_TypeInfo);
    DAT_04566899 = 1;
  }
  ppSVar6 = &(__this->fields).BJPKLLHHPAO;
  a = *ppSVar6;
  do {
    pSVar3 = System_Delegate__Combine
                       ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
    pSVar1 = System_Action<FAIJGJCCKJC>_TypeInfo;
    if (pSVar3 == (System_Delegate_o *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = thunk_FUN_01bda71c(pSVar3,System_Action<FAIJGJCCKJC>_TypeInfo);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(pSVar3,pSVar1);
      }
    }
    pSVar5 = (System_Action_FAIJGJCCKJC__o *)FUN_01c07368(ppSVar6,lVar4,a);
    bVar2 = a != pSVar5;
    a = pSVar5;
  } while (bVar2);
  return;
}

