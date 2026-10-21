// CFEANGJDHEE$$FHEDJOBDEPF @ RVA 0x30AEB84

void CFEANGJDHEE__FHEDJOBDEPF(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  System_Net_HttpListenerRequest_o *pSVar1;
  System_Collections_Specialized_NameValueCollection_o *pSVar2;
  System_String_o *AIGOBLJEBCA;
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  if ((DAT_045661c5 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    FUN_01bab630(&StringLiteral_21448);
    FUN_01bab630(&StringLiteral_17283);
    DAT_045661c5 = 1;
  }
  if (((OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) &&
      (pSVar1 = JOCIOCLPIHI__AEIKKFELIDK(OHKEKFCKBED,(MethodInfo *)0x0),
      pSVar1 != (System_Net_HttpListenerRequest_o *)0x0)) &&
     (pSVar2 = (pSVar1->fields).query_string,
     pSVar2 != (System_Collections_Specialized_NameValueCollection_o *)0x0)) {
    auVar3 = (*(pSVar2->klass->vtable)._16_Get.methodPtr)
                       (pSVar2,StringLiteral_17283,(pSVar2->klass->vtable)._16_Get.method);
    method_00 = auVar3._8_8_;
    AIGOBLJEBCA = (System_String_o *)0x0;
    if (auVar3._0_8_ != (System_String_o *)0x0) {
      if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
        method_00 = extraout_x1;
      }
      AIGOBLJEBCA = CFEANGJDHEE__FHEDJOBDEPF(auVar3._0_8_,method_00);
    }
    IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    KEBDCIFDLPB__GPDJFFJALIB(IDCGLBOIAFJ,AIGOBLJEBCA,StringLiteral_21448,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

