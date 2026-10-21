// Nekki.SF2.GUI.Fight.ActivePerkItem$$Destroy @ RVA 0x3086068

void Nekki_SF2_GUI_Fight_ActivePerkItem__Destroy
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  (__this->fields)._PBMMCACCKNJ_k__BackingField = true;
  (__this->fields)._AMJLLCEPGIE_k__BackingField = false;
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  return;
}

