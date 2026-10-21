// Nekki.SF2.GUI.Common.ControlsInfo.ControlsInfoCategoryTab$$set_Category @ RVA 0x3524980

void Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__set_Category
               (Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab_o *__this,
               int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Category == CJNHFNHJHPE) {
    return;
  }
  (__this->fields)._Category = CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_ControlsInfo_ControlsInfoCategoryTab__Refresh
            (__this,(MethodInfo *)(ulong)(uint)CJNHFNHJHPE);
  return;
}

