// NFNBHPOJFNJ$$CFPENDINBDI @ RVA 0x335BDBC

/* WARNING: Removing unreachable block (ram,0x0345bf04) */

void NFNBHPOJFNJ__CFPENDINBDI(NFNBHPOJFNJ_o *__this,System_String_o *AADGFDGOKIA,MethodInfo *method)

{
  ushort uVar1;
  System_String_o *fileName;
  System_IO_FileInfo_o *__this_00;
  ulong uVar2;
  System_IO_FileStream_o *pSVar3;
  System_IO_StreamWriter_o *pSVar4;
  VirtualInvokeData *pVVar5;
  System_IO_StreamWriter_c *pSVar6;
  int32_t *piVar7;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bd08 with catch @ 0345bdbc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bcc8 with catch @ 0345bdc0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bdb0 with catch @ 0345bdc4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bcf0 with catch @ 0345bdc8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bdac with catch @ 0345bdcc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bccc with catch @ 0345bdd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0345bca4 with catch @ 0345bdd4
                        */
  if ((DAT_04567a5e & 1) == 0) {
    FUN_01bab630(&System_IO_FileInfo_TypeInfo);
                    /* try { // try from 0345bdec to 0355bdef has its CatchHandler @ 0345be18 */
    __this = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_IDisposable_TypeInfo);
                    /* try { // try from 0345bdf0 to 0355be27 has its CatchHandler @ 0345b930 */
    DAT_04567a5e = 1;
  }
  fileName = NFNBHPOJFNJ__KEDOIFMBKNI((MethodInfo *)__this);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
                    /* catch() { ... } // from try @ 0345bdec with catch @ 0345be18 */
  System_IO_FileInfo___ctor(__this_00,fileName,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_FileInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
                    /* try { // try from 0345be28 to 0355be2f has its CatchHandler @ 0345be44 */
                    /* try { // try from 0345be30 to 0355be3b has its CatchHandler @ 0345b930 */
  uVar2 = (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 0345be3c to 0355be43 has its CatchHandler @ 0345be44 */
    pSVar3 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0345be28 with catch @ 0345be44
                       catch(type#2 @ 00000000) { ... } // from try @ 0345be3c with catch @ 0345be44
                        */
    if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pSVar3->klass->vtable)._19_Close.methodPtr)(pSVar3,(pSVar3->klass->vtable)._19_Close.method);
  }
  pSVar4 = System_IO_FileInfo__AppendText(__this_00,(MethodInfo *)0x0);
  if (pSVar4 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  (*(pSVar4->klass->vtable)._16_Write.methodPtr)
            (pSVar4,AADGFDGOKIA,(pSVar4->klass->vtable)._16_Write.method);
  pSVar6 = pSVar4->klass;
  uVar1._0_1_ = (pSVar6->_2).rank;
  uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
  uVar2 = (ulong)uVar1;
  if (uVar2 != 0) {
    piVar7 = &((pSVar6->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar7 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar5 = &(pSVar6->vtable)._0_Equals + *piVar7;
        goto LAB_0345bedc;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  pVVar5 = (VirtualInvokeData *)FUN_01b81914(pSVar4,System_IDisposable_TypeInfo,0);
LAB_0345bedc:
  (*pVVar5->methodPtr)(pSVar4,pVVar5->method);
  return;
}

