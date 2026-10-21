// AGGMBMDDJIO.JAABMDFCMLO$$KGGBFDECDFE @ RVA 0x343BBC8

void AGGMBMDDJIO_JAABMDFCMLO__KGGBFDECDFE
               (AGGMBMDDJIO_JAABMDFCMLO_o *__this,
               System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *args,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int32_t iVar4;
  VirtualInvokeData *pVVar5;
  GEIHBHEDJJM_o *__this_00;
  System_String_o *pSVar6;
  Il2CppObject *arg1;
  System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__c *pSVar7;
  System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  AGGMBMDDJIO_o *ODHBNGEGFCJ;
  int32_t local_34;
  
  if ((DAT_045681da & 1) == 0) {
    FUN_01bab630(&AGGMBMDDJIO_BAKEOHLOMLF_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyCollection<GEIHBHEDJJM>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_IReadOnlyList<GEIHBHEDJJM>_TypeInfo);
    FUN_01bab630(&Method_PCOEHCPGBBG_AICKIDLLIBK<AGGMBMDDJIO_BAKEOHLOMLF>__);
    FUN_01bab630(&StringLiteral_11477);
    FUN_01bab630(&StringLiteral_22378);
    DAT_045681da = 1;
  }
  if (args != (System_Collections_Generic_IReadOnlyList_GEIHBHEDJJM__o *)0x0) {
    pSVar7 = args->klass;
    uVar1._0_1_ = (pSVar7->_2).rank;
    uVar1._1_1_ = (pSVar7->_2).minimumAlignment;
                    /* try { // try from 0353bc4c to 0363bc4f has its CatchHandler @ 0353bc64 */
    uVar9 = (ulong)uVar1;
                    /* try { // try from 0353bc50 to 0363bc53 has its CatchHandler @ 0353b678 */
                    /* try { // try from 0353bc54 to 0363bc57 has its CatchHandler @ 0353bc60 */
    if (uVar9 != 0) {
                    /* try { // try from 0353bc58 to 0363bc87 has its CatchHandler @ 0353b678 */
      piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
      do {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bc54 with catch @ 0353bc60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353bc4c with catch @ 0353bc64
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353b9a4 with catch @ 0353bc68
                        */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IReadOnlyCollection<GEIHBHEDJJM>_TypeInfo) {
                    /* try { // try from 0353bc88 to 0363bc8b has its CatchHandler @ 0353bc98 */
          pVVar5 = pSVar7->vtable + *piVar10;
          goto LAB_0353bc94;
        }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353b970 with catch @ 0353bc6c
                        */
        uVar9 = uVar9 - 1;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0353b914 with catch @ 0353bc70
                        */
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(args,System_Collections_Generic_IReadOnlyCollection<GEIHBHEDJJM>_TypeInfo,
                          0);
LAB_0353bc94:
                    /* catch() { ... } // from try @ 0353bc88 with catch @ 0353bc98 */
    iVar3 = (*pVVar5->methodPtr)(args,pVVar5->method);
    if (iVar3 < 1) {
      iVar4 = 1;
    }
    else {
      pSVar7 = args->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      uVar9 = (ulong)uVar2;
      if (uVar9 != 0) {
        piVar10 = &((pSVar7->_1).interfaceOffsets)->offset;
        do {
          if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
              (Il2CppClass *)System_Collections_Generic_IReadOnlyList<GEIHBHEDJJM>_TypeInfo) {
                    /* try { // try from 0353bd00 to 0363bd0b has its CatchHandler @ 0353b678 */
            pVVar5 = pSVar7->vtable + *piVar10;
            goto LAB_0353bd04;
          }
          uVar9 = uVar9 - 1;
                    /* try { // try from 0353bcd8 to 0363bcff has its CatchHandler @ 0353bd14 */
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      pVVar5 = (VirtualInvokeData *)
               FUN_01b81914(args,System_Collections_Generic_IReadOnlyList<GEIHBHEDJJM>_TypeInfo,0);
LAB_0353bd04:
                    /* try { // try from 0353bd0c to 0363bd13 has its CatchHandler @ 0353bd14 */
      __this_00 = (GEIHBHEDJJM_o *)(*pVVar5->methodPtr)(args,0,pVVar5->method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0353bcd8 with catch @ 0353bd14
                       catch(type#2 @ 00000000) { ... } // from try @ 0353bd0c with catch @ 0353bd14
                        */
      if (__this_00 == (GEIHBHEDJJM_o *)0x0) goto LAB_0353bdbc;
                    /* try { // try from 0353bd1c to 0363bf1b has its CatchHandler @ 0353bd1c
                       catch() { ... } // from try @ 0353bd1c with catch @ 0353bd1c
                       catch() { ... } // from try @ 0353bfb4 with catch @ 0353bd1c
                       catch() { ... } // from try @ 0353c074 with catch @ 0353bd1c
                       catch() { ... } // from try @ 0353c07c with catch @ 0353bd1c
                       catch() { ... } // from try @ 0353c12c with catch @ 0353bd1c */
      pSVar6 = GEIHBHEDJJM__FHBEMPFIHNF(__this_00,(MethodInfo *)0x0);
      iVar4 = PCOEHCPGBBG__AICKIDLLIBK<Int32Enum>
                        (pSVar6,1,Method_PCOEHCPGBBG_AICKIDLLIBK<AGGMBMDDJIO_BAKEOHLOMLF>__);
    }
    ODHBNGEGFCJ = (__this->fields).__4__this;
    local_34 = iVar4;
    arg1 = (Il2CppObject *)thunk_FUN_01bda448(AGGMBMDDJIO_BAKEOHLOMLF_TypeInfo,&local_34);
    pSVar6 = System_String__Format(StringLiteral_22378,StringLiteral_11477,arg1,(MethodInfo *)0x0);
    KFJJHMDIFIG__DHAAGKPHJLA((Il2CppObject *)ODHBNGEGFCJ,pSVar6,(MethodInfo *)0x0);
    pSVar8 = (__this->fields).callback;
    if (pSVar8 != (System_Action_AGGMBMDDJIO_BAKEOHLOMLF__o *)0x0) {
      (*(code *)(pSVar8->fields).super.super.invoke_impl)
                ((pSVar8->fields).super.super.method_code,iVar4,(pSVar8->fields).super.super.method)
      ;
    }
    return;
  }
LAB_0353bdbc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

