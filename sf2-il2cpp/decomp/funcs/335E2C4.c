// NFNBHPOJFNJ$$CFPENDINBDI @ RVA 0x335E2C4

void NFNBHPOJFNJ__CFPENDINBDI(NFNBHPOJFNJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_IO_FileInfo_o *__this_00;
  MethodInfo *method_00;
  System_IO_FileStream_o *pSVar3;
  System_IO_FileInfo_o *__this_01;
  ulong uVar4;
  System_IO_StreamWriter_o *pSVar5;
  System_IO_StreamReader_o *__this_02;
  undefined8 uVar6;
  
  if ((DAT_04567a63 & 1) == 0) {
    __this = (NFNBHPOJFNJ_o *)FUN_01bab630(&System_IO_FileInfo_TypeInfo);
    DAT_04567a63 = 1;
  }
  pSVar2 = NFNBHPOJFNJ__KEDOIFMBKNI((MethodInfo *)__this);
  __this_00 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_00,pSVar2,(MethodInfo *)0x0);
  if (__this_00 == (System_IO_FileInfo_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  method_00 = (MethodInfo *)
              (*(__this_00->klass->vtable)._10_get_Exists.methodPtr)
                        (__this_00,(__this_00->klass->vtable)._10_get_Exists.method);
  if (((ulong)method_00 & 1) == 0) {
    pSVar3 = System_IO_FileInfo__Create(__this_00,(MethodInfo *)0x0);
    if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* try { // try from 0345e340 to 0355e3c7 has its CatchHandler @ 0345e340
                       catch() { ... } // from try @ 0345e340 with catch @ 0345e340
                       catch() { ... } // from try @ 0345e3dc with catch @ 0345e340
                       catch() { ... } // from try @ 0345e4d4 with catch @ 0345e340
                       catch() { ... } // from try @ 0345e538 with catch @ 0345e340 */
    method_00 = (MethodInfo *)
                (*(pSVar3->klass->vtable)._19_Close.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._19_Close.method);
  }
  pSVar2 = NFNBHPOJFNJ__OMENJAFAEAA(method_00);
  __this_01 = (System_IO_FileInfo_o *)thunk_FUN_01bda818(System_IO_FileInfo_TypeInfo);
  System_IO_FileInfo___ctor(__this_01,pSVar2,(MethodInfo *)0x0);
  if (__this_01 != (System_IO_FileInfo_o *)0x0) {
    uVar4 = (*(__this_01->klass->vtable)._10_get_Exists.methodPtr)
                      (__this_01,(__this_01->klass->vtable)._10_get_Exists.method);
    if ((uVar4 & 1) != 0) {
      pSVar5 = System_IO_FileInfo__AppendText(__this_00,(MethodInfo *)0x0);
      __this_02 = System_IO_FileInfo__OpenText(__this_01,(MethodInfo *)0x0);
      if (__this_02 == (System_IO_StreamReader_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      while( true ) {
        bVar1 = System_IO_StreamReader__get_EndOfStream(__this_02,(MethodInfo *)0x0);
        if (bVar1) break;
                    /* try { // try from 0345e3c8 to 0355e3cb has its CatchHandler @ 0345e4a0 */
                    /* try { // try from 0345e3cc to 0355e3db has its CatchHandler @ 0345e4a4 */
        uVar6 = (*(__this_02->klass->vtable)._13_ReadLine.methodPtr)
                          (__this_02,(__this_02->klass->vtable)._13_ReadLine.method);
        if (pSVar5 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8(uVar6,uVar6);
        }
                    /* try { // try from 0345e3dc to 0355e4bb has its CatchHandler @ 0345e340 */
        (*(pSVar5->klass->vtable)._19_WriteLine.methodPtr)
                  (pSVar5,uVar6,(pSVar5->klass->vtable)._19_WriteLine.method);
      }
      if (pSVar5 == (System_IO_StreamWriter_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar5->klass->vtable)._8_Close.methodPtr)(pSVar5,(pSVar5->klass->vtable)._8_Close.method);
      (*(__this_02->klass->vtable)._7_Close.methodPtr)
                (__this_02,(__this_02->klass->vtable)._7_Close.method);
      pSVar3 = System_IO_FileInfo__Create(__this_01,(MethodInfo *)0x0);
      if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      (*(pSVar3->klass->vtable)._19_Close.methodPtr)
                (pSVar3,(pSVar3->klass->vtable)._19_Close.method);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

