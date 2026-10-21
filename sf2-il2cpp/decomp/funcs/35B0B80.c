// KEBDCIFDLPB$$LNBHCPLMPAA @ RVA 0x35B0B80

/* WARNING: Removing unreachable block (ram,0x036b0dd0) */

void KEBDCIFDLPB__LNBHCPLMPAA
               (System_Net_HttpListenerResponse_o *IDCGLBOIAFJ,System_String_o *AAIHDEKMIJG,
               System_String_o *ACCIHBHMFPN,bool INADPMLBJHN,MethodInfo *method)

{
  ushort uVar1;
  uint uVar2;
  System_IO_FileStream_o *pSVar3;
  int64_t value;
  System_String_o *pSVar4;
  long lVar5;
  System_IO_Stream_o *pSVar6;
  VirtualInvokeData *pVVar7;
  System_IO_FileStream_c *pSVar8;
  ulong uVar9;
  int32_t *piVar10;
  
  if ((DAT_04568e9d & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&System_IDisposable_TypeInfo);
    FUN_01bab630(&System_IO_Path_TypeInfo);
    FUN_01bab630(&StringLiteral_16532);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_4646);
    DAT_04568e9d = 1;
  }
  pSVar3 = System_IO_File__OpenRead(AAIHDEKMIJG,(MethodInfo *)0x0);
  if (IDCGLBOIAFJ == (System_Net_HttpListenerResponse_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  System_Net_HttpListenerResponse__set_StatusCode(IDCGLBOIAFJ,200,(MethodInfo *)0x0);
  (IDCGLBOIAFJ->fields).status_description = StringLiteral_9679;
  thunk_FUN_01c20e04();
  if (pSVar3 == (System_IO_FileStream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  value = (*(pSVar3->klass->vtable)._11_get_Length.methodPtr)
                    (pSVar3,(pSVar3->klass->vtable)._11_get_Length.method);
  System_Net_HttpListenerResponse__set_ContentLength64(IDCGLBOIAFJ,value,(MethodInfo *)0x0);
  System_Net_HttpListenerResponse__set_ContentType(IDCGLBOIAFJ,ACCIHBHMFPN,(MethodInfo *)0x0);
  if (INADPMLBJHN) {
    if ((System_IO_Path_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar4 = System_IO_Path__GetFileName(AAIHDEKMIJG,(MethodInfo *)0x0);
    pSVar4 = System_String__Format(StringLiteral_16532,(Il2CppObject *)pSVar4,(MethodInfo *)0x0);
    System_Net_HttpListenerResponse__AddHeader
              (IDCGLBOIAFJ,StringLiteral_4646,pSVar4,(MethodInfo *)0x0);
  }
  lVar5 = FUN_01bab718(byte___TypeInfo,0x10000);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  while( true ) {
    uVar2 = (*(pSVar3->klass->vtable)._33_Read.methodPtr)
                      (pSVar3,lVar5,0,(ulong)*(uint *)(lVar5 + 0x18),
                       (pSVar3->klass->vtable)._33_Read.method);
    if ((int)uVar2 < 1) break;
    System_Threading_Thread__Sleep(0,(MethodInfo *)0x0);
    pSVar6 = System_Net_HttpListenerResponse__get_OutputStream(IDCGLBOIAFJ,(MethodInfo *)0x0);
    if (pSVar6 == (System_IO_Stream_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (*(pSVar6->klass->vtable)._36_unknown.methodPtr)
              (pSVar6,lVar5,0,(ulong)uVar2,(pSVar6->klass->vtable)._36_unknown.method);
  }
  pSVar8 = pSVar3->klass;
  uVar1._0_1_ = (pSVar8->_2).rank;
  uVar1._1_1_ = (pSVar8->_2).minimumAlignment;
  uVar9 = (ulong)uVar1;
  if (uVar9 != 0) {
    piVar10 = &((pSVar8->_1).interfaceOffsets)->offset;
    do {
      if (((Il2CppRuntimeInterfaceOffsetPair *)(piVar10 + -2))->interfaceType ==
          (Il2CppClass *)System_IDisposable_TypeInfo) {
        pVVar7 = &(pSVar8->vtable)._0_Equals + *piVar10;
        goto LAB_036b0da4;
      }
      uVar9 = uVar9 - 1;
      piVar10 = piVar10 + 4;
    } while (uVar9 != 0);
  }
  pVVar7 = (VirtualInvokeData *)FUN_01b81914(pSVar3,System_IDisposable_TypeInfo,0);
LAB_036b0da4:
  (*pVVar7->methodPtr)(pSVar3,pVVar7->method);
  return;
}

