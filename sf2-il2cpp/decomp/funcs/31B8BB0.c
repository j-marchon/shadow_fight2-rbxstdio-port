// Nekki.SF2.GUI.Map.MapButtonViewBase.HHMKPEIPOFE$$MoveNext @ RVA 0x31B8BB0

bool Nekki_SF2_GUI_Map_MapButtonViewBase_HHMKPEIPOFE__MoveNext
               (Nekki_SF2_GUI_Map_MapButtonViewBase_HHMKPEIPOFE_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_CanvasGroup_o *pUVar3;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o **ppUVar4;
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this_01;
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *in_x2;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *pUVar7;
  Nekki_SF2_GUI_Map_MapButtonViewBase_o *pNVar8;
  System_Collections_IEnumerator_o **ppSVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar13;
  
                    /* try { // try from 032b8bc4 to 033b8bcb has its CatchHandler @ 032b8cac */
  if ((DAT_04566bcf & 1) == 0) {
                    /* try { // try from 032b8bcc to 033b8c6f has its CatchHandler @ 032b8574 */
    FUN_01bab630(&UnityEngine_WaitForSecondsRealtime_TypeInfo);
    DAT_04566bcf = 1;
  }
  iVar1 = (__this->fields).__1__state;
  pNVar8 = (__this->fields).__4__this;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    if ((pNVar8 == (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) ||
       (pUVar3 = (pNVar8->fields)._hintRootCanvasGroup, pUVar3 == (UnityEngine_CanvasGroup_o *)0x0))
    goto LAB_032b8db8;
                    /* try { // try from 032b8c70 to 033b8c77 has its CatchHandler @ 032b8ccc */
    UnityEngine_CanvasGroup__set_alpha(pUVar3,1.0,(MethodInfo *)0x0);
                    /* try { // try from 032b8c78 to 033b8c7f has its CatchHandler @ 032b8cc8 */
    pUVar7 = (pNVar8->fields).EGCJJLLHGHM;
    if (pUVar7 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_032b8db8;
                    /* try { // try from 032b8c80 to 033b8c83 has its CatchHandler @ 032b8ca4 */
                    /* try { // try from 032b8c84 to 033b8c87 has its CatchHandler @ 032b8c9c */
                    /* try { // try from 032b8c88 to 033b8c8b has its CatchHandler @ 032b8c90 */
    fVar10 = Nekki_SF2_GUI_Map_MapButtonViewBase__OIGHNFJGHEO
                       (__this_01,(pNVar8->fields).KFCOGLMHJGN,
                        *(float *)&(pUVar7->fields).m_ChildScaleWidth,in_x2);
                    /* try { // try from 032b8c8c to 033b8ce3 has its CatchHandler @ 032b8574 */
    pUVar7 = (pNVar8->fields).FHNILHOGNFF;
                    /* catch() { ... } // from try @ 032b8c88 with catch @ 032b8c90 */
    if (pUVar7 == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto LAB_032b8db8;
                    /* catch() { ... } // from try @ 032b89b4 with catch @ 032b8c94 */
                    /* catch() { ... } // from try @ 032b89f0 with catch @ 032b8c98 */
                    /* catch() { ... } // from try @ 032b8c84 with catch @ 032b8c9c */
                    /* catch() { ... } // from try @ 032b88bc with catch @ 032b8ca0 */
    fVar11 = Nekki_SF2_GUI_Map_MapButtonViewBase__OIGHNFJGHEO
                       (__this_02,(pNVar8->fields).GPBMNMEDLKB,
                        *(float *)&(pUVar7->fields).m_ChildScaleWidth,in_x2);
                    /* catch() { ... } // from try @ 032b8c80 with catch @ 032b8ca4 */
                    /* catch() { ... } // from try @ 032b893c with catch @ 032b8ca8 */
                    /* catch() { ... } // from try @ 032b8bc4 with catch @ 032b8cac */
    pUVar5 = (pNVar8->fields)._hintRoot;
                    /* catch() { ... } // from try @ 032b88a8 with catch @ 032b8cb0 */
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
                    /* catch() { ... } // from try @ 032b8978 with catch @ 032b8cb4 */
                    /* catch() { ... } // from try @ 032b88f8 with catch @ 032b8cb8 */
    fVar10 = fVar10 + (float)(pNVar8->fields)._hintWidthSpace;
                    /* catch() { ... } // from try @ 032b8724 with catch @ 032b8cbc */
    fVar11 = (float)(pNVar8->fields)._hintMinWidth;
                    /* catch() { ... } // from try @ 032b8a3c with catch @ 032b8cc0 */
                    /* catch() { ... } // from try @ 032b8710 with catch @ 032b8cc4 */
    if (fVar11 <= fVar10) {
      fVar11 = fVar10;
    }
                    /* catch() { ... } // from try @ 032b8c78 with catch @ 032b8cc8 */
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032b8db8;
                    /* catch() { ... } // from try @ 032b8c70 with catch @ 032b8ccc */
    UVar12 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    UVar12.fields.x = fVar11;
                    /* try { // try from 032b8ce4 to 033b8ce7 has its CatchHandler @ 032b8d10 */
    UnityEngine_RectTransform__set_sizeDelta(pUVar5,UVar12,(MethodInfo *)0x0);
                    /* try { // try from 032b8ce8 to 033b8d1f has its CatchHandler @ 032b8574 */
    pUVar5 = (pNVar8->fields)._hintBackgndRoot;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032b8db8;
    UVar13 = UnityEngine_Transform__get_localScale
                       ((UnityEngine_Transform_o *)pUVar5,(MethodInfo *)0x0);
    __this_03 = (pNVar8->fields)._hintBackgndRoot;
    if (__this_03 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032b8db8;
    UVar12 = UnityEngine_RectTransform__get_sizeDelta(__this_03,(MethodInfo *)0x0);
    value.fields.y = UVar12.fields.y;
                    /* catch() { ... } // from try @ 032b8ce4 with catch @ 032b8d10 */
    value.fields.x = fVar11 / UVar13.fields.x;
    UnityEngine_RectTransform__set_sizeDelta(pUVar5,value,(MethodInfo *)0x0);
                    /* try { // try from 032b8d20 to 033b8d27 has its CatchHandler @ 032b8d3c */
    pUVar5 = (pNVar8->fields)._hintRoot;
    if (pUVar5 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032b8db8;
                    /* try { // try from 032b8d28 to 033b8d33 has its CatchHandler @ 032b8574 */
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
                    /* try { // try from 032b8d34 to 033b8d3b has its CatchHandler @ 032b8d3c */
    Nekki_SF2_GUI_Map_IRaidKeysView__AMOJAGCNKAB(pUVar6,(MethodInfo *)0x0);
    ppSVar9 = &(pNVar8->fields).OFAKKFOAPFD;
    *ppSVar9 = (System_Collections_IEnumerator_o *)0x0;
                    /* catch() { ... } // from try @ 032b8d20 with catch @ 032b8d3c
                       catch() { ... } // from try @ 032b8d34 with catch @ 032b8d3c */
    thunk_FUN_01c20e04(ppSVar9,0);
LAB_032b8d48:
                    /* try { // try from 032b8d48 to 033b8e3b has its CatchHandler @ 032b8d48
                       catch() { ... } // from try @ 032b8d48 with catch @ 032b8d48
                       catch() { ... } // from try @ 032b8e64 with catch @ 032b8d48
                       catch() { ... } // from try @ 032b8e98 with catch @ 032b8d48
                       catch() { ... } // from try @ 032b8ec4 with catch @ 032b8d48
                       catch() { ... } // from try @ 032b8f04 with catch @ 032b8d48 */
    bVar2 = false;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (pNVar8 == (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) goto LAB_032b8db8;
    }
    else {
      if (iVar1 != 0) goto LAB_032b8d48;
      (__this->fields).__1__state = -1;
      if ((pNVar8 == (Nekki_SF2_GUI_Map_MapButtonViewBase_o *)0x0) ||
         (pUVar3 = (pNVar8->fields)._hintRootCanvasGroup, pUVar3 == (UnityEngine_CanvasGroup_o *)0x0
         )) goto LAB_032b8db8;
      UnityEngine_CanvasGroup__set_alpha(pUVar3,0.001,(MethodInfo *)0x0);
      __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)
                  thunk_FUN_01bda818(UnityEngine_WaitForSecondsRealtime_TypeInfo);
      UnityEngine_WaitForSecondsRealtime___ctor(__this_00,0.01,(MethodInfo *)0x0);
      ppUVar4 = &(__this->fields)._delay_5__2;
      *ppUVar4 = __this_00;
      thunk_FUN_01c20e04(ppUVar4,__this_00);
    }
    pUVar5 = (pNVar8->fields)._hintRoot;
    if ((pUVar5 == (UnityEngine_RectTransform_o *)0x0) ||
       (pUVar6 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
       pUVar6 == (UnityEngine_GameObject_o *)0x0)) {
LAB_032b8db8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    bVar2 = UnityEngine_GameObject__get_activeInHierarchy(pUVar6,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)(__this->fields)._delay_5__2;
    thunk_FUN_01c20e04();
    if (bVar2) {
      (__this->fields).__1__state = 2;
      bVar2 = true;
    }
    else {
      bVar2 = true;
      (__this->fields).__1__state = 1;
    }
  }
  return bVar2;
}

