// Nekki.SF2.GUI.TableViewCell$$Awake @ RVA 0x31BCFD8

void Nekki_SF2_GUI_TableViewCell__Awake(Nekki_SF2_GUI_TableViewCell_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  if ((DAT_04566bf9 & 1) == 0) {
    FUN_01bab630(&Method_Util_OHBILOGJCLA<Selectable>__);
    DAT_04566bf9 = 1;
  }
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  Util__OHBILOGJCLA<object>(LAIGNDBNBJG,Method_Util_OHBILOGJCLA<Selectable>__);
  return;
}

