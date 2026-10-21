// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$SetCountVisible @ RVA 0x34A6774

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__SetCountVisible
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,bool CCOCAIEPCOJ,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  UnityEngine_GameObject_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  
                    /* try { // try from 035a6774 to 036a677b has its CatchHandler @ 035a6818 */
  pNVar2 = (__this->fields)._consumableCountBack;
                    /* try { // try from 035a6794 to 036a6797 has its CatchHandler @ 035a6808 */
  if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
    if (bVar1 != CCOCAIEPCOJ) {
                    /* try { // try from 035a67b0 to 036a67b7 has its CatchHandler @ 035a6814 */
      pNVar2 = (__this->fields)._consumableCountBack;
                    /* try { // try from 035a67b8 to 036a67fb has its CatchHandler @ 035a66a8 */
      if ((pNVar2 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         pUVar3 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035a6830;
      UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
    }
    pNVar4 = (__this->fields)._consumableCountText;
    if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar3 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
       pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
      bVar1 = UnityEngine_GameObject__get_activeSelf(pUVar3,(MethodInfo *)0x0);
      if (bVar1 == CCOCAIEPCOJ) {
        return;
      }
                    /* try { // try from 035a67fc to 036a67ff has its CatchHandler @ 035a6810 */
      pNVar4 = (__this->fields)._consumableCountText;
                    /* try { // try from 035a6800 to 036a6803 has its CatchHandler @ 035a680c */
                    /* try { // try from 035a6804 to 036a682f has its CatchHandler @ 035a66a8 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6794 with catch @ 035a6808
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6800 with catch @ 035a680c
                        */
      if ((pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a67fc with catch @ 035a6810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a67b0 with catch @ 035a6814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035a6774 with catch @ 035a6818
                        */
        UnityEngine_GameObject__SetActive(pUVar3,CCOCAIEPCOJ,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_035a6830:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a6830 to 036a6833 has its CatchHandler @ 035a685c */
  FUN_01bab8c8();
}

