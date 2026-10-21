// TypeDefIndex 3023
// Namespace: Nekki.SF2.GUI.Fight
// public class ComboItem : MonoBehaviour
// Fields:
//   private const string ALPIGGKDDPF = "FightUI.Critical";
//   private const string LFEJNKPKKDC = "FightUI.First_Strike";
//   private const string DKGCIGDHLIB = "FightUI.Head_Hit";
//   private const string BGOIPPJMEEO = "FightUI.Combo";
//   private const string LCKFGKBNFMN = "FightUI.hot_ground";
//   private const string NLEEGJLDJFN = "FightUI.shock";
//   private Color _labelColorHotground; // 0x20
//   private int _labelFontSizeHotground; // 0x30
//   private ResolutionImage _image; // 0x38
//   private LabelAlias _label; // 0x40
//   private Shadow _labelShadow; // 0x48
//   private HorizontalLayoutGroup _layout; // 0x50
//   private MPNLBKPJPEI <LMAILJNFCKH>k__BackingField; // 0x58
//   private ScreenModel.GIGDGHANHFM <EJGDPDAIOKF>k__BackingField; // 0x5C

// ===== public void Init(MPNLBKPJPEI ACCIHBHMFPN, ScreenModel.GIGDGHANHFM GCIBBBDPBNK)  [RVA 0x34B308C]
// Nekki.SF2.GUI.Fight.ComboItem$$Init @ RVA 0x34B308C

void Nekki_SF2_GUI_Fight_ComboItem__Init
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t ACCIHBHMFPN,int32_t GCIBBBDPBNK,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *CJNHFNHJHPE;
  Il2CppObject *pIVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *pMVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  UnityEngine_UI_Shadow_o *pUVar6;
  Nekki_SF2_GUI_LabelAlias_o *pNVar7;
  undefined4 in_register_00005044;
  undefined4 in_register_00005064;
  UnityEngine_Rect_o UVar8;
  
  if ((DAT_0456856a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456856a = 1;
  }
  (__this->fields)._LMAILJNFCKH_k__BackingField = ACCIHBHMFPN;
  (__this->fields)._EJGDPDAIOKF_k__BackingField = GCIBBBDPBNK;
  pNVar5 = (__this->fields)._image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar5 = (__this->fields)._image;
    CJNHFNHJHPE = Nekki_SF2_GUI_Fight_ComboItem__GNHDDILGIDD
                            ((Nekki_SF2_GUI_Fight_ComboItem_o *)0x1,ACCIHBHMFPN,pMVar4);
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b32b4;
    Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar5,CJNHFNHJHPE,(MethodInfo *)0x0);
    pNVar5 = (__this->fields)._image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b32b4;
    (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
              (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
    pNVar5 = (__this->fields)._image;
    if (pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_035b32b4;
    pIVar2 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pNVar5,
                        Method_UnityEngine_Component_GetComponent<LayoutElement>__);
    pNVar5 = (__this->fields)._image;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035b32b4;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    if (pIVar2 == (Il2CppObject *)0x0) goto LAB_035b32b4;
    (*pIVar2->klass->vtable[0x20].methodPtr)
              (CONCAT44(in_register_00005044,UVar8.fields.m_Width),UVar8.fields.m_YMin,
               UVar8.fields.m_Width,UVar8.fields.m_Height,pIVar2,pIVar2->klass->vtable[0x20].method)
    ;
    pNVar5 = (__this->fields)._image;
    if ((pNVar5 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar5,(MethodInfo *)0x0),
       pUVar3 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035b32b4;
    UVar8 = UnityEngine_RectTransform__get_rect(pUVar3,(MethodInfo *)0x0);
    (*pIVar2->klass->vtable[0x22].methodPtr)
              (CONCAT44(in_register_00005064,UVar8.fields.m_Height),UVar8.fields.m_YMin,
               UVar8.fields.m_Width,pIVar2,pIVar2->klass->vtable[0x22].method);
  }
  pUVar6 = (__this->fields)._labelShadow;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar6 = (__this->fields)._labelShadow;
    if ((pUVar6 == (UnityEngine_UI_Shadow_o *)0x0) ||
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
       __this_00 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035b32b4;
    UnityEngine_GameObject__SetActive(__this_00,ACCIHBHMFPN == 4,(MethodInfo *)0x0);
  }
  pNVar7 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar4 = extraout_x1;
  if (bVar1) {
    if (ACCIHBHMFPN == 4) {
      pNVar7 = (__this->fields)._label;
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b32b4;
      (*(pNVar7->klass->vtable)._23_set_color.methodPtr)
                ((ulong)(uint)(__this->fields)._labelColorHotground.fields.r,
                 (__this->fields)._labelColorHotground.fields.g,
                 (__this->fields)._labelColorHotground.fields.b,
                 (__this->fields)._labelColorHotground.fields.a,pNVar7,
                 (pNVar7->klass->vtable)._23_set_color.method);
      pNVar7 = (__this->fields)._label;
      if (pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b32b4;
      Nekki_SF2_GUI_LabelAlias__set_LabelFontSize
                (pNVar7,(__this->fields)._labelFontSizeHotground,(MethodInfo *)0x0);
    }
    pNVar7 = (__this->fields)._label;
    if ((pNVar7 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (__this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar7,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) {
LAB_035b32b4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if (GCIBBBDPBNK == 0) {
      UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_01;
    }
    else {
      UnityEngine_Transform__SetAsFirstSibling(__this_01,(MethodInfo *)0x0);
      pMVar4 = extraout_x1_00;
    }
  }
  Nekki_SF2_GUI_Fight_ComboItem__UpdateSize(__this,pMVar4);
  return;
}


// ===== public void UpdateCount(int DFIBGGDJPLM)  [RVA 0x34B34FC]
// Nekki.SF2.GUI.Fight.ComboItem$$UpdateCount @ RVA 0x34B34FC

void Nekki_SF2_GUI_Fight_ComboItem__UpdateCount
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t DFIBGGDJPLM,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  int32_t local_14;
  
  pNVar2 = (__this->fields)._label;
  local_14 = DFIBGGDJPLM;
  pSVar1 = System_Int32__ToString((int32_t)&local_14,(MethodInfo *)0x0);
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
              (pNVar2,pSVar1,(pNVar2->klass->vtable)._75_set_text.method);
    pNVar2 = (__this->fields)._label;
    if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      Nekki_SF2_GUI_Fight_ComboItem__UpdateSize(__this,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34B3570]
// Nekki.SF2.GUI.Fight.ComboItem$$.ctor @ RVA 0x34B3570

void Nekki_SF2_GUI_Fight_ComboItem___ctor
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  (__this->fields)._labelFontSizeHotground = 0x78;
  (__this->fields)._labelColorHotground.fields.b = 0.5137255;
  (__this->fields)._labelColorHotground.fields.a = 1.0;
  (__this->fields)._labelColorHotground.fields.r = 0.99607843;
  (__this->fields)._labelColorHotground.fields.g = 0.99215686;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public RectTransform get_rectTransform()  [RVA 0x34B358C]
// Nekki.SF2.GUI.Fight.ComboItem$$get_rectTransform @ RVA 0x34B358C

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform
          (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  
  if ((DAT_0456856b & 1) == 0) {
    FUN_01bab630(&UnityEngine_RectTransform_TypeInfo);
    DAT_0456856b = 1;
  }
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar1 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar1->klass != UnityEngine_RectTransform_TypeInfo)) {
    pUVar1 = (UnityEngine_RectTransform_o *)0x0;
  }
  return pUVar1;
}


// ===== private void CMNBNNJBGIC(MPNLBKPJPEI CJNHFNHJHPE)  [RVA 0x34B35EC]
// Nekki.SF2.GUI.Fight.ComboItem$$CMNBNNJBGIC @ RVA 0x34B35EC

void Nekki_SF2_GUI_Fight_ComboItem__CMNBNNJBGIC
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._LMAILJNFCKH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private void GLONMKPOFGJ(ScreenModel.GIGDGHANHFM CJNHFNHJHPE)  [RVA 0x34B35F4]
// Nekki.SF2.GUI.Fight.ComboItem$$GLONMKPOFGJ @ RVA 0x34B35F4

void Nekki_SF2_GUI_Fight_ComboItem__GLONMKPOFGJ
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._EJGDPDAIOKF_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== private string GNHDDILGIDD(MPNLBKPJPEI ACCIHBHMFPN)  [RVA 0x34B32B8]
// Nekki.SF2.GUI.Fight.ComboItem$$GNHDDILGIDD @ RVA 0x34B32B8

System_String_o *
Nekki_SF2_GUI_Fight_ComboItem__GNHDDILGIDD
          (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_0456856c & 1) == 0) {
    FUN_01bab630(&StringLiteral_6363/*"FightUI.Head_Hit"*/);
    FUN_01bab630(&StringLiteral_6375/*"FightUI.shock"*/);
    FUN_01bab630(&StringLiteral_6361/*"FightUI.Critical"*/);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_6371/*"FightUI.hot_ground"*/);
    FUN_01bab630(&StringLiteral_6362/*"FightUI.First_Strike"*/);
    FUN_01bab630(&StringLiteral_6360/*"FightUI.Combo"*/);
    DAT_0456856c = 1;
  }
  if ((uint)ACCIHBHMFPN < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_6362/*"FightUI.First_Strike"*/_03fc6888)[ACCIHBHMFPN];
  }
  else {
    puVar1 = &StringLiteral_1/*""*/;
  }
  return (System_String_o *)*puVar1;
}


// ===== public ScreenModel.GIGDGHANHFM get_ModelType()  [RVA 0x34B35FC]
// Nekki.SF2.GUI.Fight.ComboItem$$get_ModelType @ RVA 0x34B35FC

int32_t Nekki_SF2_GUI_Fight_ComboItem__get_ModelType
                  (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._EJGDPDAIOKF_k__BackingField;
}


// ===== public void UpdateSize()  [RVA 0x34B335C]
// Nekki.SF2.GUI.Fight.ComboItem$$UpdateSize @ RVA 0x34B335C

void Nekki_SF2_GUI_Fight_ComboItem__UpdateSize
               (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  System_String_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  UnityEngine_UI_HorizontalLayoutGroup_o *pUVar5;
  float fVar6;
  undefined4 extraout_var;
  undefined8 in_d1;
  undefined4 uVar7;
  float fVar8;
  UnityEngine_Vector2_o value;
  UnityEngine_Rect_o UVar9;
  
  uVar7 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_0456856d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456856d = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._image;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar4 = (__this->fields)._label;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar5 = (__this->fields)._layout;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (bVar1) {
        pNVar3 = (__this->fields)._image;
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                               ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
           pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
          UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
          fVar8 = UVar9.fields.m_Width;
          pNVar3 = (__this->fields)._image;
          if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
             (pUVar2 = UnityEngine_UI_Graphic__get_rectTransform
                                 ((UnityEngine_UI_Graphic_o *)pNVar3,(MethodInfo *)0x0),
             pUVar2 != (UnityEngine_RectTransform_o *)0x0)) {
            UVar9 = UnityEngine_RectTransform__get_rect(pUVar2,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._label;
            if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
              __this_00 = (System_String_o *)
                          (*(pNVar4->klass->vtable)._74_get_text.methodPtr)
                                    (CONCAT44(extraout_var,UVar9.fields.m_XMin),
                                     CONCAT44(uVar7,UVar9.fields.m_YMin),UVar9.fields.m_Width,pNVar4
                                     ,(pNVar4->klass->vtable)._74_get_text.method);
              if (__this_00 != (System_String_o *)0x0) {
                bVar1 = System_String__Equals
                                  (__this_00,string_TypeInfo->static_fields->Empty,(MethodInfo *)0x0
                                  );
                method_00 = extraout_x1_00;
                if (!bVar1) {
                  pNVar4 = (__this->fields)._label;
                  if (pNVar4 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_035b34f8;
                  fVar6 = (float)(*(pNVar4->klass->vtable)._79_get_preferredWidth.methodPtr)
                                           (pNVar4,(pNVar4->klass->vtable)._79_get_preferredWidth.
                                                   method);
                  pUVar5 = (__this->fields)._layout;
                  if (pUVar5 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto LAB_035b34f8;
                  fVar8 = fVar8 + fVar6 + *(float *)&(pUVar5->fields).super.m_ChildScaleWidth;
                  method_00 = extraout_x1_01;
                }
                pUVar2 = Nekki_SF2_GUI_Fight_ComboItem__get_rectTransform(__this,method_00);
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  value.fields.y = UVar9.fields.m_Height;
                  value.fields.x = fVar8;
                  UnityEngine_RectTransform__set_sizeDelta(pUVar2,value,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
LAB_035b34f8:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
    }
  }
  return;
}


// ===== public MPNLBKPJPEI get_ComboType()  [RVA 0x34B3604]
// Nekki.SF2.GUI.Fight.ComboItem$$get_ComboType @ RVA 0x34B3604

int32_t Nekki_SF2_GUI_Fight_ComboItem__get_ComboType
                  (Nekki_SF2_GUI_Fight_ComboItem_o *__this,MethodInfo *method)

{
  return (__this->fields)._LMAILJNFCKH_k__BackingField;
}

