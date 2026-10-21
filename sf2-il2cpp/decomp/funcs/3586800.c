// Nekki.SF2.GUI.Map.MapScene$$MapButtonsPanelSetSibling @ RVA 0x3586800

void Nekki_SF2_GUI_Map_MapScene__MapButtonsPanelSetSibling
               (Nekki_SF2_GUI_Map_MapScene_o *__this,int32_t JACDAGALJHD,MethodInfo *method)

{
  Nekki_SF2_GUI_Map_MapButtonsPanel_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  
  if ((DAT_04568cfc & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Map_MapScene_TypeInfo);
    DAT_04568cfc = 1;
  }
  if ((__this->fields).super.HPPDLINDJKA != false) {
    return;
  }
  __this_00 = (__this->fields).MGIJJGGPFJB;
  if (__this_00 != (Nekki_SF2_GUI_Map_MapButtonsPanel_o *)0x0) {
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (JACDAGALJHD == -1) {
      if ((Nekki_SF2_GUI_Map_MapScene_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      JACDAGALJHD = Nekki_SF2_GUI_Map_MapScene_TypeInfo->static_fields->AAGIOBBFCDN;
    }
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__SetSiblingIndex(__this_01,JACDAGALJHD,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

