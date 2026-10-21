// KEBDCIFDLPB$$GPDJFFJALIB @ RVA 0x35B0F64

void KEBDCIFDLPB__GPDJFFJALIB
               (System_Net_HttpListenerResponse_o *IDCGLBOIAFJ,System_String_o *AIGOBLJEBCA,
               System_String_o *ACCIHBHMFPN,MethodInfo *method)

{
  bool bVar1;
  System_Text_Encoding_o *pSVar2;
  long lVar3;
  System_IO_Stream_o *pSVar4;
  
  if ((DAT_04568e9f & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    DAT_04568e9f = 1;
  }
  if (IDCGLBOIAFJ != (System_Net_HttpListenerResponse_o *)0x0) {
    System_Net_HttpListenerResponse__set_StatusCode(IDCGLBOIAFJ,200,(MethodInfo *)0x0);
    (IDCGLBOIAFJ->fields).status_description = StringLiteral_9679;
    thunk_FUN_01c20e04();
    bVar1 = System_String__IsNullOrEmpty(AIGOBLJEBCA,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pSVar2 = System_Text_Encoding__get_UTF8((MethodInfo *)0x0);
    if (pSVar2 != (System_Text_Encoding_o *)0x0) {
      lVar3 = (*(pSVar2->klass->vtable)._19_GetBytes.methodPtr)
                        (pSVar2,AIGOBLJEBCA,(pSVar2->klass->vtable)._19_GetBytes.method);
      if (lVar3 != 0) {
        System_Net_HttpListenerResponse__set_ContentLength64
                  (IDCGLBOIAFJ,(long)*(int *)(lVar3 + 0x18),(MethodInfo *)0x0);
        System_Net_HttpListenerResponse__set_ContentType(IDCGLBOIAFJ,ACCIHBHMFPN,(MethodInfo *)0x0);
        pSVar4 = System_Net_HttpListenerResponse__get_OutputStream(IDCGLBOIAFJ,(MethodInfo *)0x0);
        if (pSVar4 != (System_IO_Stream_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036b1064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(pSVar4->klass->vtable)._36_unknown.methodPtr)
                    (pSVar4,lVar3,0,(ulong)*(uint *)(lVar3 + 0x18),
                     (pSVar4->klass->vtable)._36_unknown.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

