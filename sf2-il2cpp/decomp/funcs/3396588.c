// Nekki.SF2.GUI.Profile.ProfileScene$$PlayTrick @ RVA 0x3396588

void Nekki_SF2_GUI_Profile_ProfileScene__PlayTrick
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,KCLPNDAPADO_o *EKBENIDNAEE,
               MethodInfo *method)

{
  MethodInfo *method_00;
  Nekki_SF2_GUI_SpriteRendererQuality_o *__this_00;
  
  if ((DAT_04567c56 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_04567c56 = 1;
  }
  if ((((__this->fields).GCPBEAFOPOA != (ECENNHNBAME_o *)0x0) ||
      ((__this->fields).KPIIFJBPODO != (DG_Tweening_Tween_o *)0x0)) ||
     ((__this->fields).GGIEDAGJFHO != false)) {
    return;
  }
  if (EKBENIDNAEE != (KCLPNDAPADO_o *)0x0) {
    (__this->fields).GCPBEAFOPOA = (EKBENIDNAEE->fields).FLIONKHMLLB;
    thunk_FUN_01c20e04(&(__this->fields).GCPBEAFOPOA);
    __this_00 = (__this->fields)._Background;
    if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (__this_00 != (Nekki_SF2_GUI_SpriteRendererQuality_o *)0x0) {
      Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
                (__this_00,
                 (UnityEngine_Color_o)(BHEDGAKGKPO_TypeInfo->static_fields->IDLNHECBHND).fields,
                 (MethodInfo *)0x0);
      Nekki_SF2_GUI_Profile_ProfileScene__CFBMLNECFEF(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

