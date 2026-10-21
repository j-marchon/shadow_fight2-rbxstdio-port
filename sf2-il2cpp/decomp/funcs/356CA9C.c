// Nekki.SF2.GUI.Menu.MainMenu$$BILJLFKOMPC @ RVA 0x356CA9C

void Nekki_SF2_GUI_Menu_MainMenu__BILJLFKOMPC
               (Nekki_SF2_GUI_Menu_MainMenu_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MGNPHCAAEIO_StaticFields *pMVar1;
  UnityEngine_Rect_o UVar2;
  
  if ((DAT_04568c33 & 1) == 0) {
    FUN_01bab630(&MGNPHCAAEIO_TypeInfo);
    DAT_04568c33 = 1;
  }
  __this_00 = (__this->fields).btnDojoDisciple;
  if ((__this_00 != (UnityEngine_UI_Toggle_o *)0x0) &&
     (__this_01 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar2 = UnityEngine_RectTransform__get_rect(__this_01,(MethodInfo *)0x0);
    if ((MGNPHCAAEIO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UVar2.fields.m_XMin,UVar2.fields.m_YMin,UVar2.fields.m_Width);
    }
    pMVar1 = MGNPHCAAEIO_TypeInfo->static_fields;
    pMVar1->AFLBMKKOAGE = UVar2.fields.m_Height;
    pMVar1->PPIEHBLJEHP = 20.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

