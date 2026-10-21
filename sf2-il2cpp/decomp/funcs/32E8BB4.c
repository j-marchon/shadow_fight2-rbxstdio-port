// Nekki.SF2.GUI.Dialogs.Raids.GeneralPlayerInfoView$$HIILKMCLKKL @ RVA 0x32E8BB4

void Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__HIILKMCLKKL
               (Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView_o *__this,int32_t BCOCGHJNMDJ,
               int32_t FLBLBILEGCK,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t ACCIHBHMFPN;
  bool BDMNPNHEAEC;
  MethodInfo *in_x4;
  float __this_00;
  double dVar2;
  float fVar3;
  undefined1 local_40 [8];
  double local_38;
  
  if ((DAT_04567629 & 1) == 0) {
    FUN_01bab630(&StringLiteral_22500);
    FUN_01bab630(&StringLiteral_756);
    FUN_01bab630(&StringLiteral_18782);
    DAT_04567629 = 1;
  }
  local_40 = (undefined1  [8])0x0;
  if (BCOCGHJNMDJ < 10) {
    local_40._4_4_ = 0;
    local_40._0_4_ = 10 - BCOCGHJNMDJ;
    pSVar1 = System_Int32__ToString((int32_t)local_40,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(StringLiteral_18782,pSVar1,StringLiteral_22500,(MethodInfo *)0x0)
    ;
    ACCIHBHMFPN = 7;
    BDMNPNHEAEC = true;
    goto LAB_033e8d2c;
  }
  fVar3 = ((float)FLBLBILEGCK * 100.0) / (float)BCOCGHJNMDJ;
                    /* try { // try from 033e8c84 to 034e8d17 has its CatchHandler @ 033e8c84
                       catch() { ... } // from try @ 033e8c84 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8d34 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8d60 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8d88 with catch @ 033e8c84
                       catch() { ... } // from try @ 033e8dc8 with catch @ 033e8c84 */
  dVar2 = modf((double)fVar3,&local_38);
  if (0.0 <= fVar3) {
    if (dVar2 == 0.5) {
      fVar3 = 1.0;
      goto LAB_033e8cc4;
    }
    __this_00 = (float)(int)(fVar3 + 0.5);
  }
  else if (dVar2 == -0.5) {
    fVar3 = -1.0;
LAB_033e8cc4:
    __this_00 = (float)local_38;
    if (((long)local_38 & 1U) != 0) {
      __this_00 = (float)local_38 + fVar3;
    }
  }
  else {
    __this_00 = (float)(int)(fVar3 + -0.5);
  }
  local_40._4_4_ = __this_00;
  pSVar1 = System_Single__ToString(__this_00,(MethodInfo *)(local_40 + 4));
                    /* try { // try from 033e8d18 to 034e8d1f has its CatchHandler @ 033e8d6c */
  pSVar1 = System_String__Concat(pSVar1,StringLiteral_756,(MethodInfo *)0x0);
  ACCIHBHMFPN = 8;
  BDMNPNHEAEC = false;
LAB_033e8d2c:
                    /* try { // try from 033e8d2c to 034e8d33 has its CatchHandler @ 033e8d68 */
  Nekki_SF2_GUI_Dialogs_Raids_GeneralPlayerInfoView__LFENGGKOJDO
            (__this,ACCIHBHMFPN,pSVar1,BDMNPNHEAEC,in_x4);
                    /* try { // try from 033e8d34 to 034e8d5b has its CatchHandler @ 033e8c84 */
  return;
}

