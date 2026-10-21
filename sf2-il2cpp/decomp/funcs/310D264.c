// Nekki.SF2.GUI.SpriteRendererQuality$$ChangeColor @ RVA 0x310D264

void Nekki_SF2_GUI_SpriteRendererQuality__ChangeColor
               (Nekki_SF2_GUI_SpriteRendererQuality_o *__this,UnityEngine_Color_o BCPMKLLLFDL,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *extraout_x1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  
                    /* try { // try from 0320d27c to 0330d283 has its CatchHandler @ 0320d2e8 */
                    /* try { // try from 0320d290 to 0330d29b has its CatchHandler @ 0320d2e4 */
  if ((DAT_04566559 & 1) == 0) {
                    /* try { // try from 0320d2a4 to 0330d2b3 has its CatchHandler @ 0320d2dc */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566559 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0320d2b4 to 0330d2d3 has its CatchHandler @ 0320d1b4 */
  pUVar2 = (__this->fields).OMLKINHHMLE;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* try { // try from 0320d2d4 to 0330d2d7 has its CatchHandler @ 0320d2e0 */
  if (bVar1) {
                    /* try { // try from 0320d2d8 to 0330d2f7 has its CatchHandler @ 0320d1b4 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d2a4 with catch @ 0320d2dc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d2d4 with catch @ 0320d2e0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d290 with catch @ 0320d2e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0320d27c with catch @ 0320d2e8
                        */
    return;
  }
  pUVar2 = (__this->fields).OMLKINHHMLE;
  if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 0320d2f8 to 0330d2fb has its CatchHandler @ 0320d33c */
                    /* try { // try from 0320d2fc to 0330d343 has its CatchHandler @ 0320d1b4 */
    UnityEngine_SpriteRenderer__set_color(pUVar2,BCPMKLLLFDL,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

