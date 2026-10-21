// CFEANGJDHEE$$HEGONINDJJG @ RVA 0x30B0474

void CFEANGJDHEE__HEGONINDJJG(JOCIOCLPIHI_o *OHKEKFCKBED,MethodInfo *method)

{
  System_Net_HttpListenerResponse_o *IDCGLBOIAFJ;
  System_Net_HttpListenerResponse_o *method_00;
  System_String_o *AIGOBLJEBCA;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = method;
  auVar1._0_8_ = OHKEKFCKBED;
  if ((DAT_045661d7 & 1) == 0) {
    FUN_01bab630(&CFEANGJDHEE_TypeInfo);
    auVar1 = FUN_01bab630(&StringLiteral_21448);
    DAT_045661d7 = 1;
  }
  if (OHKEKFCKBED != (JOCIOCLPIHI_o *)0x0) {
    IDCGLBOIAFJ = JOCIOCLPIHI__OMMFOGEHHOO(OHKEKFCKBED,(MethodInfo *)0x0);
    method_00 = IDCGLBOIAFJ;
    if ((CFEANGJDHEE_TypeInfo->_2).cctor_finished == 0) {
      method_00 = (System_Net_HttpListenerResponse_o *)thunk_FUN_01ba7564(CFEANGJDHEE_TypeInfo);
    }
    AIGOBLJEBCA = CFEANGJDHEE__HEGONINDJJG((MethodInfo *)method_00);
    KEBDCIFDLPB__GPDJFFJALIB(IDCGLBOIAFJ,AIGOBLJEBCA,StringLiteral_21448,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar1._0_8_,auVar1._8_8_);
}

