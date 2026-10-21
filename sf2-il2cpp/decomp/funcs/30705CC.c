// EEGDOGKBLNG$$BALIJLHGKFM @ RVA 0x30705CC

void EEGDOGKBLNG__BALIJLHGKFM(EEGDOGKBLNG_o *__this,KCPFIELGGLA_o *GMCEHJAIFBJ,MethodInfo *method)

{
  PIADCKMDDAK_o *OAOLCGAIILM;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_00;
  MethodInfo *method_00;
  KAMBBJFPLGM_o *pKVar1;
  System_Action_IList_PIADCKMDDAK___o *pSVar2;
  int index;
  
  if ((DAT_04565f5f & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<PIADCKMDDAK>__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Count__);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__);
    DAT_04565f5f = 1;
  }
  if ((GMCEHJAIFBJ == (KCPFIELGGLA_o *)0x0) ||
     ((__this->fields).MLAAJICBOAD == (KAMBBJFPLGM_o *)0x0)) {
    return;
  }
  __this_00 = (GMCEHJAIFBJ->fields).EHBNKDHKJNI;
  if (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
    index = 0;
    do {
      if ((__this_00->fields).count <= index) {
        pKVar1 = (__this->fields).MLAAJICBOAD;
        if (pKVar1 != (KAMBBJFPLGM_o *)0x0) {
          AJKNKCLEEAD__KIAOELALKBL<object>
                    ((Google_Protobuf_Collections_RepeatedField_T__o *)(pKVar1->fields).LEJBLHJFJHP,
                     (System_Collections_Generic_IList_T__o *)__this_00,
                     Method_AJKNKCLEEAD_KIAOELALKBL<PIADCKMDDAK>__);
          pSVar2 = (__this->fields).MMCHECDCGKF;
          if (pSVar2 != (System_Action_IList_PIADCKMDDAK___o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x031706c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(pSVar2->fields).super.super.invoke_impl)
                      ((pSVar2->fields).super.super.method_code,0,
                       (pSVar2->fields).super.super.method);
            return;
          }
        }
        break;
      }
      method_00 = Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__;
      OAOLCGAIILM = (PIADCKMDDAK_o *)
                    Google_Protobuf_Collections_RepeatedField<object>__get_Item
                              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_00,index,
                               (MethodInfo_295F6AC *)
                               Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_get_Item__
                              );
      EEGDOGKBLNG__LLNLBFAEJNC(__this,OAOLCGAIILM,method_00);
      __this_00 = (GMCEHJAIFBJ->fields).EHBNKDHKJNI;
      index = index + 1;
    } while (__this_00 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

