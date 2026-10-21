// GDPNBLFNJKP$$AKPPNIPNKDH @ RVA 0x3122820

System_String_o * GDPNBLFNJKP__AKPPNIPNKDH(GDPNBLFNJKP_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  GDPNBLFNJKP_o *__this_00;
  GDPNBLFNJKP_o *CJNHFNHJHPE;
  MethodInfo *in_x2;
  ulong uVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  auVar7._8_8_ = method;
  auVar7._0_8_ = __this;
  if ((DAT_04566631 & 1) == 0) {
    FUN_01bab630(&StringLiteral_230);
    auVar7 = FUN_01bab630(&StringLiteral_1);
    DAT_04566631 = 1;
  }
  pSVar5 = (__this->fields).CMHCBHKJKHB;
  if (pSVar5 != (System_String_array *)0x0) {
    CJNHFNHJHPE = StringLiteral_1;
    if (0 < (int)pSVar5->max_length) {
      uVar6 = 0;
      uVar3 = pSVar5->max_length & 0xffffffff;
      do {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        pSVar4 = pSVar5->m_Items[uVar6];
        bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((System_String_o *)CJNHFNHJHPE,(MethodInfo *)0x0);
        __this_00 = (GDPNBLFNJKP_o *)(ulong)bVar2;
        if (!bVar2) {
          in_x2 = (MethodInfo *)0x0;
          __this_00 = (GDPNBLFNJKP_o *)
                      System_String__Concat
                                ((System_String_o *)CJNHFNHJHPE,StringLiteral_230,(MethodInfo *)0x0)
          ;
          CJNHFNHJHPE = __this_00;
        }
        pSVar4 = GDPNBLFNJKP__KHCGFJDIAED(__this_00,pSVar4,in_x2);
        in_x2 = (MethodInfo *)0x0;
        CJNHFNHJHPE = (GDPNBLFNJKP_o *)
                      System_String__Concat((System_String_o *)CJNHFNHJHPE,pSVar4,(MethodInfo *)0x0)
        ;
        uVar1 = (uint)pSVar5->max_length;
        uVar3 = (ulong)uVar1;
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)uVar1);
    }
    return (System_String_o *)CJNHFNHJHPE;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(auVar7._0_8_,auVar7._8_8_);
}

