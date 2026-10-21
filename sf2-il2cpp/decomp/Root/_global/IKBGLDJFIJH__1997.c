// TypeDefIndex 1997
// Namespace: 
// public abstract class IKBGLDJFIJH : IJIHLBLCJMG
// Fields:
//   private readonly List<Action> LBCPFBBIBCL; // 0x28
//   private int DGFKDMNEAJJ; // 0x30

// ===== public override void NKLGCNHLBAF()  [RVA 0x3293264]
// IKBGLDJFIJH$$NKLGCNHLBAF @ RVA 0x3293264

void IKBGLDJFIJH__NKLGCNHLBAF(IKBGLDJFIJH_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Action__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04567342 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_get_Item__);
    DAT_04567342 = 1;
  }
  __this_00 = (__this->fields).LBCPFBBIBCL;
  index = (__this->fields).DGFKDMNEAJJ + 1;
  (__this->fields).DGFKDMNEAJJ = index;
  if (__this_00 == (System_Collections_Generic_List_Action__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._size <= index) {
    IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
    return;
  }
  pIVar1 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,index,
                      Method_System_Collections_Generic_List<Action>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033932ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1[1].monitor)(pIVar1[4].klass,pIVar1[2].monitor);
    return;
  }
  return;
}


// ===== protected void .ctor()  [RVA 0x3293318]
// IKBGLDJFIJH$$.ctor @ RVA 0x3293318

void IKBGLDJFIJH___ctor(IKBGLDJFIJH_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Action__o *__this_00;
  System_Collections_Generic_List_Action__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 03393338 to 0349333f has its CatchHandler @ 03393540 */
  if ((DAT_04567341 & 1) == 0) {
                    /* try { // try from 0339334c to 03493357 has its CatchHandler @ 03393538 */
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Action>_TypeInfo);
    DAT_04567341 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_Action__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Action>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Action>__ctor__);
  ppSVar1 = &(__this->fields).LBCPFBBIBCL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).DGFKDMNEAJJ = -1;
                    /* try { // try from 03393398 to 034933a7 has its CatchHandler @ 0339353c */
  IJIHLBLCJMG___ctor((IJIHLBLCJMG_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected void OEHBFKCJMFA()  [RVA 0x3293268]
// IKBGLDJFIJH$$OEHBFKCJMFA @ RVA 0x3293268

void IKBGLDJFIJH__OEHBFKCJMFA(IKBGLDJFIJH_o *__this,MethodInfo *method)

{
  int index;
  System_Collections_Generic_List_Action__o *__this_00;
  Il2CppObject *pIVar1;
  
  if ((DAT_04567342 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_get_Item__);
    DAT_04567342 = 1;
  }
  __this_00 = (__this->fields).LBCPFBBIBCL;
  index = (__this->fields).DGFKDMNEAJJ + 1;
  (__this->fields).DGFKDMNEAJJ = index;
  if (__this_00 == (System_Collections_Generic_List_Action__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields)._size <= index) {
    IJIHLBLCJMG__FGNINNOOCCL((IJIHLBLCJMG_o *)__this,true,(MethodInfo *)0x0);
    return;
  }
  pIVar1 = System_Collections_Generic_List<object>__get_Item
                     ((System_Collections_Generic_List_object__o *)__this_00,index,
                      Method_System_Collections_Generic_List<Action>_get_Item__);
  if (pIVar1 != (Il2CppObject *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033932ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pIVar1[1].monitor)(pIVar1[4].klass,pIVar1[2].monitor);
    return;
  }
  return;
}


// ===== private void DPPHJFGLGGK(Action CPECAEHDDDB)  [RVA 0x32933A8]
// IKBGLDJFIJH$$DPPHJFGLGGK @ RVA 0x32933A8

void IKBGLDJFIJH__DPPHJFGLGGK(IKBGLDJFIJH_o *__this,System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  System_Collections_Generic_List_Action__o *pSVar4;
  System_Action_array *pSVar5;
  
                    /* try { // try from 033933a8 to 034933b3 has its CatchHandler @ 03393534 */
  if ((DAT_04567343 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Action>_Contains__);
    FUN_01bab630(&StringLiteral_11162/*"RegisterAction: try to add duplicate action! Skip..."*/);
    DAT_04567343 = 1;
  }
  pSVar4 = (__this->fields).LBCPFBBIBCL;
                    /* try { // try from 033933f4 to 03493403 has its CatchHandler @ 0339353c */
  if (pSVar4 != (System_Collections_Generic_List_Action__o *)0x0) {
                    /* try { // try from 03393408 to 03493413 has its CatchHandler @ 03393530 */
    bVar3 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar4,
                       (Il2CppObject *)CPECAEHDDDB,
                       Method_System_Collections_Generic_List<Action>_Contains__);
    lVar2 = Method_System_Collections_Generic_List<Action>_Add__;
    if (bVar3) {
      KFJJHMDIFIG__ONCJPMNKDIM((Il2CppObject *)__this,StringLiteral_11162/*"RegisterAction: try to add duplicate action! Skip..."*/,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (__this->fields).LBCPFBBIBCL;
    if (pSVar4 != (System_Collections_Generic_List_Action__o *)0x0) {
      pSVar5 = (pSVar4->fields)._items;
      (pSVar4->fields)._version = (pSVar4->fields)._version + 1;
      if (pSVar5 != (System_Action_array *)0x0) {
        uVar1 = (pSVar4->fields)._size;
                    /* try { // try from 0339345c to 03493473 has its CatchHandler @ 0339353c */
        if (uVar1 < (uint)pSVar5->max_length) {
          (pSVar4->fields)._size = uVar1 + 1;
          pSVar5->m_Items[(int)uVar1] = CPECAEHDDDB;
                    /* try { // try from 03393478 to 03493497 has its CatchHandler @ 03393528 */
          thunk_FUN_01c20e04(pSVar5->m_Items + (int)uVar1,CPECAEHDDDB);
          return;
        }
                    /* try { // try from 0339349c to 034934bb has its CatchHandler @ 0339352c */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)CPECAEHDDDB,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected void BOLHJAOMBCB(Action[] DLOFGOGAGAA)  [RVA 0x32934AC]
// IKBGLDJFIJH$$BOLHJAOMBCB @ RVA 0x32934AC

void IKBGLDJFIJH__BOLHJAOMBCB
               (IKBGLDJFIJH_o *__this,System_Action_array *DLOFGOGAGAA,MethodInfo *method)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (DLOFGOGAGAA == (System_Action_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if (0 < (int)DLOFGOGAGAA->max_length) {
                    /* try { // try from 033934d0 to 034934e7 has its CatchHandler @ 03393524 */
    uVar3 = 0;
    uVar2 = DLOFGOGAGAA->max_length & 0xffffffff;
    do {
      if (uVar2 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* try { // try from 033934e8 to 03493557 has its CatchHandler @ 03393214 */
      IKBGLDJFIJH__DPPHJFGLGGK(__this,DLOFGOGAGAA->m_Items[uVar3],method);
      uVar1 = (uint)DLOFGOGAGAA->max_length;
      uVar2 = (ulong)uVar1;
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar1);
  }
  return;
}

