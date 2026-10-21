// BANPLPOPIGI$$LLCONNGHGKD @ RVA 0x33C9434

void BANPLPOPIGI__LLCONNGHGKD(BANPLPOPIGI_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_SimpleScroll_o *pNVar2;
  float fVar3;
  
  if ((DAT_04567e09 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    DAT_04567e09 = 1;
  }
  pNVar2 = (__this->fields).PDHMLFAMNCO;
  if (pNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      (*(System_Collections_Generic_List_T__o **)&(pNVar2->fields)._snapEase,
                       Method_DJNBJHPDKDP_OBECCOPBADO<BaseScrollItem>__);
    if (!bVar1) {
      pNVar2 = (__this->fields).PDHMLFAMNCO;
      if (pNVar2 == (Nekki_SF2_GUI_SimpleScroll_o *)0x0) goto LAB_034c94a0;
      fVar3 = Nekki_SF2_GUI_SimpleScroll__GetScrollPos(pNVar2,(MethodInfo *)0x0);
      (__this->fields).FBCMJLLICNC = fVar3;
    }
    return;
  }
LAB_034c94a0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

