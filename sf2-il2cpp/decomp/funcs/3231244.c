// Nekki.SF2.GUI.Fight.EndRaidRoundFightScreen$$FMNNEOGINIP @ RVA 0x3231244

Google_Protobuf_IMessage_o *
Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen__FMNNEOGINIP
          (Nekki_SF2_GUI_Fight_EndRaidRoundFightScreen_o *__this,MethodInfo *method)

{
  KJNCNBJIJPC_o *__this_00;
  PIADCKMDDAK_o *__this_01;
  Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *__this_02;
  NJNCPNBIPCD_o *pNVar1;
  MethodInfo *extraout_x1;
  MGNPHCAAEIO_ABAALAENAKC_o *pMVar2;
  
  if ((DAT_04566fe1 & 1) == 0) {
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<BJEFHIBMHEJ>__);
    FUN_01bab630(&Method_AJKNKCLEEAD_KIAOELALKBL<IHMIMECHIAN>__);
    FUN_01bab630(&KJNCNBJIJPC_TypeInfo);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    FUN_01bab630(&PIADCKMDDAK_TypeInfo);
    FUN_01bab630(&Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
    DAT_04566fe1 = 1;
    method = extraout_x1;
  }
  if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(MGNPHCAAEIO_TypeInfo,method);
  }
  pMVar2 = MGNPHCAAEIO_TypeInfo->static_fields->FDIJMKPILBI;
  __this_00 = (KJNCNBJIJPC_o *)thunk_FUN_01bda818(KJNCNBJIJPC_TypeInfo);
  KJNCNBJIJPC___ctor(__this_00,(MethodInfo *)0x0);
  if ((pMVar2 == (MGNPHCAAEIO_ABAALAENAKC_o *)0x0) || (__this_00 == (KJNCNBJIJPC_o *)0x0))
  goto LAB_03331440;
  (__this_00->fields).OLGJBKMCGIC = (pMVar2->fields).MAOLKFCJGLD;
  (__this_00->fields).OJBIFDEEBNO = (pMVar2->fields).HPPAGNLEOEJ;
  if (0 < (pMVar2->fields).IDHCEJLJIGI) {
    __this_01 = (PIADCKMDDAK_o *)thunk_FUN_01bda818(PIADCKMDDAK_TypeInfo);
    PIADCKMDDAK___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 == (PIADCKMDDAK_o *)0x0) goto LAB_03331440;
    PIADCKMDDAK__HCOCAAIGNNL(__this_01,(pMVar2->fields).GJFGFNAGPEO,(MethodInfo *)0x0);
    (__this_01->fields).GDKPGIBMFPA = (pMVar2->fields).IDHCEJLJIGI;
    __this_02 = (__this_00->fields).DDEAFMPDPBJ;
    if (__this_02 == (Google_Protobuf_Collections_RepeatedField_PIADCKMDDAK__o *)0x0)
    goto LAB_03331440;
    Google_Protobuf_Collections_RepeatedField<object>__Add
              ((Google_Protobuf_Collections_RepeatedField_T__o *)__this_02,(Il2CppObject *)__this_01
               ,Method_Google_Protobuf_Collections_RepeatedField<PIADCKMDDAK>_Add__);
  }
  AJKNKCLEEAD__KIAOELALKBL<object>
            ((Google_Protobuf_Collections_RepeatedField_T__o *)(__this_00->fields).EACBGCPPLBO,
             (System_Collections_Generic_IList_T__o *)(pMVar2->fields).OBLIJEFDJGN,
             Method_AJKNKCLEEAD_KIAOELALKBL<IHMIMECHIAN>__);
  AJKNKCLEEAD__KIAOELALKBL<object>
            ((Google_Protobuf_Collections_RepeatedField_T__o *)(__this_00->fields).KELNJLBBHEC,
             (System_Collections_Generic_IList_T__o *)(pMVar2->fields).GJBLBEALOBO,
             Method_AJKNKCLEEAD_KIAOELALKBL<BJEFHIBMHEJ>__);
  (__this_00->fields).HFNMLHEEAJM = (pMVar2->fields).EOLGPJMKFNA;
  (__this_00->fields).GAGJCDGEGBL = (pMVar2->fields).FNLILHMAONM;
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pNVar1 = NJNCPNBIPCD__AIHNLLGNBLC((MethodInfo *)0x0);
    if (pNVar1 == (NJNCPNBIPCD_o *)0x0) {
LAB_03331440:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    (pNVar1->fields).LEDBMKOBNDM = __this_00;
    thunk_FUN_01c20e04(&pNVar1->fields,__this_00);
  }
  return (Google_Protobuf_IMessage_o *)__this_00;
}

