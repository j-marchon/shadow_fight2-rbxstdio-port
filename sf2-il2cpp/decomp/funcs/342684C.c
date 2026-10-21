// Nekki.SF2.GUI.Dialogs.Raids.RaidInfoSprite$$HMPBGKCCODK @ RVA 0x342684C

void Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite__HMPBGKCCODK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_o *__this,MethodInfo *method)

{
  DG_Tweening_Sequence_o **ppDVar1;
  DG_Tweening_Core_DOSetter_Vector3__o **ppDVar2;
  DG_Tweening_Core_DOSetter_Vector3__o **ppDVar3;
  int iVar4;
  UnityEngine_Vector3_Fields UVar5;
  int32_t iVar6;
  int32_t iVar7;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_TweenCallback_o *pDVar9;
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_o *__this_03;
  System_Int32_array *pSVar10;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *pDVar11;
  MethodInfo *extraout_x1;
  int iVar12;
  DG_Tweening_Core_DOGetter_Vector3__o *pDVar13;
  DG_Tweening_Core_DOSetter_Vector3__o *pDVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  UnityEngine_Vector3_o UVar19;
  
  if ((DAT_04568127 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_CKFBDHBKOAA__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_DJJKJAOMDHK__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_FJKJNBBNBMG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_JJEECCDOIFG__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_MNNMJOJHGNO__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_HEBCBOMJJKB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    FUN_01bab630(&int___TypeInfo);
    FUN_01bab630(&Method_LIIFLGALGNK_DEICJJOIDDF<int>__);
    FUN_01bab630(&LIIFLGALGNK_TypeInfo);
    FUN_01bab630(&DG_Tweening_TweenCallback_TypeInfo);
    DAT_04568127 = 1;
    method = extraout_x1;
  }
  __this_00 = (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_TypeInfo,
                                 method);
  Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_APOBIODFIMP_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    thunk_FUN_01c20e04(&__this_00->fields,__this);
    __this_01 = (__this->fields)._icon;
    if ((__this_01 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (__this_02 = UnityEngine_UI_Graphic__get_rectTransform
                              ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0),
       __this_02 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar19 = UnityEngine_Transform__get_localPosition
                         ((UnityEngine_Transform_o *)__this_02,(MethodInfo *)0x0);
      (__this_00->fields).originPos.fields.x = UVar19.fields.x;
      (__this_00->fields).originPos.fields.y = UVar19.fields.y;
      (__this_00->fields).originPos.fields.z = UVar19.fields.z;
      iVar6 = (__this->fields).KOPPGDKAEBP;
      if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      iVar6 = LIIFLGALGNK__HLMBDJOGONJ(1,iVar6,(MethodInfo *)0x0);
      (__this_00->fields).shakesCount = iVar6;
      pDVar8 = (__this->fields).OMICAAONCIB;
      if (pDVar8 != (DG_Tweening_Sequence_o *)0x0) {
        DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pDVar8,false,(MethodInfo *)0x0);
      }
      ppDVar1 = &(__this->fields).OMICAAONCIB;
      if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      *ppDVar1 = pDVar8;
      thunk_FUN_01c20e04(ppDVar1,pDVar8);
      pDVar8 = *ppDVar1;
      pDVar9 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar8,pDVar9,(MethodInfo *)0x0);
      if (0 < (__this_00->fields).shakesCount) {
        iVar12 = 0;
        ppDVar2 = &(__this_00->fields).__9__3;
        ppDVar3 = &(__this_00->fields).__9__5;
        do {
          __this_03 = (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_o *)
                      thunk_FUN_01bda818(
                                        Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_TypeInfo
                                        );
          Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB___ctor(__this_03,(MethodInfo *)0x0)
          ;
          pSVar10 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,2);
          if (pSVar10 == (System_Int32_array *)0x0) goto LAB_03526de0;
          iVar4 = (int)pSVar10->max_length;
          if ((iVar4 == 0) || (pSVar10->m_Items[0] = 1, iVar4 == 1)) {
LAB_03526ddc:
                    /* WARNING: Subroutine does not return */
            FUN_01bab8d0();
          }
          pSVar10->m_Items[1] = -1;
          if ((LIIFLGALGNK_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          iVar6 = LIIFLGALGNK__DEICJJOIDDF<int>(pSVar10,Method_LIIFLGALGNK_DEICJJOIDDF<int>__);
          pSVar10 = (System_Int32_array *)FUN_01bab718(int___TypeInfo,2);
          if (pSVar10 == (System_Int32_array *)0x0) goto LAB_03526de0;
          iVar4 = (int)pSVar10->max_length;
          if ((iVar4 == 0) || (pSVar10->m_Items[0] = 1, iVar4 == 1)) goto LAB_03526ddc;
          pSVar10->m_Items[1] = -1;
          iVar7 = LIIFLGALGNK__DEICJJOIDDF<int>(pSVar10,Method_LIIFLGALGNK_DEICJJOIDDF<int>__);
          fVar15 = LIIFLGALGNK__GFHNCCOMPAJ(8.0,(MethodInfo *)0x0);
          fVar18 = fVar15 * (float)iVar6 + 4.0;
          fVar15 = LIIFLGALGNK__GFHNCCOMPAJ(8.0,(MethodInfo *)0x0);
          fVar15 = fVar15 * (float)iVar7 + 4.0;
          if (2 < (__this_00->fields).shakesCount) {
            if (fVar18 <= fVar15) {
              fVar15 = (float)(iVar7 << 3);
            }
            else {
              fVar18 = (float)(iVar6 << 3);
            }
          }
          if (__this_03 == (Nekki_SF2_GUI_Dialogs_Raids_RaidInfoSprite_BCMBCALCGMB_o *)0x0)
          goto LAB_03526de0;
                    /* try { // try from 03526b94 to 03626c63 has its CatchHandler @ 03526b94
                       catch() { ... } // from try @ 03526b94 with catch @ 03526b94
                       catch() { ... } // from try @ 03526c8c with catch @ 03526b94
                       catch() { ... } // from try @ 03526d18 with catch @ 03526b94
                       catch() { ... } // from try @ 03526d48 with catch @ 03526b94 */
          uVar16 = (__this_00->fields).originPos.fields.y;
          uVar17 = (__this_00->fields).originPos.fields.z;
          (__this_03->fields).shakePos.fields.x = fVar18 + (__this_00->fields).originPos.fields.x;
          (__this_03->fields).shakePos.fields.y = fVar15 + (float)uVar16;
          (__this_03->fields).shakePos.fields.z = (float)uVar17 + 0.0;
          pDVar13 = (__this_00->fields).__9__2;
          pDVar8 = *ppDVar1;
          if (pDVar13 == (DG_Tweening_Core_DOGetter_Vector3__o *)0x0) {
            pDVar13 = (DG_Tweening_Core_DOGetter_Vector3__o *)
                      thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
            DG_Tweening_Core_DOGetter<Vector3>___ctor();
            (__this_00->fields).__9__2 = pDVar13;
            thunk_FUN_01c20e04(&(__this_00->fields).__9__2,pDVar13);
          }
          pDVar14 = *ppDVar2;
          if (pDVar14 == (DG_Tweening_Core_DOSetter_Vector3__o *)0x0) {
            pDVar14 = (DG_Tweening_Core_DOSetter_Vector3__o *)
                      thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
            DG_Tweening_Core_DOSetter<Vector3>___ctor();
            (__this_00->fields).__9__3 = pDVar14;
            thunk_FUN_01c20e04(ppDVar2,pDVar14);
          }
          UVar5 = (__this_03->fields).shakePos.fields;
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* try { // try from 03526c64 to 03626c6b has its CatchHandler @ 03526cf8 */
                    /* try { // try from 03526c80 to 03626c8b has its CatchHandler @ 03526cfc */
          pDVar11 = DG_Tweening_DOTween__To
                              (pDVar13,pDVar14,(UnityEngine_Vector3_o)UVar5,0.08,(MethodInfo *)0x0);
                    /* try { // try from 03526c8c to 03626d13 has its CatchHandler @ 03526b94 */
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar8,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
          pDVar8 = *ppDVar1;
          pDVar13 = (DG_Tweening_Core_DOGetter_Vector3__o *)
                    thunk_FUN_01bda818(DG_Tweening_Core_DOGetter<Vector3>_TypeInfo);
          DG_Tweening_Core_DOGetter<Vector3>___ctor();
          pDVar14 = *ppDVar3;
          if (pDVar14 == (DG_Tweening_Core_DOSetter_Vector3__o *)0x0) {
            pDVar14 = (DG_Tweening_Core_DOSetter_Vector3__o *)
                      thunk_FUN_01bda818(DG_Tweening_Core_DOSetter<Vector3>_TypeInfo);
            DG_Tweening_Core_DOSetter<Vector3>___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526c64 with catch @ 03526cf8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03526c80 with catch @ 03526cfc
                        */
            (__this_00->fields).__9__5 = pDVar14;
            thunk_FUN_01c20e04(ppDVar3,pDVar14);
          }
                    /* try { // try from 03526d14 to 03626d17 has its CatchHandler @ 03526d38 */
          UVar5 = (__this_00->fields).originPos.fields;
                    /* try { // try from 03526d18 to 03626d3f has its CatchHandler @ 03526b94 */
          if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
                    /* catch() { ... } // from try @ 03526d14 with catch @ 03526d38 */
                    /* try { // try from 03526d40 to 03626d47 has its CatchHandler @ 03526d5c */
                    /* try { // try from 03526d48 to 03626d53 has its CatchHandler @ 03526b94 */
          pDVar11 = DG_Tweening_DOTween__To
                              (pDVar13,pDVar14,(UnityEngine_Vector3_o)UVar5,0.08,(MethodInfo *)0x0);
                    /* try { // try from 03526d54 to 03626d5b has its CatchHandler @ 03526d5c */
          DG_Tweening_TweenSettingsExtensions__Append
                    (pDVar8,(DG_Tweening_Tween_o *)pDVar11,(MethodInfo *)0x0);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03526d40 with catch @ 03526d5c
                       catch(type#2 @ 00000000) { ... } // from try @ 03526d54 with catch @ 03526d5c
                        */
                    /* try { // try from 03526d60 to 03626e93 has its CatchHandler @ 03526d60
                       catch() { ... } // from try @ 03526d60 with catch @ 03526d60
                       catch() { ... } // from try @ 03526ecc with catch @ 03526d60
                       catch() { ... } // from try @ 03526f20 with catch @ 03526d60
                       catch() { ... } // from try @ 03526f60 with catch @ 03526d60 */
          iVar12 = iVar12 + 1;
        } while (iVar12 < (__this_00->fields).shakesCount);
      }
      pDVar8 = *ppDVar1;
      pDVar9 = (DG_Tweening_TweenCallback_o *)thunk_FUN_01bda818(DG_Tweening_TweenCallback_TypeInfo)
      ;
      DG_Tweening_TweenCallback___ctor();
      DG_Tweening_TweenSettingsExtensions__AppendCallback(pDVar8,pDVar9,(MethodInfo *)0x0);
      return;
    }
  }
LAB_03526de0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

