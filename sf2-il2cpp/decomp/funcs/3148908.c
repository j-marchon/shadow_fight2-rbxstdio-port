// KKLJIDJBFEI$$EHCOOPEEHMC @ RVA 0x3148908

void KKLJIDJBFEI__EHCOOPEEHMC(KKLJIDJBFEI_o *__this,System_String_o *ADGGJLPMLPD,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP;
  Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o **ppNVar3;
  NDPMLPGANCI_o *__this_00;
  FDHCLNDLIDG_o *__this_01;
  System_Action_KEFHDOHHHML__o *BLMFLPJJMPF;
  KKLJIDJBFEI_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MGNPHCAAEIO_StaticFields *pMVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_04566793 & 1) == 0) {
    FUN_01bab630(&System_Action<KEFHDOHHHML>_TypeInfo);
    FUN_01bab630(&FDHCLNDLIDG_TypeInfo);
    FUN_01bab630(&Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo);
    FUN_01bab630(&KDDOKHLOKMI_TypeInfo);
    FUN_01bab630(&Method_KKLJIDJBFEI_OBJHJLFDIAM__);
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    FUN_01bab630(&StringLiteral_17447);
    FUN_01bab630(&StringLiteral_11535);
    DAT_04566793 = 1;
  }
  bVar1 = System_String__IsNullOrEmpty(ADGGJLPMLPD,(MethodInfo *)0x0);
  if (bVar1) {
    KKLJIDJBFEI__PKNNILDNIAD(__this,method_00);
    return;
  }
  BBBLOLJAMJP = (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)
                FUN_01bab718(Nekki_Utils_DetailedLog_GFMLMFADEGC___TypeInfo,1);
  if (BBBLOLJAMJP != (Nekki_Utils_DetailedLog_GFMLMFADEGC_array *)0x0) {
    if ((int)BBBLOLJAMJP->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    BBBLOLJAMJP->m_Items[0] = 6;
    Nekki_Utils_DetailedLog__LogDebug(StringLiteral_11535,BBBLOLJAMJP,(MethodInfo *)0x0);
    ppNVar3 = &(__this->fields).KAGJIPIDJCE;
    *ppNVar3 = (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *)0x0;
    thunk_FUN_01c20e04(ppNVar3,0);
    __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
    if (__this_00 != (NDPMLPGANCI_o *)0x0) {
      method_02 = (MethodInfo *)0x1;
      NDPMLPGANCI__PHFCKPKDMBK(__this_00,false,true,(MethodInfo *)0x0);
      if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = KDDOKHLOKMI__ACEAKFIFGJC((MethodInfo *)0x0);
      if (bVar1) {
        if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                          (KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB,(MethodInfo *)0x0);
        if (!bVar1) {
          if ((KDDOKHLOKMI_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          ADGGJLPMLPD = KDDOKHLOKMI_TypeInfo->static_fields->DOGHAPDEDFB;
        }
      }
      if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pMVar4 = MGNPHCAAEIO_TypeInfo->static_fields;
      pMVar4->KIINGPDGEDJ = ADGGJLPMLPD;
      thunk_FUN_01c20e04(&pMVar4->KIINGPDGEDJ,ADGGJLPMLPD);
      auVar5 = thunk_FUN_01bda818(FDHCLNDLIDG_TypeInfo);
      __this_01 = auVar5._0_8_;
      FDHCLNDLIDG___ctor(__this_01,auVar5._8_8_);
      if (__this_01 != (FDHCLNDLIDG_o *)0x0) {
        FDHCLNDLIDG__GCAEKDKFFKK(__this_01,ADGGJLPMLPD,method_02);
        BLMFLPJJMPF = (System_Action_KEFHDOHHHML__o *)
                      thunk_FUN_01bda818(System_Action<KEFHDOHHHML>_TypeInfo);
        System_Action<object>___ctor();
        iVar2 = KKLJIDJBFEI__BFOENPKALDN(__this_02,method_01);
        KDPDBGNOFEN__KLNMLOOCAAO
                  ((KDPDBGNOFEN_o *)__this,StringLiteral_17447,
                   (Google_Protobuf_IMessage_o *)__this_01,BLMFLPJJMPF,(float)iVar2,
                   (Il2CppObject *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

