// Nekki.SF2.GUI.Shop.InfoPanelContent$$IDAFPIICNIF @ RVA 0x30094C8

void Nekki_SF2_GUI_Shop_InfoPanelContent__IDAFPIICNIF
               (Nekki_SF2_GUI_Shop_InfoPanelContent_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  UnityEngine_GameObject_o *__this_00;
  HOOAAGABMBL_o *pHVar2;
  
                    /* catch() { ... } // from try @ 03109464 with catch @ 031094cc */
  pNVar1 = (__this->fields)._descriptionDonate;
                    /* catch() { ... } // from try @ 031094a0 with catch @ 031094d8 */
  if ((pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
                    /* try { // try from 031094e8 to 032094f3 has its CatchHandler @ 03109160 */
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pHVar2 = (__this->fields).BBODGCMLKFP;
                    /* try { // try from 031094f4 to 032094fb has its CatchHandler @ 031094fc */
                    /* catch() { ... } // from try @ 03109478 with catch @ 031094fc
                       catch() { ... } // from try @ 031094c4 with catch @ 031094fc
                       catch() { ... } // from try @ 031094f4 with catch @ 031094fc */
    if ((pHVar2 != (HOOAAGABMBL_o *)0x0) &&
       (pNVar1 = (__this->fields)._descriptionDonate, pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0))
    {
      Nekki_SF2_GUI_LabelAlias__set_Alias
                (pNVar1,(pHVar2->fields)._OICGFKLBNPE_k__BackingField,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

