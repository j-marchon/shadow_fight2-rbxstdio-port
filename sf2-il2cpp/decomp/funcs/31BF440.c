// Nekki.SF2.GUI.Fight.EndRaidFinalFightScreen$$FMNNEOGINIP @ RVA 0x31BF440

Google_Protobuf_IMessage_o *
Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen__FMNNEOGINIP
          (Nekki_SF2_GUI_Fight_EndRaidFinalFightScreen_o *__this,MethodInfo *method)

{
  bool bVar1;
  JGELBDHDHAO_o *__this_00;
  IGPDCHBJAPD_o *__this_01;
  PIADCKMDDAK_o *__this_02;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_03;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_ABAALAENAKC_o *pMVar2;
  
  if ((DAT_04566c0b & 1) == 0) {
    FUN_01bab630(&JGELBDHDHAO_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_04566c0b = 1;
    method = extraout_x1;
  }
  __this_00 = (JGELBDHDHAO_o *)thunk_FUN_01bda818(JGELBDHDHAO_TypeInfo,method);
  JGELBDHDHAO___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (__this->fields).super.KNEAEEIMDGH;
  if ((__this_01 != (IGPDCHBJAPD_o *)0x0) &&
     (bVar1 = IGPDCHBJAPD__DONKDCJLBPN(__this_01,(MethodInfo *)0x0),
     __this_00 != (JGELBDHDHAO_o *)0x0)) {
    (__this_00->fields).IFBHDAMCHNM = bVar1;
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->FDIJMKPILBI;
    if (pMVar2 != (MGNPHCAAEIO_ABAALAENAKC_o *)0x0) {
      if ((pMVar2->fields).IDHCEJLJIGI < 1) {
        return (Google_Protobuf_IMessage_o *)__this_00;
      }
      __this_02 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
      PIADCKMDDAK___ctor(__this_02,(MethodInfo *)0x0);
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->FDIJMKPILBI;
      if ((pMVar2 != (MGNPHCAAEIO_ABAALAENAKC_o *)0x0) && (__this_02 != (PIADCKMDDAK_o *)0x0)) {
        PIADCKMDDAK__HCOCAAIGNNL(__this_02,(pMVar2->fields).GJFGFNAGPEO,(MethodInfo *)0x0);
        pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->FDIJMKPILBI;
        if (pMVar2 != (MGNPHCAAEIO_ABAALAENAKC_o *)0x0) {
          (__this_02->fields).GDKPGIBMFPA = (pMVar2->fields).IDHCEJLJIGI;
          __this_03 = (__this_00->fields).DDEAFMPDPBJ;
          if (__this_03 != (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0) {
            Google_Protobuf_Collections_RepeatedField<object>__Add
                      ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_03,
                       (Il2CppObject *)__this_02,
                       Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
            return (Google_Protobuf_IMessage_o *)__this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

