// Nekki.SF2.GUI.Common.Achievements.AchievementMessage$$set_Achievement @ RVA 0x34B50C0

void Nekki_SF2_GUI_Common_Achievements_AchievementMessage__set_Achievement
               (Nekki_SF2_GUI_Common_Achievements_AchievementMessage_o *__this,
               KMJDCOABCCG_o *CJNHFNHJHPE,MethodInfo *method)

{
  undefined4 uVar1;
  bool bVar2;
  KMJDCOABCCG_o *pKVar3;
  KMJDCOABCCG_o **ppKVar4;
  UnityEngine_CanvasGroup_o *pUVar5;
  Nekki_SF2_GUI_LabelAlias_o *pNVar6;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar7;
  
                    /* try { // try from 035b50c8 to 036b50d3 has its CatchHandler @ 035b5238 */
  if ((DAT_0456857c & 1) == 0) {
                    /* try { // try from 035b50e8 to 036b50eb has its CatchHandler @ 035b5234 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* try { // try from 035b50f4 to 036b50ff has its CatchHandler @ 035b522c */
    FUN_01bab630(&StringLiteral_14091);
    DAT_0456857c = 1;
  }
  ppKVar4 = &(__this->fields).HNNMAMJOEMB;
  if (*ppKVar4 != CJNHFNHJHPE) {
                    /* try { // try from 035b5114 to 036b5117 has its CatchHandler @ 035b5228 */
                    /* try { // try from 035b5120 to 036b512b has its CatchHandler @ 035b5224 */
    (__this->fields).HNNMAMJOEMB = CJNHFNHJHPE;
    thunk_FUN_01c20e04(ppKVar4,CJNHFNHJHPE);
    pNVar6 = (__this->fields).text;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035b5140 to 036b5143 has its CatchHandler @ 035b521c */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035b5154 to 036b515f has its CatchHandler @ 035b5214 */
    if ((bVar2) && (*ppKVar4 != (KMJDCOABCCG_o *)0x0)) {
      pNVar6 = (__this->fields).text;
      if (pNVar6 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b5230;
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar6,((*ppKVar4)->fields).JIJLBFGKNJK,(MethodInfo *)0x0)
      ;
    }
    pNVar7 = (__this->fields).icon;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035b517c to 036b5183 has its CatchHandler @ 035b5210 */
      thunk_FUN_01ba7564();
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((bVar2) && (*ppKVar4 != (KMJDCOABCCG_o *)0x0)) {
      pNVar7 = (__this->fields).icon;
                    /* try { // try from 035b51a0 to 036b51a3 has its CatchHandler @ 035b5208 */
      if (pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b5230;
                    /* try { // try from 035b51a4 to 036b51db has its CatchHandler @ 035b4ef8 */
      uVar1 = StringLiteral_14091._4_4_;
      (pNVar7->fields).super.m_PixelsPerUnitMultiplier = (float)(undefined4)StringLiteral_14091;
      (pNVar7->fields).super.m_CachedReferencePixelsPerUnit = (float)uVar1;
      thunk_FUN_01c20e04(&(pNVar7->fields).super.m_PixelsPerUnitMultiplier);
      pKVar3 = (__this->fields).HNNMAMJOEMB;
      if ((pKVar3 == (KMJDCOABCCG_o *)0x0) ||
         (pNVar7 = (__this->fields).icon, pNVar7 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0))
      goto LAB_035b5230;
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (pNVar7,(pKVar3->fields)._PGCEKJLODEJ_k__BackingField,(MethodInfo *)0x0);
    }
                    /* try { // try from 035b51dc to 036b51df has its CatchHandler @ 035b5258 */
    pUVar5 = (__this->fields).canvasGroup;
                    /* try { // try from 035b51e0 to 036b51e3 has its CatchHandler @ 035b5250 */
                    /* try { // try from 035b51e4 to 036b51e7 has its CatchHandler @ 035b5244 */
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 035b51e8 to 036b51eb has its CatchHandler @ 035b5240 */
      thunk_FUN_01ba7564();
    }
                    /* try { // try from 035b51ec to 036b51ef has its CatchHandler @ 035b5230 */
                    /* try { // try from 035b51f0 to 036b51f3 has its CatchHandler @ 035b4ef8 */
                    /* try { // try from 035b51f4 to 036b51f7 has its CatchHandler @ 035b5220 */
                    /* try { // try from 035b51f8 to 036b51fb has its CatchHandler @ 035b5218 */
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
                    /* try { // try from 035b51fc to 036b51ff has its CatchHandler @ 035b520c */
    if (bVar2) {
                    /* try { // try from 035b5200 to 036b5203 has its CatchHandler @ 035b5204 */
      pUVar5 = (__this->fields).canvasGroup;
                    /* catch() { ... } // from try @ 035b5200 with catch @ 035b5204
                       try { // try from 035b5204 to 036b5277 has its CatchHandler @ 035b4ef8 */
      if (pUVar5 != (UnityEngine_CanvasGroup_o *)0x0) {
                    /* catch() { ... } // from try @ 035b51a0 with catch @ 035b5208 */
                    /* catch() { ... } // from try @ 035b51fc with catch @ 035b520c */
                    /* catch() { ... } // from try @ 035b517c with catch @ 035b5210 */
                    /* catch() { ... } // from try @ 035b5154 with catch @ 035b5214 */
                    /* catch() { ... } // from try @ 035b51f8 with catch @ 035b5218 */
                    /* catch() { ... } // from try @ 035b5140 with catch @ 035b521c */
        UnityEngine_CanvasGroup__set_alpha(pUVar5,(__this->fields).minAlpha,(MethodInfo *)0x0);
        return;
      }
LAB_035b5230:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 035b51ec with catch @ 035b5230 */
      FUN_01bab8c8();
    }
  }
                    /* catch() { ... } // from try @ 035b51f4 with catch @ 035b5220 */
                    /* catch() { ... } // from try @ 035b5120 with catch @ 035b5224 */
                    /* catch() { ... } // from try @ 035b5114 with catch @ 035b5228 */
                    /* catch() { ... } // from try @ 035b50f4 with catch @ 035b522c */
  return;
}

