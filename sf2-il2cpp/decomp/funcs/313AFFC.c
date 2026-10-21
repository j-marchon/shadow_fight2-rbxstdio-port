// Nekki.SF2.GUI.Dialogs.Raids.Clans.FindClanTable$$Init @ RVA 0x313AFFC

void Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable__Init
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanTable_o *__this,
               Nekki_SF2_GUI_SimpleScroll_o *MGFBPKIBNJI,
               Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *GEFKGPIDOGL,MethodInfo *method)

{
  Nekki_SF2_GUI_BaseScrollItem_o *DKIDCBPNMPD;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o **ppNVar1;
  Nekki_SF2_GUI_SimpleScroll_o *__this_00;
  Nekki_SF2_GUI_SimpleScroll_o **ppNVar2;
  
  if ((DAT_04566729 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<BaseScrollItem>__);
    FUN_01bab630(&StringLiteral_6436);
    DAT_04566729 = 1;
  }
  ppNVar2 = &(__this->fields).PDHMLFAMNCO;
  *ppNVar2 = MGFBPKIBNJI;
  thunk_FUN_01c20e04(ppNVar2,MGFBPKIBNJI);
  ppNVar1 = &(__this->fields).KFCHMBGIPJK;
  *ppNVar1 = GEFKGPIDOGL;
  thunk_FUN_01c20e04(ppNVar1,GEFKGPIDOGL);
  if (*ppNVar2 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
    Nekki_SF2_GUI_SimpleScroll__Init(*ppNVar2,(MethodInfo *)0x0);
    if (*ppNVar1 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_FindClanCell_o *)0x0) {
      __this_00 = *ppNVar2;
      DKIDCBPNMPD = (Nekki_SF2_GUI_BaseScrollItem_o *)
                    UnityEngine_Component__GetComponent<object>
                              ((UnityEngine_Component_o *)*ppNVar1,
                               Method_UnityEngine_Component_GetComponent<BaseScrollItem>__);
      if (__this_00 != (Nekki_SF2_GUI_SimpleScroll_o *)0x0) {
        Nekki_SF2_GUI_SimpleScroll__UsePoolPrefab
                  (__this_00,StringLiteral_6436,DKIDCBPNMPD,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

