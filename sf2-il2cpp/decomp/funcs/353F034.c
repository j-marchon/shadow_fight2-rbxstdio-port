// Nekki.SF2.GUI.Profile.PerkCell$$GJNMBGMOEHH @ RVA 0x353F034

void Nekki_SF2_GUI_Profile_PerkCell__GJNMBGMOEHH
               (Nekki_SF2_GUI_Profile_PerkCell_o *__this,
               Nekki_SF2_GUI_Profile_PerkSubItem_o *BCBJCIDEALA,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *pUVar1;
  UnityEngine_Events_UnityEvent_o *pUVar2;
  
                    /* try { // try from 0363f048 to 0373f04b has its CatchHandler @ 0363f058 */
  if ((DAT_04568ae8 & 1) == 0) {
                    /* catch() { ... } // from try @ 0363f048 with catch @ 0363f058 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Profile_PerkCell_HJKLMBOACHH__);
                    /* try { // try from 0363f068 to 0373f0d7 has its CatchHandler @ 0363f0ec */
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04568ae8 = 1;
  }
  if (BCBJCIDEALA != (Nekki_SF2_GUI_Profile_PerkSubItem_o *)0x0) {
    (BCBJCIDEALA->fields).super.PEJMMOONAHC = (Nekki_SF2_GUI_Profile_ProfileCell_o *)__this;
    thunk_FUN_01c20e04(&(BCBJCIDEALA->fields).super.PEJMMOONAHC,__this);
    (BCBJCIDEALA->fields).super.HNDODCMPHHK = true;
    Nekki_SF2_GUI_Profile_SubItem__SetSelectFlashingMinOpacity
              ((Nekki_SF2_GUI_Profile_SubItem_o *)BCBJCIDEALA,0.33333334,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Events_UnityEvent_o *)(BCBJCIDEALA->fields).super.super.super.m_OnClick;
    pUVar1 = (UnityEngine_Events_UnityAction_o *)
             thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
    UnityEngine_Events_UnityAction___ctor();
                    /* try { // try from 0363f0d8 to 0373f0e3 has its CatchHandler @ 0363eac0 */
    if (pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    /* try { // try from 0363f0e4 to 0373f0eb has its CatchHandler @ 0363f0ec */
      UnityEngine_Events_UnityEvent__RemoveListener(pUVar2,pUVar1,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0363f068 with catch @ 0363f0ec
                       catch() { ... } // from try @ 0363f0e4 with catch @ 0363f0ec */
      pUVar2 = (UnityEngine_Events_UnityEvent_o *)(BCBJCIDEALA->fields).super.super.super.m_OnClick;
      pUVar1 = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
      UnityEngine_Events_UnityAction___ctor();
      if (pUVar2 != (UnityEngine_Events_UnityEvent_o *)0x0) {
        UnityEngine_Events_UnityEvent__AddListener(pUVar2,pUVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

