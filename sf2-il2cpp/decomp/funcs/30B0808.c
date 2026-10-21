// CFEANGJDHEE$$NKLGCNHLBAF @ RVA 0x30B0808

void CFEANGJDHEE__NKLGCNHLBAF(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  bool bVar1;
  System_Net_HttpListenerRequest_o *pSVar2;
  System_Collections_Specialized_NameValueCollection_o *pSVar3;
  System_String_o *pSVar4;
  System_Byte_array *AIGOBLJEBCA;
  System_Net_HttpListenerResponse_o *pSVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
                    /* try { // try from 031b0808 to 032b080b has its CatchHandler @ 031b0830 */
                    /* catch() { ... } // from try @ 031b067c with catch @ 031b080c
                       try { // try from 031b080c to 032b084b has its CatchHandler @ 031b0548 */
                    /* catch() { ... } // from try @ 031b0804 with catch @ 031b0810 */
                    /* catch() { ... } // from try @ 031b066c with catch @ 031b0814 */
                    /* catch() { ... } // from try @ 031b0800 with catch @ 031b0818 */
                    /* catch() { ... } // from try @ 031b0698 with catch @ 031b081c */
  if ((DAT_045661da & 1) == 0) {
                    /* catch() { ... } // from try @ 031b0648 with catch @ 031b0820 */
                    /* catch() { ... } // from try @ 031b0760 with catch @ 031b0824 */
                    /* catch() { ... } // from try @ 031b07f8 with catch @ 031b0828 */
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
                    /* catch() { ... } // from try @ 031b0608 with catch @ 031b082c */
                    /* catch() { ... } // from try @ 031b06d0 with catch @ 031b0830
                       catch() { ... } // from try @ 031b0808 with catch @ 031b0830 */
                    /* catch() { ... } // from try @ 031b07a8 with catch @ 031b0834
                       catch() { ... } // from try @ 031b07fc with catch @ 031b0834 */
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&System_Uri_TypeInfo);
                    /* try { // try from 031b084c to 032b0863 has its CatchHandler @ 031b08f8 */
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_17283);
    DAT_045661da = 1;
  }
                    /* try { // try from 031b0864 to 032b08e7 has its CatchHandler @ 031b0548 */
  if (((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
      (pSVar2 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0),
      pSVar2 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).query_string,
     pSVar3 != (System_Collections_Specialized_NameValueCollection_o *)0x0)) {
    pSVar4 = (System_String_o *)
             (*(pSVar3->klass->vtable)._16_Get.methodPtr)
                       (pSVar3,StringLiteral_17283,(pSVar3->klass->vtable)._16_Get.method);
    if ((System_Uri_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Uri_TypeInfo);
    }
    pSVar4 = System_Uri__UnescapeDataString(pSVar4,(MethodInfo *)0x0);
    if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Convert_TypeInfo);
    }
                    /* try { // try from 031b08e8 to 032b08f7 has its CatchHandler @ 031b08f8 */
    AIGOBLJEBCA = System_Convert__FromBase64String(pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b084c with catch @ 031b08f8
                       catch() { ... } // from try @ 031b08e8 with catch @ 031b08f8 */
    pSVar4 = DBIJLEGANCE__CJBLFEPGPID(AIGOBLJEBCA,(MethodInfo *)0x0);
                    /* try { // try from 031b08fc to 032b08ff has its CatchHandler @ 031b0908 */
                    /* try { // try from 031b0900 to 032b090b has its CatchHandler @ 031b0548 */
    bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031b08fc with catch @ 031b0908 */
    if (!bVar1) {
      method_00 = extraout_x1;
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1_00;
      }
      CFEANGJDHEE__NKLGCNHLBAF(pSVar4,method_00);
    }
    pSVar5 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    if (pSVar5 != (System_Net_HttpListenerResponse_o *)0x0) {
      System_Net_HttpListenerResponse__set_StatusCode(pSVar5,200,(MethodInfo *)0x0);
      pSVar5 = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
      if (pSVar5 != (System_Net_HttpListenerResponse_o *)0x0) {
        (pSVar5->fields).status_description = StringLiteral_9679;
        thunk_FUN_01c20e04();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

