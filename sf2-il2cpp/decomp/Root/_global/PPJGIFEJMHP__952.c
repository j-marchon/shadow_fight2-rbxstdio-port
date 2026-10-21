// TypeDefIndex 952
// Namespace: 
// public class PPJGIFEJMHP
// Fields:
//   private LHOMEBJDFLD KLBBHFPOLKF; // 0x10
//   private List<MGNDHCBAPEN<long, Action>> JGMOJNCMKAG; // 0x18
//   private bool JMILCMNCCOM; // 0x20

// ===== public void HKBJKGJHLNJ(Action KCPFFLHCCIN)  [RVA 0x30ABFEC]
// PPJGIFEJMHP$$HKBJKGJHLNJ @ RVA 0x30ABFEC

void PPJGIFEJMHP__HKBJKGJHLNJ(PPJGIFEJMHP_o *__this,System_Action_o *KCPFFLHCCIN,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *pSVar2;
  Il2CppObject *pIVar3;
  System_Action_o *extraout_x1;
  System_Action_o *extraout_x1_00;
  System_Action_o *extraout_x1_01;
  System_Action_o *method_00;
  int index;
  
  method_00 = KCPFFLHCCIN;
  if ((DAT_045661a8 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
    DAT_045661a8 = 1;
    method_00 = extraout_x1;
  }
  pSVar2 = (__this->fields).JGMOJNCMKAG;
  if (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
    index = 0;
    do {
      if ((pSVar2->fields)._size <= index) {
        PPJGIFEJMHP__GILDFJMBFIA(__this,(MethodInfo *)method_00);
        return;
      }
      pIVar3 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar2,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__
                         );
      if (pIVar3 == (Il2CppObject *)0x0) break;
      bVar1 = System_Delegate__op_Equality
                        (pIVar3[1].monitor,(System_Delegate_o *)KCPFFLHCCIN,(MethodInfo *)0x0);
      method_00 = extraout_x1_00;
      if (bVar1) {
        pSVar2 = (__this->fields).JGMOJNCMKAG;
        if (pSVar2 == (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) break;
        System_Collections_Generic_List<object>__set_Item
                  ((System_Collections_Generic_List_object__o *)pSVar2,index,(Il2CppObject *)0x0,
                   Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
        method_00 = extraout_x1_01;
      }
      pSVar2 = (__this->fields).JGMOJNCMKAG;
      index = index + 1;
                    /* try { // try from 031ac0a4 to 032ac27b has its CatchHandler @ 031ac0a4
                       catch() { ... } // from try @ 031ac0a4 with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac518 with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac520 with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac5ac with catch @ 031ac0a4
                       catch() { ... } // from try @ 031ac65c with catch @ 031ac0a4 */
    } while (pSVar2 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GILDFJMBFIA()  [RVA 0x30AC0C0]
// PPJGIFEJMHP$$GILDFJMBFIA @ RVA 0x30AC0C0

void PPJGIFEJMHP__GILDFJMBFIA(PPJGIFEJMHP_o *__this,MethodInfo *method)

{
  System_Predicate_MGNDHCBAPEN_long__Action___o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *__this_00;
  System_Predicate_MGNDHCBAPEN_long__Action___o *match;
  
  if ((DAT_045661a9 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_RemoveAll__);
    FUN_01bab630(&System_Predicate<MGNDHCBAPEN<long,_Action>>_TypeInfo);
    FUN_01bab630(&Method_PPJGIFEJMHP_<>c_EIFMPDNLPND__);
    FUN_01bab630(&PPJGIFEJMHP_<>c_TypeInfo);
    DAT_045661a9 = 1;
    method = extraout_x1;
  }
  if ((__this->fields).JMILCMNCCOM != false) {
    return;
  }
  __this_00 = (__this->fields).JGMOJNCMKAG;
  if ((PPJGIFEJMHP_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(PPJGIFEJMHP_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  match = PPJGIFEJMHP_<>c_TypeInfo->static_fields->__9__6_0;
  if (match == (System_Predicate_MGNDHCBAPEN_long__Action___o *)0x0) {
    if ((PPJGIFEJMHP_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(PPJGIFEJMHP_<>c_TypeInfo,method);
    }
    match = (System_Predicate_MGNDHCBAPEN_long__Action___o *)
            thunk_FUN_01bda818(System_Predicate<MGNDHCBAPEN<long,_Action>>_TypeInfo);
    System_Predicate<object>___ctor();
    ppSVar1 = &PPJGIFEJMHP_<>c_TypeInfo->static_fields->__9__6_0;
    *ppSVar1 = match;
    thunk_FUN_01c20e04(ppSVar1,match);
  }
  if (__this_00 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
    System_Collections_Generic_List<object>__RemoveAll
              ((System_Collections_Generic_List_object__o *)__this_00,(System_Predicate_T__o *)match
               ,Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_RemoveAll__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void LGDEICDAEAF(long JNJCMIEHOHC, Action KCPFFLHCCIN)  [RVA 0x30AC1DC]
// PPJGIFEJMHP$$LGDEICDAEAF @ RVA 0x30AC1DC

void PPJGIFEJMHP__LGDEICDAEAF
               (PPJGIFEJMHP_o *__this,int64_t JNJCMIEHOHC,System_Action_o *KCPFFLHCCIN,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  MGNDHCBAPEN_long__Action__o *__this_00;
  MGNDHCBAPEN_long__Action__array *pMVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *__this_01;
  
  if ((DAT_045661aa & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_Add__);
    FUN_01bab630(&Method_MGNDHCBAPEN<long,_Action>__ctor__);
    FUN_01bab630(&MGNDHCBAPEN<long,_Action>_TypeInfo);
    DAT_045661aa = 1;
  }
  __this_01 = (__this->fields).JGMOJNCMKAG;
  __this_00 = (MGNDHCBAPEN_long__Action__o *)thunk_FUN_01bda818(MGNDHCBAPEN<long,_Action>_TypeInfo);
  MGNDHCBAPEN<long,_object>___ctor
            ((MGNDHCBAPEN_T1__T2__o *)__this_00,JNJCMIEHOHC,(Il2CppObject *)KCPFFLHCCIN,
             Method_MGNDHCBAPEN<long,_Action>__ctor__);
  lVar2 = Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_Add__;
  if (__this_01 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
    pMVar3 = (__this_01->fields)._items;
                    /* try { // try from 031ac27c to 032ac29f has its CatchHandler @ 031ac574 */
    (__this_01->fields)._version = (__this_01->fields)._version + 1;
    if (pMVar3 != (MGNDHCBAPEN_long__Action__array *)0x0) {
      uVar1 = (__this_01->fields)._size;
      if (uVar1 < (uint)pMVar3->max_length) {
        (__this_01->fields)._size = uVar1 + 1;
                    /* try { // try from 031ac2a0 to 032ac2ab has its CatchHandler @ 031ac56c */
        pMVar3->m_Items[(int)uVar1] = __this_00;
        thunk_FUN_01c20e04(pMVar3->m_Items + (int)uVar1,__this_00);
        return;
      }
                    /* try { // try from 031ac2c8 to 032ac2cb has its CatchHandler @ 031ac540 */
                    /* try { // try from 031ac2cc to 032ac2db has its CatchHandler @ 031ac55c */
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(LHOMEBJDFLD GBLLKHKEJOA)  [RVA 0x30AC2E8]
// PPJGIFEJMHP$$.ctor @ RVA 0x30AC2E8

void PPJGIFEJMHP___ctor(PPJGIFEJMHP_o *__this,LHOMEBJDFLD_o *GBLLKHKEJOA,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o **ppSVar1;
  System_Action_bool__o *CJNHFNHJHPE;
  LHOMEBJDFLD_o *__this_01;
  PPJGIFEJMHP_Fields *pPVar2;
  
                    /* try { // try from 031ac30c to 032ac30f has its CatchHandler @ 031ac558 */
                    /* try { // try from 031ac310 to 032ac323 has its CatchHandler @ 031ac570 */
  if ((DAT_045661ab & 1) == 0) {
    FUN_01bab630(&System_Action<bool>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>__ctor__);
                    /* try { // try from 031ac344 to 032ac347 has its CatchHandler @ 031ac54c */
                    /* try { // try from 031ac348 to 032ac357 has its CatchHandler @ 031ac564 */
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_TypeInfo);
                    /* try { // try from 031ac358 to 032ac363 has its CatchHandler @ 031ac560 */
    FUN_01bab630(&Method_PPJGIFEJMHP_KEGLPIKPCOJ__);
    DAT_045661ab = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>__ctor__);
  ppSVar1 = &(__this->fields).JGMOJNCMKAG;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 031ac390 to 032ac3b7 has its CatchHandler @ 031ac53c */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pPVar2 = &__this->fields;
  pPVar2->KLBBHFPOLKF = GBLLKHKEJOA;
  thunk_FUN_01c20e04(pPVar2,GBLLKHKEJOA);
  __this_01 = pPVar2->KLBBHFPOLKF;
  CJNHFNHJHPE = (System_Action_bool__o *)thunk_FUN_01bda818(System_Action<bool>_TypeInfo);
                    /* try { // try from 031ac3b8 to 032ac3d3 has its CatchHandler @ 031ac52c */
  System_Action<bool>___ctor();
  if (__this_01 != (LHOMEBJDFLD_o *)0x0) {
    LHOMEBJDFLD__CPKBBJHHFDC(__this_01,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 031ac3ec to 032ac3ef has its CatchHandler @ 031ac520 */
  FUN_01bab8c8();
}


// ===== private void KEGLPIKPCOJ(bool IBEBJHMKFGE)  [RVA 0x30AC3F0]
// PPJGIFEJMHP$$KEGLPIKPCOJ @ RVA 0x30AC3F0

void PPJGIFEJMHP__KEGLPIKPCOJ(PPJGIFEJMHP_o *__this,bool IBEBJHMKFGE,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *pSVar1;
  Il2CppObject *pIVar2;
  LHOMEBJDFLD_o *__this_00;
  PGICCMFLDPI_o *pPVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  void *pvVar4;
  int index;
  
                    /* try { // try from 031ac3f0 to 032ac3ff has its CatchHandler @ 031ac528 */
  method_00 = (MethodInfo *)(ulong)IBEBJHMKFGE;
  if ((DAT_045661ac & 1) == 0) {
                    /* try { // try from 031ac410 to 032ac41b has its CatchHandler @ 031ac524 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
    DAT_045661ac = 1;
    method_00 = extraout_x1;
  }
  pSVar1 = (__this->fields).JGMOJNCMKAG;
  (__this->fields).JMILCMNCCOM = true;
  if (pSVar1 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) {
                    /* try { // try from 031ac454 to 032ac457 has its CatchHandler @ 031ac554 */
                    /* try { // try from 031ac458 to 032ac46b has its CatchHandler @ 031ac568 */
    index = 0;
    do {
      if ((pSVar1->fields)._size <= index) {
        (__this->fields).JMILCMNCCOM = false;
                    /* try { // try from 031ac50c to 032ac513 has its CatchHandler @ 031ac57c */
        PPJGIFEJMHP__GILDFJMBFIA(__this,method_00);
        return;
      }
      pIVar2 = System_Collections_Generic_List<object>__get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,index,
                          Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_get_Item__
                         );
      method_00 = extraout_x1_00;
      if (pIVar2 != (Il2CppObject *)0x0) {
        __this_00 = (__this->fields).KLBBHFPOLKF;
                    /* try { // try from 031ac488 to 032ac48b has its CatchHandler @ 031ac538 */
                    /* try { // try from 031ac48c to 032ac4a3 has its CatchHandler @ 031ac550 */
        if ((__this_00 == (LHOMEBJDFLD_o *)0x0) ||
           (pPVar3 = LHOMEBJDFLD__CFGBGFEIMEK(__this_00,(MethodInfo *)0x0),
           pPVar3 == (PGICCMFLDPI_o *)0x0)) break;
        method_00 = extraout_x1_01;
        if ((long)pIVar2[1].klass <= (pPVar3->fields).GDKPGIBMFPA) {
                    /* try { // try from 031ac4a8 to 032ac4af has its CatchHandler @ 031ac548 */
          pvVar4 = pIVar2[1].monitor;
          if (pvVar4 != (void *)0x0) {
            if (pvVar4 == (void *)0x0) break;
            (**(code **)((long)pvVar4 + 0x18))
                      (*(undefined8 *)((long)pvVar4 + 0x40),*(undefined8 *)((long)pvVar4 + 0x28));
          }
                    /* try { // try from 031ac4cc to 032ac4d3 has its CatchHandler @ 031ac534 */
          pSVar1 = (__this->fields).JGMOJNCMKAG;
          if (pSVar1 == (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0) break;
                    /* try { // try from 031ac4d4 to 032ac4e7 has its CatchHandler @ 031ac544 */
          System_Collections_Generic_List<object>__set_Item
                    ((System_Collections_Generic_List_object__o *)pSVar1,index,(Il2CppObject *)0x0,
                     Method_System_Collections_Generic_List<MGNDHCBAPEN<long,_Action>>_set_Item__);
          method_00 = extraout_x1_02;
        }
      }
      pSVar1 = (__this->fields).JGMOJNCMKAG;
      index = index + 1;
    } while (pSVar1 != (System_Collections_Generic_List_MGNDHCBAPEN_long__Action___o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

