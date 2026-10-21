// Nekki.SF2.GUI.Fight.StylePanel$$get_rectTransform @ RVA 0x32936D0

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Fight_StylePanel__get_rectTransform
          (Nekki_SF2_GUI_Fight_StylePanel_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
                    /* try { // try from 033936e0 to 034936e7 has its CatchHandler @ 03393720 */
  if ((DAT_04567345 & 1) == 0) {
                    /* try { // try from 033936e8 to 0349370b has its CatchHandler @ 033935b4 */
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04567345 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0339370c to 0349370f has its CatchHandler @ 03393724 */
                    /* try { // try from 03393710 to 0349371b has its CatchHandler @ 03393730 */
                    /* try { // try from 0339371c to 0349373f has its CatchHandler @ 033935b4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033936e0 with catch @ 03393720
                        */
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393710 with catch @ 03393730
                        */
      FUN_01babc64();
    }
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0339370c with catch @ 03393724
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393698 with catch @ 03393728
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03393684 with catch @ 0339372c
                        */
  return pUVar1;
}

