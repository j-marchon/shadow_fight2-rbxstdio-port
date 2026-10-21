// Nekki.SF2.GUI.Profile.ProfileScene$$get_IsTrickPlaying @ RVA 0x339648C

bool Nekki_SF2_GUI_Profile_ProfileScene__get_IsTrickPlaying
               (Nekki_SF2_GUI_Profile_ProfileScene_o *__this,MethodInfo *method)

{
  if (((__this->fields).GCPBEAFOPOA == (ECENNHNBAME_o *)0x0) &&
     ((__this->fields).KPIIFJBPODO == (DG_Tweening_Tween_o *)0x0)) {
    return (__this->fields).GGIEDAGJFHO != false;
  }
  return true;
}

