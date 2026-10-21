// PNLFHHJGDLI$$KBEJCDBMEBA @ RVA 0x3325A64

void PNLFHHJGDLI__KBEJCDBMEBA(MethodInfo *method)

{
  int32_t BJMMLGEBJDK;
  bool bVar1;
  PNLFHHJGDLI_c *method_00;
  System_String_o **ppSVar2;
  System_String_o *KGLJICLJHEL;
  
  if ((DAT_0456789a & 1) == 0) {
    FUN_01bab630(&Nekki_Audio_AudioManager_TypeInfo);
    FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
    DAT_0456789a = 1;
  }
  method_00 = PNLFHHJGDLI_TypeInfo;
  if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
    method_00 = (PNLFHHJGDLI_c *)thunk_FUN_01ba7564();
  }
  bVar1 = PNLFHHJGDLI__FPPAOOIPKEO((MethodInfo *)method_00);
  if (bVar1) {
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    BJMMLGEBJDK = PNLFHHJGDLI_TypeInfo->static_fields->EEFDLAHNJHL;
    if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
    }
    Nekki_Audio_AudioManager__Stop(BJMMLGEBJDK,false,(MethodInfo *)0x0);
    if (DAT_0456647a == '\0') {
      FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
      DAT_0456647a = '\x01';
    }
    if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField != (System_String_o *)0x0)
    {
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (DAT_0456647a == '\0') {
        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
        DAT_0456647a = '\x01';
      }
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      KGLJICLJHEL = PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
      if ((Nekki_Audio_AudioManager_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(Nekki_Audio_AudioManager_TypeInfo);
      }
      Nekki_Audio_AudioManager__UnloadAudio(KGLJICLJHEL,(MethodInfo *)0x0);
      if (DAT_045678de == '\0') {
        FUN_01bab630(&PNLFHHJGDLI_TypeInfo);
        DAT_045678de = '\x01';
      }
      if ((PNLFHHJGDLI_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      ppSVar2 = &PNLFHHJGDLI_TypeInfo->static_fields->_PFPBHKJDPJG_k__BackingField;
      *ppSVar2 = (System_String_o *)0x0;
      thunk_FUN_01c20e04(ppSVar2,0);
      return;
    }
  }
  return;
}

