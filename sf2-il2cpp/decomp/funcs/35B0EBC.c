// KEBDCIFDLPB$$NLNJOGEGAPH @ RVA 0x35B0EBC

void KEBDCIFDLPB__NLNJOGEGAPH
               (System_Net_HttpListenerResponse_o *IDCGLBOIAFJ,System_Byte_array *MMEEMFOLKPP,
               MethodInfo *method)

{
  System_IO_Stream_o *pSVar1;
  
  if ((DAT_04568e9e & 1) == 0) {
    FUN_01bab630(&StringLiteral_9679);
    DAT_04568e9e = 1;
  }
  if (IDCGLBOIAFJ != (System_Net_HttpListenerResponse_o *)0x0) {
    System_Net_HttpListenerResponse__set_StatusCode(IDCGLBOIAFJ,200,(MethodInfo *)0x0);
    (IDCGLBOIAFJ->fields).status_description = StringLiteral_9679;
    thunk_FUN_01c20e04();
    if (MMEEMFOLKPP != (System_Byte_array *)0x0) {
      System_Net_HttpListenerResponse__set_ContentLength64
                (IDCGLBOIAFJ,(long)(int)MMEEMFOLKPP->max_length,(MethodInfo *)0x0);
      pSVar1 = System_Net_HttpListenerResponse__get_OutputStream(IDCGLBOIAFJ,(MethodInfo *)0x0);
      if (pSVar1 != (System_IO_Stream_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x036b0f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(pSVar1->klass->vtable)._36_unknown.methodPtr)
                  (pSVar1,MMEEMFOLKPP,0,(ulong)(uint)MMEEMFOLKPP->max_length,
                   (pSVar1->klass->vtable)._36_unknown.method);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

