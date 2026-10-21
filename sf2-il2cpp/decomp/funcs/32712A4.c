// Nekki.SF2.GUI.StrikeThroughTextLine$$HasSomethingToRender @ RVA 0x32712A4

bool Nekki_SF2_GUI_StrikeThroughTextLine__HasSomethingToRender
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if ((DAT_04567228 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<StrikeThroughTextLine_NLGMBKIAOPD>__);
    DAT_04567228 = 1;
  }
  bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                    ((System_Collections_Generic_List_T__o *)(__this->fields).super.m_Corners,
                     Method_DJNBJHPDKDP_OBECCOPBADO<StrikeThroughTextLine_NLGMBKIAOPD>__);
  if (bVar1) {
    bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                      ((System_Collections_Generic_List_T__o *)
                       (__this->fields)._KHPCAICPJCK_k__BackingField,
                       Method_DJNBJHPDKDP_OBECCOPBADO<StrikeThroughTextLine_NLGMBKIAOPD>__);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

