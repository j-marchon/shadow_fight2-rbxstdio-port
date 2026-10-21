// EEGDOGKBLNG$$OHCGFHJNEGO @ RVA 0x306EBE4

int32_t EEGDOGKBLNG__OHCGFHJNEGO
                  (EEGDOGKBLNG_o *__this,System_String_o *DIIDFLPOBMC,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  KAMBBJFPLGM_o *pKVar4;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *pGVar5;
  int index;
  
  if ((DAT_04565f63 & 1) == 0) {
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f63 = 1;
  }
  pKVar4 = (__this->fields).MLAAJICBOAD;
  if (pKVar4 == (KAMBBJFPLGM_o *)0x0) {
    return 0;
  }
  pGVar5 = (pKVar4->fields).AKFPFIHIHOC;
  if (pGVar5 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    iVar1 = (pGVar5->fields).count;
    if (iVar1 < 1) {
      return 0;
    }
    index = 0;
    do {
      pGVar5 = (pKVar4->fields).AKFPFIHIHOC;
      if ((pGVar5 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) ||
         (pIVar3 = Google_Protobuf_Collections_RepeatedField<object>__get_Item
                             ((Google_Protobuf_Collections_RepeatedField_T__o *)pGVar5,index,
                              Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                             ), pIVar3 == (Il2CppObject *)0x0)) break;
      bVar2 = System_String__op_Equality(pIVar3[1].monitor,DIIDFLPOBMC,(MethodInfo *)0x0);
      if (bVar2) {
        return *(int32_t *)&pIVar3[2].klass;
      }
      index = index + 1;
      if (iVar1 == index) {
        return 0;
      }
      pKVar4 = (__this->fields).MLAAJICBOAD;
    } while (pKVar4 != (KAMBBJFPLGM_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

