// Nekki.SF2.GUI.Fight.PlayerLifeBar$$ONHOMNIFFEN @ RVA 0x351F804

void Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float PCAIKIGGBMJ,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImageSkew_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  Nekki_SF2_GUI_ResolutionImageSkew_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_x2;
  MethodInfo *pMVar5;
  float CJNHFNHJHPE;
  float fVar6;
  UnityEngine_Color_o endValue;
  
  CJNHFNHJHPE = Nekki_SF2_GUI_Fight_PlayerLifeBar__CJBJILOKLDI(__this,PCAIKIGGBMJ,method);
                    /* try { // try from 0361f820 to 0371f82b has its CatchHandler @ 0361f908 */
  iVar1 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                    (__this,(__this->fields).DANCJAPPNKJ,method_00);
                    /* try { // try from 0361f83c to 0371f8a3 has its CatchHandler @ 0361fab8 */
  iVar2 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber(__this,CJNHFNHJHPE,method_01);
  pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -2,in_x2);
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar5 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    if (1 < iVar1) {
      pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -4,pMVar5);
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0361f9ac;
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    }
    pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -2,pMVar5);
    if (iVar2 == iVar1) {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361f9ac;
    }
    else {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361f9ac;
                    /* try { // try from 0361f8d4 to 0371f8d7 has its CatchHandler @ 0361fa90 */
                    /* try { // try from 0361f8e0 to 0371f8eb has its CatchHandler @ 0361fa88 */
      (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                 (__this->fields)._nextLevelColor.fields.g,(__this->fields)._nextLevelColor.fields.b
                 ,(__this->fields)._nextLevelColor.fields.a,pNVar3,
                 (pNVar3->klass->vtable)._23_set_color.method);
      endValue.fields.b = 1.0;
      endValue.fields.a = 1.0;
      endValue.fields.r = 1.0;
      endValue.fields.g = 1.0;
                    /* try { // try from 0361f8f0 to 0371f8f7 has its CatchHandler @ 0361f90c */
                    /* try { // try from 0361f8fc to 0371f8ff has its CatchHandler @ 0361f904 */
                    /* try { // try from 0361f900 to 0371f923 has its CatchHandler @ 0361f568 */
      DG_Tweening_DOTweenModuleUI__DOColor
                ((UnityEngine_UI_Image_o *)pNVar3,endValue,1.0,(MethodInfo *)0x0);
    }
                    /* catch() { ... } // from try @ 0361f8fc with catch @ 0361f904 */
                    /* catch() { ... } // from try @ 0361f820 with catch @ 0361f908 */
                    /* catch() { ... } // from try @ 0361f8f0 with catch @ 0361f90c */
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0361f7c0 with catch @ 0361f910 */
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch() { ... } // from try @ 0361f764 with catch @ 0361f914 */
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
                    /* try { // try from 0361f924 to 0371f927 has its CatchHandler @ 0361fa78 */
      if (iVar2 < 2) {
LAB_0361f970:
        fVar6 = (__this->fields).AIGDHMHBAFN;
        UnityEngine_UI_Image__set_fillAmount
                  ((UnityEngine_UI_Image_o *)pNVar3,
                   (CJNHFNHJHPE - fVar6 * (float)(iVar2 + -1)) / fVar6,(MethodInfo *)0x0);
        (__this->fields).DANCJAPPNKJ = CJNHFNHJHPE;
        return;
      }
                    /* try { // try from 0361f928 to 0371f9cf has its CatchHandler @ 0361f568 */
      __this_00 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -4,pMVar5);
      if (__this_00 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
        (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                  ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                   (__this->fields)._nextLevelColor.fields.g,
                   (__this->fields)._nextLevelColor.fields.b,
                   (__this->fields)._nextLevelColor.fields.a,__this_00,
                   (__this_00->klass->vtable)._23_set_color.method);
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          goto LAB_0361f970;
        }
      }
    }
  }
LAB_0361f9ac:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

