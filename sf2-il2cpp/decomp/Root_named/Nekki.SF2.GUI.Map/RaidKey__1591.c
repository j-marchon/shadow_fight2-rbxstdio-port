// TypeDefIndex 1591
// Namespace: Nekki.SF2.GUI.Map
// public class RaidKey : MonoBehaviour
// Fields:
//   private HorizontalLayoutGroup _contentLayout; // 0x20
//   private ResolutionImage _image; // 0x28
//   private LabelAlias _alias; // 0x30
//   private Button _button; // 0x38
//   private GameObject _hint; // 0x40
//   private LabelAlias _hintAlias; // 0x48
//   private NPKKNCCEIND GKENNLODDNO; // 0x50
//   private int AIBKGCEBLND; // 0x58
//   private RectTransform EKOHNMNPCHK; // 0x60
//   private Action AAPEFIAMJAE; // 0x68

// ===== public Vector2 GetBoundingSize()  [RVA 0x31B3C74]
// Nekki.SF2.GUI.Map.RaidKey$$GetBoundingSize @ RVA 0x31B3C74

UnityEngine_Vector2_o
Nekki_SF2_GUI_Map_RaidKey__GetBoundingSize(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar2;
  float fVar3;
  UnityEngine_Rect_o UVar4;
  UnityEngine_Rect_o UVar5;
  UnityEngine_Vector2_o UVar6;
  
  __this_00 = (__this->fields)._image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
     (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar4 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._alias;
    if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = UnityEngine_RectTransform__get_rect(pUVar1,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._contentLayout;
      if (pUVar2 != (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
        fVar3 = UVar4.fields.m_Height;
        if (UVar4.fields.m_Height <= UVar5.fields.m_Height) {
          fVar3 = UVar5.fields.m_Height;
        }
        UVar6.fields.x =
             UVar5.fields.m_Width +
             UVar4.fields.m_Width + *(float *)&(pUVar2->fields).super.m_ChildScaleWidth;
        UVar6.fields.y = fVar3;
        return (UnityEngine_Vector2_o)UVar6.fields;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void GIENGNEGHPJ(NPKKNCCEIND BGDNOAFNJGG)  [RVA 0x31B3CEC]
// Nekki.SF2.GUI.Map.RaidKey$$GIENGNEGHPJ @ RVA 0x31B3CEC

void Nekki_SF2_GUI_Map_RaidKey__GIENGNEGHPJ
               (Nekki_SF2_GUI_Map_RaidKey_o *__this,NPKKNCCEIND_o *BGDNOAFNJGG,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *pUVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *method_00;
  BHEDGAKGKPO_StaticFields *pBVar5;
  NPKKNCCEIND_o **ppNVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  
  if ((DAT_04566b97 & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04566b97 = 1;
  }
  pUVar3 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  pUVar2 = UnityEngine_RectTransform_TypeInfo;
  if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) {
    pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    (__this->fields).EKOHNMNPCHK = (UnityEngine_RectTransform_o *)0x0;
  }
  else {
    pUVar1 = pUVar3;
    if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
      pUVar1 = (UnityEngine_RectTransform_o *)0x0;
    }
    (__this->fields).EKOHNMNPCHK = pUVar1;
    if (pUVar3->klass != pUVar2) {
      pUVar3 = (UnityEngine_RectTransform_o *)0x0;
    }
  }
  thunk_FUN_01c20e04(&(__this->fields).EKOHNMNPCHK,pUVar3);
  ppNVar6 = &(__this->fields).GKENNLODDNO;
  *ppNVar6 = BGDNOAFNJGG;
  thunk_FUN_01c20e04(ppNVar6,BGDNOAFNJGG);
  pNVar7 = (__this->fields)._alias;
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    pBVar5 = BHEDGAKGKPO_TypeInfo->static_fields;
    (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
              ((pBVar5->FHIAKPJBBCB).fields.r,(pBVar5->FHIAKPJBBCB).fields.g,
               (pBVar5->FHIAKPJBBCB).fields.b,(pBVar5->FHIAKPJBBCB).fields.a,pNVar7,
               (pNVar7->klass->vtable)._23_set_color.method);
    if ((BGDNOAFNJGG != (NPKKNCCEIND_o *)0x0) &&
       (__this_00 = (__this->fields)._image, __this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0)) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName
                (__this_00,(BGDNOAFNJGG->fields).OPBJKMDPKLG,(MethodInfo *)0x0);
      pNVar7 = (__this->fields)._alias;
      pSVar4 = System_Int32__ToString((int)BGDNOAFNJGG + 0x28,(MethodInfo *)0x0);
      if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        (*(pNVar7->klass->vtable)._75_set_text.methodPtr)
                  (pNVar7,pSVar4,(pNVar7->klass->vtable)._75_set_text.method);
        __this_01 = (__this->fields)._button;
        if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)__this_01,false,(MethodInfo *)0x0);
          __this_02 = (__this->fields)._hint;
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            method_00 = (MethodInfo *)0x0;
            UnityEngine_GameObject__SetActive(__this_02,false,(MethodInfo *)0x0);
            pNVar7 = (__this->fields)._hintAlias;
            if (pNVar7 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar7,StringLiteral_1/*""*/,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void add_OnRebuilt(Action CJNHFNHJHPE)  [RVA 0x31B3E78]
// Nekki.SF2.GUI.Map.RaidKey$$add_OnRebuilt @ RVA 0x31B3E78

void Nekki_SF2_GUI_Map_RaidKey__add_OnRebuilt
               (Nekki_SF2_GUI_Map_RaidKey_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *a;
  
  if ((DAT_04566b98 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566b98 = 1;
  }
  ppSVar4 = &(__this->fields).AAPEFIAMJAE;
  a = *ppSVar4;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,a);
    bVar1 = a == pSVar3;
    a = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void remove_OnRebuilt(Action CJNHFNHJHPE)  [RVA 0x31B3F14]
// Nekki.SF2.GUI.Map.RaidKey$$remove_OnRebuilt @ RVA 0x31B3F14

void Nekki_SF2_GUI_Map_RaidKey__remove_OnRebuilt
               (Nekki_SF2_GUI_Map_RaidKey_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Action_o *pSVar3;
  System_Action_o **ppSVar4;
  System_Action_o *source;
  
  if ((DAT_04566b99 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566b99 = 1;
  }
  ppSVar4 = &(__this->fields).AAPEFIAMJAE;
  source = *ppSVar4;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)CJNHFNHJHPE,
                              (MethodInfo *)0x0), pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar3 = (System_Action_o *)FUN_01c07368(ppSVar4,pSVar2,source);
    bVar1 = source == pSVar3;
    source = pSVar3;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}


// ===== public void .ctor()  [RVA 0x31B3FB0]
// Nekki.SF2.GUI.Map.RaidKey$$.ctor @ RVA 0x31B3FB0

void Nekki_SF2_GUI_Map_RaidKey___ctor(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void OnDestroy()  [RVA 0x31B3FB8]
// Nekki.SF2.GUI.Map.RaidKey$$OnDestroy @ RVA 0x31B3FB8

void Nekki_SF2_GUI_Map_RaidKey__OnDestroy(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  System_Action_o **ppSVar1;
  
  ppSVar1 = &(__this->fields).AAPEFIAMJAE;
  *ppSVar1 = (System_Action_o *)0x0;
  thunk_FUN_01c20e04(ppSVar1,0);
  return;
}


// ===== public static float GetApproxWidth(NPKKNCCEIND MCAGDLCJMEG)  [RVA 0x31B3FC4]
// Nekki.SF2.GUI.Map.RaidKey$$GetApproxWidth @ RVA 0x31B3FC4

float Nekki_SF2_GUI_Map_RaidKey__GetApproxWidth(NPKKNCCEIND_o *MCAGDLCJMEG,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  float fVar3;
  
  if (MCAGDLCJMEG != (NPKKNCCEIND_o *)0x0) {
    uVar1 = (MCAGDLCJMEG->fields).JAICMIMBIOA;
    if ((int)uVar1 < 1) {
      fVar3 = 0.0;
    }
    else {
      iVar2 = Util__JPFMDIGLLHB((ulong)uVar1,(MethodInfo *)0x0);
      fVar3 = (float)(iVar2 * 0x32 + 100);
    }
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x31B4004]
// Nekki.SF2.GUI.Map.RaidKey$$Update @ RVA 0x31B4004

void Nekki_SF2_GUI_Map_RaidKey__Update(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Button_o *__this_01;
  UnityEngine_RectTransform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  int iVar4;
  System_Action_o *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector2_o UVar10;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar11;
  
  if ((DAT_04566b9a & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_04566b9a = 1;
  }
  if ((((__this->fields).AIBKGCEBLND < 1) &&
      (iVar2 = UnityEngine_Input__get_touchCount((MethodInfo *)0x0), 0 < iVar2)) ||
     (bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0), bVar1)) {
    __this_00 = (__this->fields)._hint;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_032b41b0;
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    iVar4 = 0;
    method_00 = extraout_x1_00;
  }
  else {
    iVar4 = (__this->fields).AIBKGCEBLND + -1;
    method_00 = extraout_x1;
  }
  (__this->fields).AIBKGCEBLND = iVar4;
  UVar10 = Nekki_SF2_GUI_Map_RaidKey__GetBoundingSize(__this,method_00);
  __this_01 = (__this->fields)._button;
  if ((__this_01 != (UnityEngine_UI_Button_o *)0x0) &&
     (pUVar3 = (UnityEngine_RectTransform_o *)
               UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_RectTransform_o *)0x0)) {
    if (pUVar3->klass != UnityEngine_RectTransform_TypeInfo) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(pUVar3);
    }
    fVar8 = UVar10.fields.x;
    fVar9 = UVar10.fields.y + 10.0;
    UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    fVar6 = UVar11.fields.m_Width - (fVar8 + -10.0);
    fVar7 = UVar11.fields.m_Height - fVar9;
    fVar6 = fVar6 * fVar6 + fVar7 * fVar7;
    if (0.01 < fVar6) {
      UVar10.fields.y = fVar9;
      UVar10.fields.x = fVar8 + -10.0;
      UnityEngine_RectTransform__set_sizeDelta(pUVar3,UVar10,(MethodInfo *)0x0);
    }
    pUVar3 = (__this->fields).EKOHNMNPCHK;
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar11 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
      if (ABS(UVar11.fields.m_Width - fVar8) <= 0.01) {
        if (fVar6 <= 0.01) {
          return;
        }
      }
      else {
        pUVar3 = (__this->fields).EKOHNMNPCHK;
        if (pUVar3 == (UnityEngine_RectTransform_o *)0x0) goto LAB_032b41b0;
        UVar10 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        value.fields.y = (float)((ulong)UVar10.fields >> 0x20);
        value.fields.x = fVar8;
        UnityEngine_RectTransform__set_sizeDelta(pUVar3,value,(MethodInfo *)0x0);
      }
      pSVar5 = (__this->fields).AAPEFIAMJAE;
      if (pSVar5 == (System_Action_o *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x032b4194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(pSVar5->fields).super.super.invoke_impl)
                ((pSVar5->fields).super.super.method_code,(pSVar5->fields).super.super.method);
      return;
    }
  }
LAB_032b41b0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void OnClick()  [RVA 0x31B41BC]
// Nekki.SF2.GUI.Map.RaidKey$$OnClick @ RVA 0x31B41BC

void Nekki_SF2_GUI_Map_RaidKey__OnClick(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  MethodInfo *method_00;
  NPKKNCCEIND_o *pNVar1;
  
  __this_00 = (__this->fields)._hint;
  (__this->fields).AIBKGCEBLND = 1;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    pNVar1 = (__this->fields).GKENNLODDNO;
    if ((pNVar1 != (NPKKNCCEIND_o *)0x0) &&
       (__this_01 = (__this->fields)._hintAlias, __this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      Nekki_SF2_GUI_LabelAlias__set_Alias(__this_01,(pNVar1->fields).PCAIPKLGAHP,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static RaidKey CreateIconAndCountLabel(Transform ODNJEHJPBGA, NPKKNCCEIND BGDNOAFNJGG)  [RVA 0x31B4200]
// Nekki.SF2.GUI.Map.RaidKey$$CreateIconAndCountLabel @ RVA 0x31B4200

Nekki_SF2_GUI_Map_RaidKey_o *
Nekki_SF2_GUI_Map_RaidKey__CreateIconAndCountLabel
          (UnityEngine_Transform_o *ODNJEHJPBGA,NPKKNCCEIND_o *BGDNOAFNJGG,MethodInfo *method)

{
  Il2CppObject *original;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_Map_RaidKey_o *__this_00;
  MethodInfo *method_00;
  
  if ((DAT_04566b9b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<RaidKey>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_Resources_Load<GameObject>__);
    FUN_01bab630(&StringLiteral_10411/*"Prefabs/Raids/RaidKey"*/);
    DAT_04566b9b = 1;
  }
  original = UnityEngine_Resources__Load<object>
                       (StringLiteral_10411/*"Prefabs/Raids/RaidKey"*/,Method_UnityEngine_Resources_Load<GameObject>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = Method_UnityEngine_Object_Instantiate<GameObject>__;
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     (original,ODNJEHJPBGA,
                      (MethodInfo_1F1EC6C *)Method_UnityEngine_Object_Instantiate<GameObject>__);
  if ((__this != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = (Nekki_SF2_GUI_Map_RaidKey_o *)
                  UnityEngine_GameObject__GetComponent<object>
                            (__this,Method_UnityEngine_GameObject_GetComponent<RaidKey>__),
     __this_00 != (Nekki_SF2_GUI_Map_RaidKey_o *)0x0)) {
    Nekki_SF2_GUI_Map_RaidKey__GIENGNEGHPJ(__this_00,BGDNOAFNJGG,method_00);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void InitButton()  [RVA 0x31B42FC]
// Nekki.SF2.GUI.Map.RaidKey$$InitButton @ RVA 0x31B42FC

void Nekki_SF2_GUI_Map_RaidKey__InitButton(Nekki_SF2_GUI_Map_RaidKey_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *pUVar1;
  UnityEngine_UI_Button_ButtonClickedEvent_o *__this_00;
  UnityEngine_Events_UnityAction_o *call;
  UnityEngine_Events_UnityEvent_o *__this_01;
  
  if ((DAT_04566b9c & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_RaidKey_OnClick__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04566b9c = 1;
  }
  pUVar1 = (__this->fields)._button;
  if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)pUVar1,true,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._button;
    if ((pUVar1 != (UnityEngine_UI_Button_o *)0x0) &&
       (__this_00 = (pUVar1->fields).m_OnClick,
       __this_00 != (UnityEngine_UI_Button_ButtonClickedEvent_o *)0x0)) {
      UnityEngine_Events_UnityEventBase__RemoveAllListeners
                ((UnityEngine_Events_UnityEventBase_o *)__this_00,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._button;
      if (pUVar1 != (UnityEngine_UI_Button_o *)0x0) {
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(pUVar1->fields).m_OnClick;
        call = (UnityEngine_Events_UnityAction_o *)
               thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this_01,call,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

