// Nekki.Utils.RaidBetaLogger$$.cctor @ RVA 0x359C610

void Nekki_Utils_RaidBetaLogger___cctor(MethodInfo *method)

{
  Nekki_Utils_RaidBetaLogger_c *pNVar1;
  System_TimeSpan_o SVar2;
  Nekki_Utils_RaidBetaLogger_StaticFields *pNVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_04568dd4 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    FUN_01bab630(&System_TimeSpan_TypeInfo);
    DAT_04568dd4 = 1;
  }
  pNVar3 = Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields;
  pNVar3->WAIT_VIDEO_NULL = 20.0;
  pNVar3->WAIT_VIDEO_PLAYING = 100.0;
  pNVar3->WAIT_LOAD_GAMELOADER_SCENE = 30.0;
  if ((System_TimeSpan_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  SVar2 = System_TimeSpan__FromSeconds(60.0,(MethodInfo *)0x0);
  pNVar1 = Nekki_Utils_RaidBetaLogger_TypeInfo;
  auVar4 = NEON_fmov(0x3f800000,4);
  (Nekki_Utils_RaidBetaLogger_TypeInfo->static_fields->_LHFHJAHDOOA_k__BackingField).fields._ticks =
       (int64_t)SVar2.fields._ticks;
  pNVar3 = pNVar1->static_fields;
  pNVar3->ReleaseSendLogChance_Hack = (float)(int)auVar4._8_8_;
  pNVar3->ReleaseSendLogChance_DuplicatedItems = (float)(int)((ulong)auVar4._8_8_ >> 0x20);
  pNVar3->ReleaseSendLogChance_NuR = (float)(int)auVar4._0_8_;
  pNVar3->ReleaseSendLogChance_Exc = (float)(int)((ulong)auVar4._0_8_ >> 0x20);
  pNVar3->ReleaseSendLogChance_AdditionalLog = 1.0;
  pNVar3->ADEMADBNCBD = 30.0;
  pNVar3->ANCAFNJHKDH = false;
  pNVar3->GGNBEANPLCD = false;
  pNVar3->LADCKKMLNOP = false;
  pNVar3->PLFOCJOLMLN = false;
  pNVar3->MDDKNDNGFPH = false;
  return;
}

