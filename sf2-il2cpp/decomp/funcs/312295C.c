// GDPNBLFNJKP$$CJOHHBMFAAG @ RVA 0x312295C

Il2CppObject * GDPNBLFNJKP__CJOHHBMFAAG(GDPNBLFNJKP_o *__this,MethodInfo *method)

{
  uint uVar1;
  GDPNBLFNJKP_o *__this_00;
  System_String_o *ODAMFBHJKIH;
  GDPNBLFNJKP_o *extraout_x0;
  Il2CppObject *pIVar2;
  MethodInfo *in_x2;
  ulong uVar3;
  System_String_array *pSVar4;
  ulong uVar5;
  double dVar6;
  double LFINFBNOLFG;
  undefined1 auVar7 [16];
  double local_38;
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04566632 & 1) == 0) {
    auVar7 = FUN_01bab630(&double_TypeInfo);
    DAT_04566632 = 1;
  }
  __this_00 = auVar7._0_8_;
  pSVar4 = (__this->fields).CMHCBHKJKHB;
  if (pSVar4 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this_00,auVar7._8_8_);
  }
  if ((int)pSVar4->max_length < 1) {
    LFINFBNOLFG = 0.0;
  }
  else {
    uVar5 = 0;
    uVar3 = pSVar4->max_length & 0xffffffff;
    LFINFBNOLFG = 0.0;
    do {
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
      ODAMFBHJKIH = GDPNBLFNJKP__BBJCEGGJDJB(__this_00,pSVar4->m_Items[uVar5],in_x2);
      dVar6 = BKOHHDBBJML__HNIHOIAMDPC(ODAMFBHJKIH,(MethodInfo *)0x0);
      uVar1 = (uint)pSVar4->max_length;
      uVar3 = (ulong)uVar1;
      uVar5 = uVar5 + 1;
      LFINFBNOLFG = LFINFBNOLFG + dVar6;
      __this_00 = extraout_x0;
    } while ((long)uVar5 < (long)(int)uVar1);
  }
  local_38 = HPEENDCCJND__AJKIGPMHEEO((HPEENDCCJND_o *)__this,LFINFBNOLFG,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_38);
  return pIVar2;
}

