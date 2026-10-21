// DPEEIIAMANO$$BEDENMMHPAI @ RVA 0x3313C20

System_String_o * DPEEIIAMANO__BEDENMMHPAI(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  System_String_o **ppSVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  System_String_o *local_28;
  
                    /* try { // try from 03413c30 to 03513c37 has its CatchHandler @ 03413f34 */
  if ((DAT_045677c6 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
                    /* try { // try from 03413c50 to 03513c57 has its CatchHandler @ 03413f18 */
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_16367);
    DAT_045677c6 = 1;
  }
                    /* try { // try from 03413c68 to 03513c6f has its CatchHandler @ 03413c98 */
  local_28 = (System_String_o *)0x0;
  ppSVar9 = &(__this->fields).DAKLJGJBAHN;
                    /* try { // try from 03413c74 to 03513c77 has its CatchHandler @ 03413c94 */
  bVar4 = System_String__IsNullOrWhiteSpace(*ppSVar9,(MethodInfo *)0x0);
  uVar3 = StringLiteral_16367;
                    /* try { // try from 03413c7c to 03513c7f has its CatchHandler @ 03413c90 */
  if (bVar4) {
                    /* try { // try from 03413c80 to 03513cb3 has its CatchHandler @ 03413478 */
    pSVar10 = (__this->fields).IECPOKCOKIC;
                    /* catch() { ... } // from try @ 03413c18 with catch @ 03413c84 */
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* catch() { ... } // from try @ 03413c7c with catch @ 03413c90 */
                    /* catch() { ... } // from try @ 03413c74 with catch @ 03413c94 */
                    /* catch() { ... } // from try @ 03413c68 with catch @ 03413c98 */
                    /* catch() { ... } // from try @ 03413a78 with catch @ 03413c9c */
                    /* catch() { ... } // from try @ 03413788 with catch @ 03413ca0 */
    uVar7 = (ulong)uVar1;
                    /* catch() { ... } // from try @ 03413754 with catch @ 03413ca4 */
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03413cb4 to 03513cb7 has its CatchHandler @ 03413f1c */
                    /* try { // try from 03413cb8 to 03513ec3 has its CatchHandler @ 03413478 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar5 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_03413cec;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_03413cec:
    uVar7 = (*pVVar5->methodPtr)(pSVar10,uVar3,&local_28,pVVar5->method);
    pSVar2 = string_TypeInfo;
    if ((uVar7 & 1) != 0) {
      if (local_28 == (System_String_o *)0x0) {
        *ppSVar9 = (System_String_o *)0x0;
      }
      else if ((local_28->klass != string_TypeInfo) ||
              (*ppSVar9 = local_28, local_28->klass != pSVar2)) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(local_28,pSVar2);
      }
      thunk_FUN_01c20e04(ppSVar9);
    }
  }
  return *ppSVar9;
}

