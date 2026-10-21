// DPEEIIAMANO$$HMHBJILDFEI @ RVA 0x3313804

System_String_o * DPEEIIAMANO__HMHBJILDFEI(DPEEIIAMANO_o *__this,MethodInfo *method)

{
  ushort uVar1;
  System_String_c *pSVar2;
  undefined8 uVar3;
  bool bVar4;
  VirtualInvokeData *pVVar5;
  System_Collections_Generic_IDictionary_string__object__c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  DPEEIIAMANO_Fields *pDVar9;
  System_Collections_Generic_IDictionary_string__object__o *pSVar10;
  System_String_o *local_28;
  
                    /* try { // try from 03413808 to 0351380f has its CatchHandler @ 03413c00 */
                    /* try { // try from 03413818 to 03513827 has its CatchHandler @ 03413834 */
  if ((DAT_045677c3 & 1) == 0) {
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
                    /* try { // try from 0341382c to 0351382f has its CatchHandler @ 03413838 */
                    /* try { // try from 03413830 to 03513847 has its CatchHandler @ 03413478 */
                    /* catch() { ... } // from try @ 03413818 with catch @ 03413834 */
    FUN_01bab630(&string_TypeInfo);
                    /* catch() { ... } // from try @ 0341382c with catch @ 03413838 */
    FUN_01bab630(&StringLiteral_16372);
                    /* try { // try from 03413848 to 03513863 has its CatchHandler @ 03413bb4 */
    DAT_045677c3 = 1;
  }
  local_28 = (System_String_o *)0x0;
  pDVar9 = &__this->fields;
  bVar4 = System_String__IsNullOrWhiteSpace(pDVar9->OBILBEMGFIE,(MethodInfo *)0x0);
  uVar3 = StringLiteral_16372;
  if (bVar4) {
    pSVar10 = (__this->fields).IECPOKCOKIC;
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
                    /* try { // try from 0341387c to 0351387f has its CatchHandler @ 03413b68 */
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
                    /* try { // try from 03413898 to 035138b3 has its CatchHandler @ 03413b64 */
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
                    /* try { // try from 034138c8 to 035138df has its CatchHandler @ 03413bec */
          pVVar5 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_034138d0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_034138d0:
    (*pVVar5->methodPtr)(pSVar10,uVar3,&local_28,pVVar5->method);
    pSVar2 = string_TypeInfo;
                    /* try { // try from 034138e8 to 035138f7 has its CatchHandler @ 03413b60 */
    if (local_28 == (System_String_o *)0x0) {
      pDVar9->OBILBEMGFIE = (System_String_o *)0x0;
    }
    else if ((local_28->klass != string_TypeInfo) ||
            (pDVar9->OBILBEMGFIE = local_28, local_28->klass != pSVar2)) {
                    /* try { // try from 03413914 to 03513917 has its CatchHandler @ 03413be0 */
                    /* try { // try from 03413918 to 03513947 has its CatchHandler @ 03413b5c */
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(local_28,pSVar2);
    }
    thunk_FUN_01c20e04(pDVar9);
  }
  return pDVar9->OBILBEMGFIE;
}

