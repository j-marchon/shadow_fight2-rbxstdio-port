// Nekki.SF2.GUI.Fight.PlayerLifeBar$$JCCAPMJPHOM @ RVA 0x351FB5C

void Nekki_SF2_GUI_Fight_PlayerLifeBar__JCCAPMJPHOM
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
  
                    /* catch() { ... } // from try @ 0361f9d0 with catch @ 0361fb60
                       catch() { ... } // from try @ 0361fa38 with catch @ 0361fb60
                       catch() { ... } // from try @ 0361fae4 with catch @ 0361fb60
                       catch() { ... } // from try @ 0361fb58 with catch @ 0361fb60 */
                    /* try { // try from 0361fb64 to 0371fc6b has its CatchHandler @ 0361fb64
                       catch() { ... } // from try @ 0361fb64 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fd1c with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fd60 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fd70 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fdc0 with catch @ 0361fb64
                       catch() { ... } // from try @ 0361fdf0 with catch @ 0361fb64 */
  CJNHFNHJHPE = Nekki_SF2_GUI_Fight_PlayerLifeBar__CJBJILOKLDI(__this,PCAIKIGGBMJ,method);
  iVar1 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber
                    (__this,(__this->fields).OEDKOODFCLP,method_00);
  iVar2 = Nekki_SF2_GUI_Fight_PlayerLifeBar__DefineLevelNumber(__this,CJNHFNHJHPE,method_01);
  pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -1,in_x2);
  if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) &&
     (pUVar4 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
     pUVar4 != (UnityEngine_GameObject_o *)0x0)) {
    pMVar5 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    if (1 < iVar1) {
      pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar1 * 2 + -3,pMVar5);
      if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) ||
         (pUVar4 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0361fd04;
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    }
    pNVar3 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -1,pMVar5);
    if (iVar2 == iVar1) {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361fd04;
    }
    else {
      if (pNVar3 == (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) goto LAB_0361fd04;
      (*(pNVar3->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                 (__this->fields)._nextLevelColor.fields.g,(__this->fields)._nextLevelColor.fields.b
                 ,(__this->fields)._nextLevelColor.fields.a,pNVar3,
                 (pNVar3->klass->vtable)._23_set_color.method);
      endValue.fields.b = 1.0;
      endValue.fields.a = 1.0;
      endValue.fields.r = 1.0;
      endValue.fields.g = 1.0;
      DG_Tweening_DOTweenModuleUI__DOColor
                ((UnityEngine_UI_Image_o *)pNVar3,endValue,1.0,(MethodInfo *)0x0);
    }
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    /* try { // try from 0361fc6c to 0371fc73 has its CatchHandler @ 0361fda4 */
      pMVar5 = (MethodInfo *)0x0;
      UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
      if (iVar2 < 2) {
LAB_0361fcc8:
        fVar6 = (__this->fields).AIGDHMHBAFN;
                    /* try { // try from 0361fcd4 to 0371fce7 has its CatchHandler @ 0361fd70 */
                    /* try { // try from 0361fce8 to 0371fcef has its CatchHandler @ 0361fd88 */
        UnityEngine_UI_Image__set_fillAmount
                  ((UnityEngine_UI_Image_o *)pNVar3,
                   (CJNHFNHJHPE - fVar6 * (float)(iVar2 + -1)) / fVar6,(MethodInfo *)0x0);
        (__this->fields).OEDKOODFCLP = CJNHFNHJHPE;
                    /* try { // try from 0361fcf4 to 0371fd03 has its CatchHandler @ 0361fd90 */
        return;
      }
                    /* try { // try from 0361fc80 to 0371fc8b has its CatchHandler @ 0361fd94 */
      __this_00 = Nekki_SF2_GUI_Fight_PlayerLifeBar__PHLFFKHKCMD(__this,iVar2 * 2 + -3,pMVar5);
      if (__this_00 != (Nekki_SF2_GUI_ResolutionImageSkew_o *)0x0) {
                    /* try { // try from 0361fc90 to 0371fc9b has its CatchHandler @ 0361fd98 */
                    /* try { // try from 0361fca8 to 0371fcb3 has its CatchHandler @ 0361fd80 */
        (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                  ((ulong)(uint)(__this->fields)._nextLevelColor.fields.r,
                   (__this->fields)._nextLevelColor.fields.g,
                   (__this->fields)._nextLevelColor.fields.b,
                   (__this->fields)._nextLevelColor.fields.a,__this_00,
                   (__this_00->klass->vtable)._23_set_color.method);
        pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    /* try { // try from 0361fcb8 to 0371fcc3 has its CatchHandler @ 0361fd78 */
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
          goto LAB_0361fcc8;
        }
      }
    }
  }
LAB_0361fd04:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

