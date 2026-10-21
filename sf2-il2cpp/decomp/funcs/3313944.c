// DPEEIIAMANO$$CFAPDJDKLEG @ RVA 0x3313944

System_String_o * DPEEIIAMANO__CFAPDJDKLEG(DPEEIIAMANO_o *__this,MethodInfo *method)

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
  
                    /* try { // try from 0341395c to 0351395f has its CatchHandler @ 03413bb0 */
  if ((DAT_045677c4 & 1) == 0) {
                    /* try { // try from 03413960 to 03513987 has its CatchHandler @ 03413b80 */
    FUN_01bab630(&System_Collections_Generic_IDictionary<string,_object>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_16905);
    DAT_045677c4 = 1;
  }
  local_28 = (System_String_o *)0x0;
  ppSVar9 = &(__this->fields).MNNPEBCGFIF;
  bVar4 = System_String__IsNullOrWhiteSpace(*ppSVar9,(MethodInfo *)0x0);
  uVar3 = StringLiteral_16905;
  if (bVar4) {
    pSVar10 = (__this->fields).IECPOKCOKIC;
    if (pSVar10 == (System_Collections_Generic_IDictionary_string__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 034139ac to 035139af has its CatchHandler @ 03413bac */
                    /* try { // try from 034139b0 to 035139d7 has its CatchHandler @ 03413bdc */
    pSVar6 = pSVar10->klass;
    uVar1._0_1_ = (pSVar6->_2).rank;
    uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
    uVar7 = (ulong)uVar1;
    if (uVar7 != 0) {
      piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
      do {
        if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
            (Il2CppClass *)System_Collections_Generic_IDictionary<string,_object>_TypeInfo) {
          pVVar5 = pSVar6->vtable + (*piVar8 + 7);
          goto LAB_03413a10;
        }
                    /* try { // try from 034139e4 to 03513a0b has its CatchHandler @ 03413ba8 */
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    pVVar5 = (VirtualInvokeData *)
             FUN_01b81914(pSVar10,System_Collections_Generic_IDictionary<string,_object>_TypeInfo,7)
    ;
LAB_03413a10:
                    /* try { // try from 03413a14 to 03513a23 has its CatchHandler @ 03413bd8 */
    (*pVVar5->methodPtr)(pSVar10,uVar3,&local_28,pVVar5->method);
    pSVar2 = string_TypeInfo;
    if (local_28 == (System_String_o *)0x0) {
      *ppSVar9 = (System_String_o *)0x0;
    }
    else {
                    /* try { // try from 03413a40 to 03513a43 has its CatchHandler @ 03413ba4 */
                    /* try { // try from 03413a44 to 03513a53 has its CatchHandler @ 03413bd4 */
      if ((local_28->klass != string_TypeInfo) || (*ppSVar9 = local_28, local_28->klass != pSVar2))
      {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03413a5c to 03513a67 has its CatchHandler @ 03413ba0 */
        FUN_01babc64(local_28,pSVar2);
      }
    }
    thunk_FUN_01c20e04(ppSVar9);
  }
                    /* try { // try from 03413a78 to 03513a7f has its CatchHandler @ 03413c9c */
  return *ppSVar9;
}

