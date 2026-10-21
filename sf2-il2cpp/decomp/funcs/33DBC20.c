// Nekki.SF2.GUI.Shop.Forge.ForgePanel$$DCHFNNCGPKO @ RVA 0x33DBC20

void Nekki_SF2_GUI_Shop_Forge_ForgePanel__DCHFNNCGPKO
               (Nekki_SF2_GUI_Shop_Forge_ForgePanel_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *__this_01;
  GGLKHCAIGDI_o *NDLOGJOGFCA;
  MethodInfo *in_x2;
  System_Collections_Generic_List_GGLKHCAIGDI__o *pSVar4;
  int32_t JDEFJPHCNMM;
  
  if ((DAT_04567e76 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_PAODHPJCAPN<GGLKHCAIGDI>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GGLKHCAIGDI>_get_Count__);
    FUN_01bab630(&Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    DAT_04567e76 = 1;
  }
  (__this->fields).NBAADNACNDJ = 1;
  if (((__this->fields).MALOHNFLOGO == false) &&
     (bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                        ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                         Method_DJNBJHPDKDP_OBECCOPBADO<GGLKHCAIGDI>__), !bVar1)) {
    iVar2 = DJNBJHPDKDP__PAODHPJCAPN<object>
                      ((System_Collections_Generic_List_T__o *)(__this->fields).OKIANCELJJF,
                       Method_DJNBJHPDKDP_PAODHPJCAPN<GGLKHCAIGDI>__);
    NDLOGJOGFCA = (__this->fields).DMAFCPPFLEN;
    JDEFJPHCNMM = iVar2;
    if (NDLOGJOGFCA != (GGLKHCAIGDI_o *)0x0) {
      pSVar4 = (__this->fields).OKIANCELJJF;
      if (pSVar4 == (System_Collections_Generic_List_GGLKHCAIGDI__o *)0x0) goto LAB_034dbd28;
      if (1 < (pSVar4->fields)._size) {
        iVar3 = Nekki_SF2_GUI_Shop_Forge_ForgePanel__NMPMNEEHKEL(__this,NDLOGJOGFCA,in_x2);
        JDEFJPHCNMM = 0;
        if (iVar3 != iVar2) {
          JDEFJPHCNMM = iVar2;
        }
      }
    }
    __this_00 = (__this->fields)._TableView;
    if (__this_00 == (Nekki_SF2_GUI_TableView_o *)0x0) goto LAB_034dbd28;
    Nekki_SF2_GUI_TableView__ScrollToCell(__this_00,JDEFJPHCNMM,0.0,(MethodInfo *)0x0);
  }
  __this_01 = (__this->fields)._OnStateChange;
  if (__this_01 != (Nekki_SF2_GUI_Shop_Forge_ForgePanel_ANMGCDLFCAF_o *)0x0) {
    UnityEngine_Events_UnityEvent<Int32Enum>__Invoke
              ((UnityEngine_Events_UnityEvent_T0__o *)__this_01,(__this->fields).NBAADNACNDJ,
               Method_UnityEngine_Events_UnityEvent<ForgePanel_AHMDMAAJAJN>_Invoke__);
    Util__IHPDCBOFHPA((__this->fields)._renderRoot,true,(MethodInfo *)0x0);
    return;
  }
LAB_034dbd28:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

