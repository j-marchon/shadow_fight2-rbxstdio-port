// FCJBEKHDLAF$$DDAELILPAGL @ RVA 0x33E543C

void FCJBEKHDLAF__DDAELILPAGL(FCJBEKHDLAF_o *__this,MethodInfo *method)

{
  ushort uVar1;
  bool bVar2;
  System_Collections_Generic_Queue_MGNDHCBAPEN_string__int___o *pSVar3;
  Il2CppObject *pIVar4;
  System_String_o *GIHPFBNPHMP;
  PBAKFOBIHEG_o *pPVar5;
  undefined8 uVar6;
  VirtualInvokeData *pVVar7;
  PBAKFOBIHEG_c *pPVar8;
  ulong uVar9;
  int32_t *piVar10;
  Nekki_SF2_GUI_Fight_PreFight_o *pNVar11;
  Il2CppClass *arg0;
  undefined4 local_24;
  
                    /* try { // try from 034e543c to 035e5473 has its CatchHandler @ 034e5114 */
                    /* catch() { ... } // from try @ 034e5438 with catch @ 034e5444 */
                    /* catch() { ... } // from try @ 034e542c with catch @ 034e5448 */
                    /* catch() { ... } // from try @ 034e5368 with catch @ 034e544c */
                    /* catch() { ... } // from try @ 034e5318 with catch @ 034e5450 */
                    /* catch() { ... } // from try @ 034e5420 with catch @ 034e5454 */
  if ((DAT_04567ec8 & 1) == 0) {
                    /* catch() { ... } // from try @ 034e52a0 with catch @ 034e5458 */
                    /* catch() { ... } // from try @ 034e5244 with catch @ 034e545c */
                    /* catch() { ... } // from try @ 034e5428 with catch @ 034e5460
                       catch() { ... } // from try @ 034e5430 with catch @ 034e5460 */
    FUN_01bab630(&System_Action_TypeInfo);
                    /* catch() { ... } // from try @ 034e5304 with catch @ 034e5464 */
    FUN_01bab630(&Method_FCJBEKHDLAF_DDAELILPAGL__);
                    /* try { // try from 034e5474 to 035e5477 has its CatchHandler @ 034e5488 */
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 034e5474 with catch @ 034e5488 */
                    /* try { // try from 034e5490 to 035e54f7 has its CatchHandler @ 034e550c */
    FUN_01bab630(&PBAKFOBIHEG_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_Dequeue__);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_Peek__);
    FUN_01bab630(&Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_get_Count__);
    FUN_01bab630(&StringLiteral_22293);
    DAT_04567ec8 = 1;
  }
  pSVar3 = (__this->fields).IKLIFOHCODH;
  if (pSVar3 == (System_Collections_Generic_Queue_MGNDHCBAPEN_string__int___o *)0x0)
  goto LAB_034e566c;
  if ((pSVar3->fields)._size < 1) {
    (__this->fields).LEOILJJPHJC = true;
                    /* try { // try from 034e5660 to 035e5667 has its CatchHandler @ 034e5668 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034e564c with catch @ 034e5668
                       catch(type#2 @ 00000000) { ... } // from try @ 034e5660 with catch @ 034e5668
                        */
    return;
  }
  pIVar4 = System_Collections_Generic_Queue<object>__Peek
                     ((System_Collections_Generic_Queue_T__o *)pSVar3,
                      Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_Peek__);
                    /* try { // try from 034e54f8 to 035e5503 has its CatchHandler @ 034e5114 */
  (__this->fields).LEOILJJPHJC = false;
  pNVar11 = (__this->fields).HIBPKNAIPLH;
                    /* try { // try from 034e5504 to 035e550b has its CatchHandler @ 034e550c */
                    /* catch() { ... } // from try @ 034e5490 with catch @ 034e550c
                       catch() { ... } // from try @ 034e5504 with catch @ 034e550c */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034e5510 to 035e55a3 has its CatchHandler @ 034e5510
                       catch() { ... } // from try @ 034e5510 with catch @ 034e5510
                       catch() { ... } // from try @ 034e55c8 with catch @ 034e5510
                       catch() { ... } // from try @ 034e55fc with catch @ 034e5510
                       catch() { ... } // from try @ 034e5624 with catch @ 034e5510
                       catch() { ... } // from try @ 034e5654 with catch @ 034e5510 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (pIVar4 == (Il2CppObject *)0x0) goto LAB_034e566c;
    pNVar11 = (__this->fields).HIBPKNAIPLH;
    arg0 = pIVar4[1].klass;
    local_24 = *(undefined4 *)&pIVar4[1].monitor;
    pIVar4 = (Il2CppObject *)thunk_FUN_01bda448(int_TypeInfo,&local_24);
    GIHPFBNPHMP = System_String__Format
                            (StringLiteral_22293,(Il2CppObject *)arg0,pIVar4,(MethodInfo *)0x0);
    if (pNVar11 == (Nekki_SF2_GUI_Fight_PreFight_o *)0x0) goto LAB_034e566c;
    Nekki_SF2_GUI_Fight_PreFight__ViewerDisplayDamage(pNVar11,GIHPFBNPHMP,(MethodInfo *)0x0);
  }
  pSVar3 = (__this->fields).IKLIFOHCODH;
  if (pSVar3 != (System_Collections_Generic_Queue_MGNDHCBAPEN_string__int___o *)0x0) {
                    /* try { // try from 034e55a4 to 035e55ab has its CatchHandler @ 034e5608 */
    System_Collections_Generic_Queue<object>__Dequeue
              ((System_Collections_Generic_Queue_T__o *)pSVar3,
               Method_System_Collections_Generic_Queue<MGNDHCBAPEN<string,_int>>_Dequeue__);
    pPVar5 = CoroutineManager__get_Current((MethodInfo *)0x0);
                    /* try { // try from 034e55bc to 035e55c7 has its CatchHandler @ 034e5600 */
    uVar6 = thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 034e55c8 to 035e55f7 has its CatchHandler @ 034e5510 */
    System_Action___ctor();
    if (pPVar5 != (PBAKFOBIHEG_o *)0x0) {
      pPVar8 = pPVar5->klass;
      uVar1._0_1_ = (pPVar8->_2).rank;
      uVar1._1_1_ = (pPVar8->_2).minimumAlignment;
      uVar9 = (ulong)uVar1;
      if (uVar9 != 0) {
                    /* try { // try from 034e55f8 to 035e55fb has its CatchHandler @ 034e5604 */
                    /* try { // try from 034e55fc to 035e561f has its CatchHandler @ 034e5510 */
        piVar10 = &((pPVar8->_1).interfaceOffsets)->offset;
        do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e55bc with catch @ 034e5600
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e55f8 with catch @ 034e5604
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034e55a4 with catch @ 034e5608
                        */
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)PBAKFOBIHEG_TypeInfo) {
            pVVar7 = pPVar8->vtable + (*piVar10 + 2);
            goto LAB_034e5644;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
                    /* try { // try from 034e5620 to 035e5623 has its CatchHandler @ 034e5644 */
      pVVar7 = (VirtualInvokeData *)FUN_01b81914(pPVar5,PBAKFOBIHEG_TypeInfo,2);
                    /* try { // try from 034e5624 to 035e564b has its CatchHandler @ 034e5510 */
LAB_034e5644:
                    /* catch() { ... } // from try @ 034e5620 with catch @ 034e5644 */
                    /* try { // try from 034e564c to 035e5653 has its CatchHandler @ 034e5668 */
                    /* try { // try from 034e5654 to 035e565f has its CatchHandler @ 034e5510 */
      (*pVVar7->methodPtr)(0x3f19999a,pPVar5,uVar6,pVVar7->method);
      return;
    }
  }
LAB_034e566c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

