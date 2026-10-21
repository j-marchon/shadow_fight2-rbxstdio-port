// Nekki.SF2.GUI.Profile.SealsController$$SelectBottomSubItem @ RVA 0x311E7F4

bool Nekki_SF2_GUI_Profile_SealsController__SelectBottomSubItem
               (Nekki_SF2_GUI_Profile_SealsController_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  
  LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  bVar1 = AKJJAPEHKCG__MNKFDLHJPAA(LAIGNDBNBJG,(MethodInfo *)0x0);
  if (!bVar1) {
    Nekki_SF2_GUI_Profile_ItemsController__ScrollToNextCell
              ((Nekki_SF2_GUI_Profile_ItemsController_o *)__this,0.3,(MethodInfo *)0x0);
  }
  return (bool)(~bVar1 & 1);
}

