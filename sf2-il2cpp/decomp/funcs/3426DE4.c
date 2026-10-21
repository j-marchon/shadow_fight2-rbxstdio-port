// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$OCCNCPHMCIH @ RVA 0x3426DE4

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__OCCNCPHMCIH
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *pUVar3;
  CocosAnimation_o *pCVar4;
  UnityEngine_GameObject_o *__this_01;
  float fVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  
  if ((DAT_04568117 & 1) == 0) {
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    DAT_04568117 = 1;
  }
  __this_00 = (__this->fields)._icon;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar7 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    pCVar4 = (__this->fields)._animationHitEffect;
    if (pCVar4 != (CocosAnimation_o *)0x0) {
      (pCVar4->fields)._FEBBHCOAEMI_k__BackingField = 1;
      CocosAnimation__SetFirstFrame(pCVar4,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._animationHitEffect;
      if (pCVar4 != (CocosAnimation_o *)0x0) {
        (pCVar4->fields)._NOAJIBNJKPE_k__BackingField = true;
        pUVar3 = (pCVar4->fields)._MPAMHJJKABE_k__BackingField;
        fVar6 = (__this->fields).BADCMPECIPC.fields.x;
        fVar5 = UVar7.fields.m_Width * 0.1;
        if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
                    /* try { // try from 03526e94 to 03626e9b has its CatchHandler @ 03526f04 */
        iVar2 = -0x80000000;
        if (fVar5 != INFINITY) {
          iVar2 = (int)fVar5;
        }
                    /* try { // try from 03526ea0 to 03626eaf has its CatchHandler @ 03526f00 */
        iVar1 = LIIFLGALGNK__HLMBDJOGONJ(iVar2,(MethodInfo *)0x0);
        fVar5 = (__this->fields).BADCMPECIPC.fields.y;
        iVar2 = LIIFLGALGNK__HLMBDJOGONJ(iVar2,(MethodInfo *)0x0);
                    /* try { // try from 03526ec0 to 03626ecb has its CatchHandler @ 03526efc */
                    /* try { // try from 03526ecc to 03626f1b has its CatchHandler @ 03526d60 */
        UnityEngine_TransformExtensions__SetLocalPosition
                  ((UnityEngine_Transform_o *)pUVar3,fVar6 + (float)iVar1,fVar5 + (float)iVar2,0.0,
                   (MethodInfo *)0x0);
        pCVar4 = (__this->fields)._animationHitEffect;
        if ((pCVar4 != (CocosAnimation_o *)0x0) &&
           (__this_01 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pCVar4,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_GameObject_o *)0x0)) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526ec0 with catch @ 03526efc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526ea0 with catch @ 03526f00
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526e94 with catch @ 03526f04
                        */
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

