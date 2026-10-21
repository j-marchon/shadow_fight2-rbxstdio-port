// EEGDOGKBLNG$$IOHFMHEMCHN @ RVA 0x3071910

PIADCKMDDAK_o * EEGDOGKBLNG__IOHFMHEMCHN(EEGDOGKBLNG_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  EEGDOGKBLNG_o *__this_00;
  MethodInfo *method_00;
  KAMBBJFPLGM_o *pKVar3;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar4;
  int index;
  
  if ((DAT_04565f74 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f74 = 1;
  }
  pKVar3 = (__this->fields).MLAAJICBOAD;
  if (pKVar3 == (KAMBBJFPLGM_o *)0x0) {
    return (PIADCKMDDAK_o *)0x0;
  }
  pGVar4 = (pKVar3->fields).AKFPFIHIHOC;
  if (pGVar4 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (pGVar4->fields).count;
    if (iVar1 < 1) {
      return (PIADCKMDDAK_o *)0x0;
    }
    index = 0;
    do {
      pGVar4 = (pKVar3->fields).AKFPFIHIHOC;
      if ((pGVar4 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (method_00 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__,
         __this_00 = (EEGDOGKBLNG_o *)
                     Google_Protobuf_Collections_RepeatedField<object>__get_Item
                               ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar4,index,
                                (MethodInfo_295F6AC *)
                                Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                               ), __this_00 == (EEGDOGKBLNG_o *)0x0)) break;
      bVar2 = EEGDOGKBLNG__CIHOPLMGDHH
                        (__this_00,(System_String_o *)(__this_00->fields).DAGJHIAIOML,method_00);
      if ((bVar2) && (0 < *(int *)&(__this_00->fields).AFAHJIJMAJM)) {
        return (PIADCKMDDAK_o *)__this_00;
      }
      index = index + 1;
      if (iVar1 == index) {
        return (PIADCKMDDAK_o *)0x0;
      }
      pKVar3 = (__this->fields).MLAAJICBOAD;
    } while (pKVar3 != (KAMBBJFPLGM_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

