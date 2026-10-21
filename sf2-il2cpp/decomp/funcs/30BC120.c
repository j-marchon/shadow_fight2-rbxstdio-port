// Nekki.SF2.GUI.Common.SceneMenuScroll$$SelectScene @ RVA 0x30BC120

void Nekki_SF2_GUI_Common_SceneMenuScroll__SelectScene
               (Nekki_SF2_GUI_Common_SceneMenuScroll_o *__this,
               Nekki_SF2_GUI_Common_SceneSelector_o *ICAMOHMJIMA,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_Common_SceneSelector_o **ppNVar2;
  Nekki_SF2_GUI_Common_SceneSelector_o *x;
  
                    /* catch() { ... } // from try @ 031bc100 with catch @ 031bc138
                       try { // try from 031bc138 to 032bc1a3 has its CatchHandler @ 031bbe40 */
                    /* catch() { ... } // from try @ 031bc078 with catch @ 031bc13c */
                    /* catch() { ... } // from try @ 031bc0e0 with catch @ 031bc140 */
                    /* catch() { ... } // from try @ 031bc0d0 with catch @ 031bc144 */
  if ((DAT_0456624f & 1) == 0) {
                    /* catch() { ... } // from try @ 031bc058 with catch @ 031bc148 */
                    /* catch() { ... } // from try @ 031bc048 with catch @ 031bc14c */
                    /* catch() { ... } // from try @ 031bbf9c with catch @ 031bc150 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch() { ... } // from try @ 031bbf40 with catch @ 031bc154 */
                    /* catch() { ... } // from try @ 031bbed4 with catch @ 031bc158 */
    DAT_0456624f = 1;
  }
  ppNVar2 = &(__this->fields).NFFFEDGMBIL;
                    /* catch() { ... } // from try @ 031bc018 with catch @ 031bc15c */
  x = *ppNVar2;
                    /* catch() { ... } // from try @ 031bbf14 with catch @ 031bc160 */
                    /* catch() { ... } // from try @ 031bbff4 with catch @ 031bc164 */
                    /* catch() { ... } // from try @ 031bc0b4 with catch @ 031bc168 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch() { ... } // from try @ 031bbfdc with catch @ 031bc16c */
    thunk_FUN_01ba7564();
  }
                    /* catch() { ... } // from try @ 031bc0b0 with catch @ 031bc170 */
                    /* catch() { ... } // from try @ 031bbfcc with catch @ 031bc174 */
                    /* catch() { ... } // from try @ 031bbfa0 with catch @ 031bc178 */
                    /* catch() { ... } // from try @ 031bbf7c with catch @ 031bc17c */
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 031bc02c with catch @ 031bc180 */
  if (bVar1) {
                    /* catch() { ... } // from try @ 031bbf6c with catch @ 031bc184 */
                    /* catch() { ... } // from try @ 031bbf54 with catch @ 031bc188 */
    if (*ppNVar2 == (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) goto LAB_031bc1c0;
                    /* catch() { ... } // from try @ 031bbef4 with catch @ 031bc18c
                       catch() { ... } // from try @ 031bbfc8 with catch @ 031bc18c
                       catch() { ... } // from try @ 031bc030 with catch @ 031bc18c
                       catch() { ... } // from try @ 031bc0b8 with catch @ 031bc18c */
    Nekki_SF2_GUI_Common_SceneSelector__Unselect(*ppNVar2,(MethodInfo *)0x0);
  }
  *ppNVar2 = ICAMOHMJIMA;
  thunk_FUN_01c20e04(ppNVar2,ICAMOHMJIMA);
                    /* try { // try from 031bc1a4 to 032bc1bb has its CatchHandler @ 031bc264 */
  if (*ppNVar2 != (Nekki_SF2_GUI_Common_SceneSelector_o *)0x0) {
                    /* try { // try from 031bc1bc to 032bc253 has its CatchHandler @ 031bbe40 */
    Nekki_SF2_GUI_Common_SceneSelector__Select(*ppNVar2,(MethodInfo *)0x0);
    return;
  }
LAB_031bc1c0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

