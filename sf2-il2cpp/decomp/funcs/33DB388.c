// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$ENMNHIMEELL @ RVA 0x33DB388

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__ENMNHIMEELL
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t JDEFJPHCNMM;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_01;
  GGLKHCAIGDI_o *NDLOGJOGFCA;
  MethodInfo *in_x2;
  GGLKHCAIGDI_o **ppGVar2;
  
  if ((DAT_04567e6a & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e6a = 1;
  }
  (__this->fields).NBAADNACNDJ = 0;
  if (((__this->fields).MALOHNFLOGO == false) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    ppGVar2 = &(__this->fields).DMAFCPPFLEN;
    NDLOGJOGFCA = *ppGVar2;
    JDEFJPHCNMM = 0;
    if (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0) {
      JDEFJPHCNMM = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,NDLOGJOGFCA,in_x2);
    }
    __this_00 = (__this->fields)._TableView;
    if (__this_00 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_034db454;
    Nekki_SF2_GUI_TableView__ScrollToCell
              (__this_00,JDEFJPHCNMM,(__this->fields)._ScrollDuration,(MethodInfo *)0x0);
    (__this->fields).DMAFCPPFLEN = (GGLKHCAIGDI_o *)0x0;
    thunk_FUN_01c20e04(ppGVar2,0);
  }
  __this_01 = (__this->fields)._OnStateChange;
  if (__this_01 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).NBAADNACNDJ,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,true,(MethodInfo *)0x0);
    return;
  }
LAB_034db454:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

