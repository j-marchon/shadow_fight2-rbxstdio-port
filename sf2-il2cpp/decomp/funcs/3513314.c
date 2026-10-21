// Nekki.SF2.GUI.Dialogs.ShowLoot.ShowLootDialog$$FMJHHEJDAKI @ RVA 0x3513314

void Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog__FMJHHEJDAKI
               (Nekki_SF2_GUI_Dialogs_ShowLoot_ShowLootDialog_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_ScrollRect_o *pUVar3;
  float fVar4;
  UnityEngine_Vector2_o UVar5;
  UnityEngine_Rect_o UVar6;
  
  if ((DAT_04568903 & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04568903 = 1;
  }
  pUVar3 = (__this->fields)._scroll;
  if ((pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
     (pUVar2 = (pUVar3->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
  goto LAB_03613410;
  iVar1 = UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0)
  ;
  if (iVar1 < 1) {
                    /* catch() { ... } // from try @ 0361325c with catch @ 036133cc */
    fVar4 = 0.0;
  }
  else {
    pUVar3 = (__this->fields)._scroll;
                    /* try { // try from 03613388 to 0371338f has its CatchHandler @ 036133dc */
                    /* try { // try from 03613390 to 03713393 has its CatchHandler @ 036133d0 */
                    /* try { // try from 03613394 to 03713397 has its CatchHandler @ 036133c8 */
                    /* try { // try from 03613398 to 0371339b has its CatchHandler @ 036133b4 */
    if ((((pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
         (pUVar2 = (pUVar3->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0)) ||
        (pUVar2 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Transform__GetChild
                            ((UnityEngine_Transform_o *)pUVar2,0,(MethodInfo *)0x0),
        pUVar2 == (UnityEngine_RectTransform_o *)0x0)) ||
       (pUVar2->klass != UnityEngine_RectTransform_TypeInfo)) goto LAB_03613410;
                    /* try { // try from 0361339c to 0371339f has its CatchHandler @ 036133c8 */
                    /* try { // try from 036133a0 to 037133a3 has its CatchHandler @ 03613080 */
    UVar5 = UnityEngine_RectTransform__get_sizeDelta(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 036133a4 to 037133a7 has its CatchHandler @ 036133b0 */
    pUVar3 = (__this->fields)._scroll;
                    /* try { // try from 036133a8 to 037133eb has its CatchHandler @ 03613080 */
                    /* catch() { ... } // from try @ 036133a4 with catch @ 036133b0 */
    if ((pUVar3 == (UnityEngine_UI_ScrollRect_o *)0x0) ||
       (pUVar2 = (pUVar3->fields).m_Content, pUVar2 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_03613410;
                    /* catch() { ... } // from try @ 03613398 with catch @ 036133b4 */
                    /* catch() { ... } // from try @ 03613278 with catch @ 036133b8 */
                    /* catch() { ... } // from try @ 03613288 with catch @ 036133bc */
    iVar1 = UnityEngine_Transform__get_childCount
                      ((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03613290 with catch @ 036133c0 */
                    /* catch() { ... } // from try @ 03613250 with catch @ 036133c4 */
    fVar4 = UVar5.fields.y * (float)iVar1;
                    /* catch() { ... } // from try @ 03613394 with catch @ 036133c8
                       catch() { ... } // from try @ 0361339c with catch @ 036133c8 */
  }
                    /* catch() { ... } // from try @ 03613390 with catch @ 036133d0 */
  pUVar3 = (__this->fields)._scroll;
                    /* catch() { ... } // from try @ 036131e8 with catch @ 036133d4 */
                    /* catch() { ... } // from try @ 0361318c with catch @ 036133d8 */
                    /* catch() { ... } // from try @ 03613388 with catch @ 036133dc */
  if ((pUVar3 != (UnityEngine_UI_ScrollRect_o *)0x0) &&
     (pUVar2 = (pUVar3->fields).m_Viewport, pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar6 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 036133ec to 037133ef has its CatchHandler @ 03613400 */
                    /* catch() { ... } // from try @ 036133ec with catch @ 03613400 */
    (pUVar3->fields).m_Vertical = UVar6.fields.m_Height + 0.01 <= fVar4;
                    /* try { // try from 03613408 to 0371346f has its CatchHandler @ 03613484 */
    return;
  }
LAB_03613410:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

