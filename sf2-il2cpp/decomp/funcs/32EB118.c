// IBMPAMLCCHF$$FHFADKNMJLB @ RVA 0x32EB118

/* WARNING: Removing unreachable block (ram,0x033eb26c) */
/* WARNING: Removing unreachable block (ram,0x033eb280) */
/* WARNING: Removing unreachable block (ram,0x033eb284) */
/* WARNING: Removing unreachable block (ram,0x033eb2ac) */

System_Byte_array *
IBMPAMLCCHF__FHFADKNMJLB
          (System_Byte_array *OCMMDIHLKMH,System_Byte_array *IKKKILCDMMB,
          System_Byte_array *MLLHENCNAMI,MethodInfo *method)

{
  ushort uVar1;
  System_Security_Cryptography_Aes_o *pSVar2;
  undefined8 uVar3;
  MethodInfo *method_00;
  System_Security_Cryptography_ICryptoTransform_o *GDDNCGHPCEM;
  System_Byte_array *pSVar4;
  VirtualInvokeData *pVVar5;
  System_Security_Cryptography_Aes_c *pSVar6;
  ulong uVar7;
  int32_t *piVar8;
  
                    /* try { // try from 033eb128 to 034eb13f has its CatchHandler @ 033eb1b4 */
                    /* try { // try from 033eb140 to 034eb1a3 has its CatchHandler @ 033eb0a8 */
  if ((DAT_0456763b & 1) == 0) {
    FUN_01bab630(&System_Security_Cryptography_Aes_TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    DAT_0456763b = 1;
  }
  if ((System_Security_Cryptography_Aes_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar2 = System_Security_Cryptography_Aes__Create((MethodInfo *)0x0);
  if (pSVar2 == (System_Security_Cryptography_Aes_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar2->klass->vtable)._12_set_Key.methodPtr)
            (pSVar2,IKKKILCDMMB,(pSVar2->klass->vtable)._12_set_Key.method);
                    /* try { // try from 033eb1a4 to 034eb1b3 has its CatchHandler @ 033eb1b4 */
  (*(pSVar2->klass->vtable)._10_set_IV.methodPtr)
            (pSVar2,MLLHENCNAMI,(pSVar2->klass->vtable)._10_set_IV.method);
                    /* catch() { ... } // from try @ 033eb128 with catch @ 033eb1b4
                       catch() { ... } // from try @ 033eb1a4 with catch @ 033eb1b4 */
                    /* try { // try from 033eb1b8 to 034eb1bb has its CatchHandler @ 033eb1c4 */
                    /* try { // try from 033eb1bc to 034eb1c7 has its CatchHandler @ 033eb0a8 */
  uVar3 = (*(pSVar2->klass->vtable)._11_get_Key.methodPtr)
                    (pSVar2,(pSVar2->klass->vtable)._11_get_Key.method);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 033eb1b8 with catch @ 033eb1c4
                        */
  method_00 = (MethodInfo *)
              (*(pSVar2->klass->vtable)._9_HNIHOIAMDPC.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._9_HNIHOIAMDPC.method);
  GDDNCGHPCEM = (System_Security_Cryptography_ICryptoTransform_o *)
                (*pSVar2->klass[1]._1.image)(pSVar2,uVar3,method_00,pSVar2->klass[1]._1.gc_desc);
  pSVar4 = IBMPAMLCCHF__FGOKOOFPFMC(OCMMDIHLKMH,GDDNCGHPCEM,method_00);
  pSVar6 = pSVar2->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar7 = (ulong)uVar1;
  if (uVar7 != 0) {
    piVar8 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar8 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar8;
        goto LAB_033eb258;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar2,System_IDisposable_TypeInfo,0);
LAB_033eb258:
  (*pVVar5->methodPtr)(pSVar2,pVVar5->method);
  return pSVar4;
}

