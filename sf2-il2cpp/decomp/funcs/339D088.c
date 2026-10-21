// Nekki.SF2.GUI.Map.BattlePrizeElement$$IELLHBNEHDC @ RVA 0x339D088

void Nekki_SF2_GUI_Map_BattlePrizeElement__IELLHBNEHDC(long __this)

{
  UnityEngine_UI_Graphic_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o UVar8;
  UnityEngine_Rect_o UVar9;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_Vector3_o UVar11;
  
  __this_00 = *(UnityEngine_UI_Graphic_o **)(__this + 0x30);
  if (__this_00 != (UnityEngine_UI_Graphic_o *)0x0) {
    fVar4 = *(float *)&__this_00[1].fields.m_OnDirtyVertsCallback;
    fVar5 = *(float *)((long)&__this_00[1].fields.m_OnDirtyVertsCallback + 4);
    pUVar1 = UnityEngine_UI_Graphic__get_rectTransform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      fVar4 = fVar4 + fVar4;
      fVar5 = fVar5 + fVar5;
      if (fVar4 <= 20.0) {
        fVar4 = 20.0;
      }
      if (fVar5 <= 40.0) {
        fVar5 = 40.0;
      }
      value.fields.y = fVar5;
      value.fields.x = fVar4;
      UnityEngine_RectTransform__set_sizeDelta(pUVar1,value,(MethodInfo *)0x0);
      fVar7 = *(float *)(__this + 0x24);
      if (fVar5 <= *(float *)(__this + 0x24)) {
        fVar7 = fVar5;
      }
      if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0) &&
         (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                             (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
        UVar8 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
        if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0) &&
           (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                               (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar10 = UnityEngine_Transform__get_localScale
                             ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
          if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0) &&
             (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                                 (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),(MethodInfo *)0x0),
             pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar9 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
            if ((*(UnityEngine_UI_Graphic_o **)(__this + 0x28) != (UnityEngine_UI_Graphic_o *)0x0)
               && (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                                      (*(UnityEngine_UI_Graphic_o **)(__this + 0x28),
                                       (MethodInfo *)0x0),
                  pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
              UVar11 = UnityEngine_Transform__get_localScale
                                 ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
              if (*(UnityEngine_Component_o **)(__this + 0x28) != (UnityEngine_Component_o *)0x0) {
                pUVar2 = UnityEngine_Component__get_transform
                                   (*(UnityEngine_Component_o **)(__this + 0x28),(MethodInfo *)0x0);
                UnityEngine_TransformExtensions__SetLocalPositionX
                          (pUVar2,fVar4 * -0.5 + *(float *)(__this + 0x20) * -0.5,(MethodInfo *)0x0)
                ;
                if (*(UnityEngine_Component_o **)(__this + 0x30) != (UnityEngine_Component_o *)0x0)
                {
                  fVar6 = UVar8.fields.m_Width * UVar10.fields.x;
                  pUVar2 = UnityEngine_Component__get_transform
                                     (*(UnityEngine_Component_o **)(__this + 0x30),(MethodInfo *)0x0
                                     );
                  UnityEngine_TransformExtensions__SetLocalPositionX
                            (pUVar2,fVar6 * 0.5 + *(float *)(__this + 0x20) * 0.5,(MethodInfo *)0x0)
                  ;
                  plVar3 = *(long **)(__this + 0x48);
                  fVar5 = UVar9.fields.m_Height * UVar11.fields.y;
                  if (fVar5 <= fVar7) {
                    fVar5 = fVar7;
                  }
                  if (plVar3 != (long *)0x0) {
                    fVar4 = fVar4 + fVar6 + *(float *)(__this + 0x20);
                    (**(code **)(*plVar3 + 0x338))(fVar4,plVar3,*(undefined8 *)(*plVar3 + 0x340));
                    plVar3 = *(long **)(__this + 0x48);
                    if (plVar3 != (long *)0x0) {
                      (**(code **)(*plVar3 + 0x378))(fVar4,plVar3,*(undefined8 *)(*plVar3 + 0x380));
                      plVar3 = *(long **)(__this + 0x48);
                      if (plVar3 != (long *)0x0) {
                        (**(code **)(*plVar3 + 0x358))
                                  (fVar5,plVar3,*(undefined8 *)(*plVar3 + 0x360));
                        plVar3 = *(long **)(__this + 0x48);
                        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0349d040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (**(code **)(*plVar3 + 0x398))
                                    (fVar5,plVar3,*(undefined8 *)(*plVar3 + 0x3a0));
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

