// BECIPDJBAOG$$OPFFMGGDIDL @ RVA 0x30D25EC

bool BECIPDJBAOG__OPFFMGGDIDL(BECIPDJBAOG_o *__this,MethodInfo *method)

{
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar1;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar2;
  undefined1 auVar3 [16];
  
  auVar3._8_8_ = method;
  auVar3._0_8_ = __this;
  if ((DAT_04566315 & 1) == 0) {
    auVar3 = FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__
                         );
    DAT_04566315 = 1;
  }
  pGVar1 = (__this->fields).LEJBLHJFJHP;
  if ((pGVar1 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) &&
     (pGVar2 = (__this->fields).AKFPFIHIHOC,
     pGVar2 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)) {
    return 1 < (pGVar2->fields).count + (pGVar1->fields).count;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar3._0_8_,auVar3._8_8_);
}

