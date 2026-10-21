// KICEBKFFJJA.EDEMEPDGLOP$$CMJJGGHHCEN @ RVA 0x3378354

void KICEBKFFJJA_EDEMEPDGLOP__CMJJGGHHCEN
               (KICEBKFFJJA_EDEMEPDGLOP_o *__this,
               System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *args,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  int iVar5;
  Il2CppObject *pIVar6;
  VirtualInvokeData *pVVar7;
  GEIHBHEDJJM_o *__this_00;
  Il2CppObject *arg2;
  System_String_o *pSVar8;
  UniRx_IScheduler_o *pUVar9;
  undefined8 uVar10;
  System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__c *pSVar11;
  UniRx_IScheduler_c *pUVar12;
  ulong uVar13;
  int32_t *piVar14;
  undefined1 local_44 [4];
  
  if ((DAT_04567b58 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&bool_TypeInfo);
    FUN_01bab630(&Method_KICEBKFFJJA_HNNLPOCFLOO_IIPCEALKIJF__);
    FUN_01bab630(&KICEBKFFJJA_HNNLPOCFLOO_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<GEIHBHEDJJM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<GEIHBHEDJJM>_TypeInfo);
    FUN_01bab630(&UniRx_IScheduler_TypeInfo);
    FUN_01bab630(&UniRx_Scheduler_TypeInfo);
    FUN_01bab630(&StringLiteral_5477);
    FUN_01bab630(&StringLiteral_22377);
    DAT_04567b58 = 1;
  }
  pIVar6 = (Il2CppObject *)thunk_FUN_01bda818(KICEBKFFJJA_HNNLPOCFLOO_TypeInfo);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
                    /* try { // try from 03478418 to 0357843f has its CatchHandler @ 03479f18 */
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar6[1].monitor = __this;
    thunk_FUN_01c20e04(&pIVar6[1].monitor,__this);
    if (args != (System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *)0x0) {
      pSVar11 = args->klass;
      uVar1._0_1_ = (pSVar11->_2).rank;
      uVar1._1_1_ = (pSVar11->_2).minimumAlignment;
      uVar13 = (ulong)uVar1;
      if (uVar13 != 0) {
        piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<GEIHBHEDJJM>_TypeInfo) {
            pVVar7 = pSVar11->vtable + *piVar14;
            goto LAB_03478484;
          }
          uVar13 = uVar13 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar13 != 0);
      }
      pVVar7 = (VirtualInvokeData *)
               FUN_01b81914(args,
                            System_Collections_Generic_IReadOnlyCollection<GEIHBHEDJJM>_TypeInfo,0);
                    /* try { // try from 03478474 to 0357849f has its CatchHandler @ 03479f14 */
LAB_03478484:
      iVar5 = (*pVVar7->methodPtr)(args,pVVar7->method);
      if (iVar5 < 1) {
        bVar4 = false;
                    /* try { // try from 034784e8 to 035784ef has its CatchHandler @ 03479d70 */
      }
      else {
        pSVar11 = args->klass;
        uVar2._0_1_ = (pSVar11->_2).rank;
        uVar2._1_1_ = (pSVar11->_2).minimumAlignment;
        uVar13 = (ulong)uVar2;
        if (uVar13 != 0) {
          piVar14 = &((pSVar11->_1).interfaceOffsets)->offset;
          do {
            if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                (Il2CppClass *)System_Collections_Generic_IReadOnlyList<GEIHBHEDJJM>_TypeInfo) {
              pVVar7 = pSVar11->vtable + *piVar14;
              goto LAB_034784fc;
            }
            uVar13 = uVar13 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar13 != 0);
        }
                    /* try { // try from 034784dc to 035784e3 has its CatchHandler @ 03479d6c */
        pVVar7 = (VirtualInvokeData *)
                 FUN_01b81914(args,System_Collections_Generic_IReadOnlyList<GEIHBHEDJJM>_TypeInfo,0)
        ;
LAB_034784fc:
                    /* try { // try from 03478500 to 03578507 has its CatchHandler @ 03479bac */
        __this_00 = (GEIHBHEDJJM_o *)(*pVVar7->methodPtr)(args,0,pVVar7->method);
        if (__this_00 == (GEIHBHEDJJM_o *)0x0) goto LAB_03478658;
                    /* try { // try from 03478510 to 03578517 has its CatchHandler @ 03479ba8 */
        bVar4 = GEIHBHEDJJM__CBCCKIJFFPH(__this_00,(MethodInfo *)0x0);
      }
      if (pIVar6 != (Il2CppObject *)0x0) {
                    /* try { // try from 0347851c to 03578537 has its CatchHandler @ 03479c98 */
        *(bool *)&pIVar6[1].klass = bVar4;
        local_44[0] = *(undefined1 *)&pIVar6[1].klass;
        pIVar6 = (Il2CppObject *)(__this->fields).__4__this;
        pSVar8 = (__this->fields).packsNames;
        arg2 = (Il2CppObject *)thunk_FUN_01bda448(bool_TypeInfo,local_44);
                    /* try { // try from 03478580 to 035785a3 has its CatchHandler @ 03479bb0 */
        pSVar8 = System_String__Format
                           (StringLiteral_22377,StringLiteral_5477,(Il2CppObject *)pSVar8,arg2,
                            (MethodInfo *)0x0);
        KFJJHMDIFIG__DHAAGKPHJLA(pIVar6,pSVar8,(MethodInfo *)0x0);
        if ((UniRx_Scheduler_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034785a4 to 0357871b has its CatchHandler @ 03477bc4 */
          thunk_FUN_01ba7564();
        }
        pUVar9 = UniRx_Scheduler__get_MainThreadEndOfFrame((MethodInfo *)0x0);
        uVar10 = thunk_FUN_01bda818(System_Action_TypeInfo);
        System_Action___ctor();
        if (pUVar9 != (UniRx_IScheduler_o *)0x0) {
          pUVar12 = pUVar9->klass;
          uVar3._0_1_ = (pUVar12->_2).rank;
          uVar3._1_1_ = (pUVar12->_2).minimumAlignment;
          uVar13 = (ulong)uVar3;
          if (uVar13 != 0) {
            piVar14 = &((pUVar12->_1).interfaceOffsets)->offset;
            do {
              if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar14 + -2))->interfaceType ==
                  (Il2CppClass *)UniRx_IScheduler_TypeInfo) {
                pVVar7 = pUVar12->vtable + (*piVar14 + 1);
                goto LAB_03478630;
              }
              uVar13 = uVar13 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar13 != 0);
          }
          pVVar7 = (VirtualInvokeData *)FUN_01b81914(pUVar9,UniRx_IScheduler_TypeInfo,1);
LAB_03478630:
          (*pVVar7->methodPtr)(pUVar9,uVar10,pVVar7->method);
          return;
        }
      }
    }
  }
LAB_03478658:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

