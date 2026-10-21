// EEGDOGKBLNG$$PDHOLMCEAFE @ RVA 0x306FF10

int32_t EEGDOGKBLNG__PDHOLMCEAFE(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  KAMBBJFPLGM_o *pKVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04565f5a & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__
                         );
    DAT_04565f5a = 1;
  }
  pKVar1 = (__this->fields).MLAAJICBOAD;
  if ((pKVar1 != (KAMBBJFPLGM_o *)0x0) &&
     (pGVar2 = (pKVar1->fields).AKFPFIHIHOC,
     pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    return (pGVar2->fields).count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

