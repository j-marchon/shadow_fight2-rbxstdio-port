// Nekki.SF2.GUI.Fight.PlayerLifeBar$$get_rectTransform @ RVA 0x351FD18

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Fight_PlayerLifeBar__get_rectTransform
          (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
                    /* try { // try from 0361fd1c to 0371fd57 has its CatchHandler @ 0361fb64 */
  if ((DAT_045689b0 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_045689b0 = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
                    /* try { // try from 0361fd58 to 0371fd5b has its CatchHandler @ 0361fda0 */
                    /* try { // try from 0361fd5c to 0371fd5f has its CatchHandler @ 0361fd9c */
                    /* try { // try from 0361fd60 to 0371fd63 has its CatchHandler @ 0361fb64 */
                    /* try { // try from 0361fd64 to 0371fd67 has its CatchHandler @ 0361fd8c */
                    /* try { // try from 0361fd68 to 0371fd6b has its CatchHandler @ 0361fd84 */
    if (pUVar1->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0361fcb8 with catch @ 0361fd78 */
      FUN_01babc64();
    }
  }
                    /* try { // try from 0361fd6c to 0371fd6f has its CatchHandler @ 0361fd74 */
                    /* catch() { ... } // from try @ 0361fcd4 with catch @ 0361fd70
                       try { // try from 0361fd70 to 0371fdbb has its CatchHandler @ 0361fb64 */
                    /* catch() { ... } // from try @ 0361fd6c with catch @ 0361fd74 */
  return pUVar1;
}

