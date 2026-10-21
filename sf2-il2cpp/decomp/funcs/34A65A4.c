// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$VisibleGlow @ RVA 0x34A65A4

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__VisibleGlow
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  
  pNVar2 = (__this->fields)._consumableGlow;
                    /* try { // try from 035a65bc to 036a65c3 has its CatchHandler @ 035a6638 */
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
                    /* try { // try from 035a65d4 to 036a65e3 has its CatchHandler @ 035a6630 */
    if (bVar1 == CCOCAIEPCOJ) {
      return;
    }
    pNVar2 = (__this->fields)._consumableGlow;
                    /* try { // try from 035a65e4 to 036a6627 has its CatchHandler @ 035a6510 */
    if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
      if (CCOCAIEPCOJ) {
        Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__HNFDMDOJNKO(__this,method_00);
        return;
      }
                    /* try { // try from 035a6628 to 036a662b has its CatchHandler @ 035a6634 */
      Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__BJEJCCMFMJH(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a662c to 036a664f has its CatchHandler @ 035a6510 */
  FUN_01bab8c8();
}

