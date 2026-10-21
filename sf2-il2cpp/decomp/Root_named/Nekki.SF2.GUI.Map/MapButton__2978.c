// TypeDefIndex 2978
// Namespace: Nekki.SF2.GUI.Map
// public class MapButton : Button
// Fields:
//   private ResolutionImageLE _Image; // 0x108
//   private CompositeImage _CompositeImage; // 0x110
//   private TimerLabel _Timer; // 0x118
//   private TutorialNode _TutorialNode; // 0x120
//   private RectTransform EventTimerPos; // 0x128
//   private RectTransform TimerPos; // 0x130
//   private CocosAnimation _animation; // 0x138
//   public bool UseEventTimerPos; // 0x140
//   private Indicator _indicator; // 0x148
//   private FBBNEILNOKK _Control; // 0x150
//   private HHNIGLIDHLK _ControlPriority; // 0x154
//   private RectTransform AOBAKMPHNKF; // 0x158
//   private float LKNPLNODCGF; // 0x160
//   private FKNCNNOOOIO AEPNEAIEKOL; // 0x168

// ===== public void set_MaxImageSize(float CJNHFNHJHPE)  [RVA 0x34A0B60]
// Nekki.SF2.GUI.Map.MapButton$$set_MaxImageSize @ RVA 0x34A0B60

void Nekki_SF2_GUI_Map_MapButton__set_MaxImageSize
               (Nekki_SF2_GUI_Map_MapButton_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields).LKNPLNODCGF = CJNHFNHJHPE;
  return;
}


// ===== public void set_MapButtonInfo(FKNCNNOOOIO CJNHFNHJHPE)  [RVA 0x34A0B68]
// Nekki.SF2.GUI.Map.MapButton$$set_MapButtonInfo @ RVA 0x34A0B68

void Nekki_SF2_GUI_Map_MapButton__set_MapButtonInfo
               (Nekki_SF2_GUI_Map_MapButton_o *__this,FKNCNNOOOIO_o *CJNHFNHJHPE,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if ((__this->fields).AEPNEAIEKOL != CJNHFNHJHPE) {
    (__this->fields).AEPNEAIEKOL = CJNHFNHJHPE;
    thunk_FUN_01c20e04(&(__this->fields).AEPNEAIEKOL);
    Nekki_SF2_GUI_Map_MapButton__Refresh(__this,method_00);
    return;
  }
  return;
}


// ===== public float get_MaxImageSize()  [RVA 0x34A0C2C]
// Nekki.SF2.GUI.Map.MapButton$$get_MaxImageSize @ RVA 0x34A0C2C

float Nekki_SF2_GUI_Map_MapButton__get_MaxImageSize
                (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  return (__this->fields).LKNPLNODCGF;
}


// ===== public void SetIndicatorLabelState(bool HJEBKCDDBAB)  [RVA 0x34A0C34]
// Nekki.SF2.GUI.Map.MapButton$$SetIndicatorLabelState @ RVA 0x34A0C34

void Nekki_SF2_GUI_Map_MapButton__SetIndicatorLabelState
               (Nekki_SF2_GUI_Map_MapButton_o *__this,bool HJEBKCDDBAB,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  
  __this_00 = (__this->fields)._indicator;
  if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    Nekki_SF2_GUI_Common_Indicator__SetLabelState(__this_00,HJEBKCDDBAB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FKNCNNOOOIO get_MapButtonInfo()  [RVA 0x34A0C50]
// Nekki.SF2.GUI.Map.MapButton$$get_MapButtonInfo @ RVA 0x34A0C50

FKNCNNOOOIO_o *
Nekki_SF2_GUI_Map_MapButton__get_MapButtonInfo
          (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  return (__this->fields).AEPNEAIEKOL;
}


// ===== public void RefreshIndicator()  [RVA 0x34A0C58]
// Nekki.SF2.GUI.Map.MapButton$$RefreshIndicator @ RVA 0x34A0C58

void Nekki_SF2_GUI_Map_MapButton__RefreshIndicator
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  bool CJNHFNHJHPE;
  FKNCNNOOOIO_o *pFVar1;
  System_Nullable_bool__o *pSVar2;
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  MethodInfo *in_x2;
  
  if ((DAT_04568499 & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<bool>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<bool>_get_Value__);
    DAT_04568499 = 1;
  }
  pFVar1 = (__this->fields).AEPNEAIEKOL;
  if ((pFVar1 != (FKNCNNOOOIO_o *)0x0) &&
     (pSVar2 = &(pFVar1->fields).IGOGFMFHLNK, (pSVar2->fields).hasValue != false)) {
    CJNHFNHJHPE = System_Nullable<bool>__get_Value
                            ((System_Nullable_bool__o)SUB82(pSVar2,0),
                             Method_System_Nullable<bool>_get_Value__);
    Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled(__this,CJNHFNHJHPE,in_x2);
    __this_00 = (__this->fields)._indicator;
    if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
      Nekki_SF2_GUI_Common_Indicator__SetLabelState(__this_00,false,in_x2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public HHNIGLIDHLK get_ControlPriority()  [RVA 0x34A0D18]
// Nekki.SF2.GUI.Map.MapButton$$get_ControlPriority @ RVA 0x34A0D18

int32_t Nekki_SF2_GUI_Map_MapButton__get_ControlPriority
                  (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._ControlPriority;
}


// ===== private void AONGGAOEBJM()  [RVA 0x34A0D20]
// Nekki.SF2.GUI.Map.MapButton$$AONGGAOEBJM @ RVA 0x34A0D20

void Nekki_SF2_GUI_Map_MapButton__AONGGAOEBJM
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar3;
  System_Exception_o *__this_01;
  undefined8 uVar4;
  MethodInfo *extraout_x1;
  FKNCNNOOOIO_o *pFVar5;
  System_String_o *str1;
  CocosAnimation_o *pCVar6;
  float fVar7;
  
  if ((DAT_0456849a & 1) == 0) {
    FUN_01bab630(&OCLJMFBDKOA_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_1/*""*/);
    FUN_01bab630(&StringLiteral_22171/*"you can see this animation!! MapButton RefreshAnimation need animationCode (from MapButtonController::CreateButtonFro..."*/);
    DAT_0456849a = 1;
    method = extraout_x1;
  }
  pCVar6 = (__this->fields)._animation;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pFVar5 = (__this->fields).AEPNEAIEKOL;
  if ((pFVar5 != (FKNCNNOOOIO_o *)0x0) &&
     (pCVar6 = (__this->fields)._animation, pCVar6 != (CocosAnimation_o *)0x0)) {
    iVar1 = (pFVar5->fields).BGHFADDGPAD;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_00,iVar1 == 1,(MethodInfo *)0x0);
      if (iVar1 != 1) {
        return;
      }
      if ((OCLJMFBDKOA_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      OCLJMFBDKOA__HKGFEJGHMGM(StringLiteral_22171/*"you can see this animation!! MapButton RefreshAnimation need animationCode (from MapButtonController::CreateButtonFro..."*/,StringLiteral_1/*""*/,(MethodInfo *)0x0);
      pFVar5 = (__this->fields).AEPNEAIEKOL;
      if ((pFVar5 != (FKNCNNOOOIO_o *)0x0) &&
         (pCVar6 = (__this->fields)._animation, pCVar6 != (CocosAnimation_o *)0x0)) {
        bVar2 = CocosAnimation__Init
                          (pCVar6,(pFVar5->fields).MEONABNPAPF,0,(System_String_o *)0x0,
                           (MethodInfo *)0x0);
        pFVar5 = (__this->fields).AEPNEAIEKOL;
        if (pFVar5 != (FKNCNNOOOIO_o *)0x0) {
          if (!bVar2) {
            str1 = (pFVar5->fields).MEONABNPAPF;
            pSVar3 = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_5958/*"Error: animation not found: "*/);
            pSVar3 = System_String__Concat(pSVar3,str1,(MethodInfo *)0x0);
            thunk_FUN_01bb9178(&System_Exception_TypeInfo);
            __this_01 = (System_Exception_o *)thunk_FUN_01bda818();
            System_Exception___ctor(__this_01,pSVar3,(MethodInfo *)0x0);
            uVar4 = thunk_FUN_01bb9178(&Method_Nekki_SF2_GUI_Map_MapButton_AONGGAOEBJM__);
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(__this_01,uVar4);
          }
          fVar7 = (pFVar5->fields).FMAIEIJAFPA;
          pCVar6 = (__this->fields)._animation;
          if (fVar7 <= 0.0) {
            fVar7 = 0.1;
          }
          if (pCVar6 != (CocosAnimation_o *)0x0) {
            CocosAnimation__SetFramesRange(pCVar6,0,-1,(MethodInfo *)0x0);
            pCVar6 = (__this->fields)._animation;
            if (pCVar6 != (CocosAnimation_o *)0x0) {
              (pCVar6->fields)._PPEGDOHGLJJ_k__BackingField = fVar7;
              CocosAnimation__SetFirstFrame(pCVar6,(MethodInfo *)0x0);
              pCVar6 = (__this->fields)._animation;
              if (pCVar6 != (CocosAnimation_o *)0x0) {
                (pCVar6->fields)._FEBBHCOAEMI_k__BackingField = 1;
                (pCVar6->fields)._NOAJIBNJKPE_k__BackingField = true;
                return;
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


// ===== public void set_RealWidth(float CJNHFNHJHPE)  [RVA 0x34A0F04]
// Nekki.SF2.GUI.Map.MapButton$$set_RealWidth @ RVA 0x34A0F04

void Nekki_SF2_GUI_Map_MapButton__set_RealWidth
               (Nekki_SF2_GUI_Map_MapButton_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageLE_o *__this_00;
  UnityEngine_RectTransform_o *t;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields)._Image;
  if (__this_00 != (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) {
    t = UnityEngine_UI_Graphic__get_rectTransform
                  ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    __this_01 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_00);
    if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetSizeDeltaX
                (t,CJNHFNHJHPE / UVar1.fields.x,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public float get_RealWidth()  [RVA 0x34A1000]
// Nekki.SF2.GUI.Map.MapButton$$get_RealWidth @ RVA 0x34A1000

float Nekki_SF2_GUI_Map_MapButton__get_RealWidth
                (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_ResolutionImageLE_o *__this_00;
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector3_o UVar3;
  
  __this_00 = (__this->fields)._Image;
  if ((__this_00 != (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) &&
     (pUVar1 = UnityEngine_UI_Graphic__get_rectTransform
                         ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0),
     pUVar1 != (UnityEngine_RectTransform_o *)0x0)) {
    UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar1,(MethodInfo *)0x0);
    pUVar1 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_00);
    if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_localScale
                        ((UnityEngine_Transform_o *)pUVar1,(MethodInfo *)0x0);
      return UVar2.fields.x * UVar3.fields.x;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x34A1054]
// Nekki.SF2.GUI.Map.MapButton$$.ctor @ RVA 0x34A1054

void Nekki_SF2_GUI_Map_MapButton___ctor(Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  (__this->fields)._Control = -1;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Refresh()  [RVA 0x34A0B9C]
// Nekki.SF2.GUI.Map.MapButton$$Refresh @ RVA 0x34A0B9C

void Nekki_SF2_GUI_Map_MapButton__Refresh(Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  FKNCNNOOOIO_o *pFVar2;
  Nekki_SF2_GUI_Tutorial_TutorialNode_o *pNVar3;
  System_String_o **ppSVar4;
  System_String_o *value;
  
  pNVar3 = (__this->fields)._TutorialNode;
  __this_00 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pFVar2 = (__this->fields).AEPNEAIEKOL;
  if ((pFVar2 != (FKNCNNOOOIO_o *)0x0) && (__this_00 != (UnityEngine_Object_o *)0x0)) {
    value = (pFVar2->fields).JIJLBFGKNJK;
    UnityEngine_Object__set_name(__this_00,value,(MethodInfo *)0x0);
    if (pNVar3 != (Nekki_SF2_GUI_Tutorial_TutorialNode_o *)0x0) {
      ppSVar4 = &(pNVar3->fields)._ID;
      *ppSVar4 = value;
      thunk_FUN_01c20e04(ppSVar4,value);
      pFVar2 = (__this->fields).AEPNEAIEKOL;
      if (pFVar2 != (FKNCNNOOOIO_o *)0x0) {
        iVar1 = (pFVar2->fields).ACNLHENNKAJ;
        if ((__this->fields)._Control != iVar1) {
          (__this->fields)._Control = iVar1;
        }
        Nekki_SF2_GUI_Map_MapButton__DNIJFEPCHFA(__this,method_00);
        Nekki_SF2_GUI_Map_MapButton__MPHBBKIMAFB(__this,method_01);
        Nekki_SF2_GUI_Map_MapButton__AONGGAOEBJM(__this,method_02);
        Nekki_SF2_GUI_Map_MapButton__RefreshIndicator(__this,method_03);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public RectTransform get_RectTransform()  [RVA 0x34A0F60]
// Nekki.SF2.GUI.Map.MapButton$$get_RectTransform @ RVA 0x34A0F60

UnityEngine_RectTransform_o *
Nekki_SF2_GUI_Map_MapButton__get_RectTransform
          (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o **ppUVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  UnityEngine_RectTransform_o *pUVar3;
  
  if ((DAT_0456849b & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<RectTransform>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456849b = 1;
    method = extraout_x1;
  }
  pUVar3 = (__this->fields).AOBAKMPHNKF;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  ppUVar1 = &(__this->fields).AOBAKMPHNKF;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar3 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<RectTransform>__);
    (__this->fields).AOBAKMPHNKF = pUVar3;
    thunk_FUN_01c20e04(ppUVar1,pUVar3);
  }
  return *ppUVar1;
}


// ===== public bool get_NotificatorEnabled()  [RVA 0x34A19CC]
// Nekki.SF2.GUI.Map.MapButton$$get_NotificatorEnabled @ RVA 0x34A19CC

bool Nekki_SF2_GUI_Map_MapButton__get_NotificatorEnabled
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *pNVar1;
  
  pNVar1 = (__this->fields)._indicator;
  if (pNVar1 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
    return (pNVar1->fields).ONCKKFAODHL != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void DNIJFEPCHFA()  [RVA 0x34A1078]
// Nekki.SF2.GUI.Map.MapButton$$DNIJFEPCHFA @ RVA 0x34A1078

void Nekki_SF2_GUI_Map_MapButton__DNIJFEPCHFA
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  Nekki_SF2_GUI_CompositeImage_o *pNVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  Nekki_SF2_GUI_ResolutionImageLE_o *pNVar6;
  long *plVar7;
  System_String_o *pSVar8;
  Il2CppRGCTXData *pIVar9;
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *extraout_x1_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_x1_03;
  MethodInfo *extraout_x1_04;
  MethodInfo_27FC88C *method_03;
  MethodInfo *pMVar10;
  FKNCNNOOOIO_o *pFVar11;
  System_String_o *pSVar12;
  undefined8 in_d1;
  undefined4 uVar13;
  UnityEngine_Vector2_o UVar14;
  System_Nullable_Vector2__o __this_01;
  
  uVar13 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((DAT_0456849c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&SF2Paths_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Vector2>_get_Value__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_12931/*"Textures/buttons/map/"*/);
    FUN_01bab630(&StringLiteral_16240/*"_zone7"*/);
    FUN_01bab630(&StringLiteral_4465/*"Coins"*/);
    FUN_01bab630(&StringLiteral_5700/*"EnchantChest_Sales_sale"*/);
    FUN_01bab630(&StringLiteral_16185/*"_coins_platinum"*/);
    FUN_01bab630(&StringLiteral_304/*" Path: "*/);
    FUN_01bab630(&StringLiteral_1492/*"/"*/);
    FUN_01bab630(&StringLiteral_16223/*"_sale"*/);
    FUN_01bab630(&StringLiteral_16009/*"_Sales_sale"*/);
    FUN_01bab630(&StringLiteral_5699/*"EnchantChest"*/);
    FUN_01bab630(&StringLiteral_18943/*"img_"*/);
    FUN_01bab630(&StringLiteral_20419/*"raid_starter_pack"*/);
    FUN_01bab630(&StringLiteral_8821/*"MapButton::RefreshImage: can't find corresponding; Image: "*/);
    DAT_0456849c = 1;
  }
  pFVar11 = (__this->fields).AEPNEAIEKOL;
  if (pFVar11 == (FKNCNNOOOIO_o *)0x0) {
    return;
  }
  pNVar3 = (__this->fields)._CompositeImage;
  if (pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) goto LAB_035a16f8;
  if ((pFVar11->fields).JHFAAGIPDAJ == (JOCNCPCOEAC_o *)0x0) {
    Nekki_SF2_GUI_CompositeImage__set_Data(pNVar3,(IGNEHHMICKB_o *)0x0,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._CompositeImage;
    if ((pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_GameObject_o *)0x0)) goto LAB_035a16f8;
    UnityEngine_GameObject__SetActive(pUVar4,false,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._Image;
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar6,true,(MethodInfo *)0x0);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) ||
       (pSVar12 = (pFVar11->fields).KPDPJONADPJ, pSVar12 == (System_String_o *)0x0))
    goto LAB_035a16f8;
    bVar1 = System_String__Contains(pSVar12,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
    if ((bVar1) &&
       (bVar1 = System_String__Contains(pSVar12,StringLiteral_20419/*"raid_starter_pack"*/,(MethodInfo *)0x0), bVar1)) {
      iVar2 = System_String__LastIndexOf(pSVar12,StringLiteral_1492/*"/"*/,(MethodInfo *)0x0);
      pSVar12 = System_String__Substring(pSVar12,iVar2 + 1,(MethodInfo *)0x0);
      if (pSVar12 == (System_String_o *)0x0) goto LAB_035a16f8;
    }
    bVar1 = System_String__Contains(pSVar12,StringLiteral_5699/*"EnchantChest"*/,(MethodInfo *)0x0);
    if ((((bVar1) &&
         (bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16009/*"_Sales_sale"*/,(MethodInfo *)0x0), bVar1)) &&
        (pSVar12 = StringLiteral_5700/*"EnchantChest_Sales_sale"*/, StringLiteral_5700/*"EnchantChest_Sales_sale"*/ == (System_String_o *)0x0)) ||
       (((bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16240/*"_zone7"*/,(MethodInfo *)0x0), bVar1 ||
         (bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16185/*"_coins_platinum"*/,(MethodInfo *)0x0), bVar1)) &&
        ((iVar2 = System_String__LastIndexOf(pSVar12,StringLiteral_18943/*"img_"*/,(MethodInfo *)0x0),
         StringLiteral_18943/*"img_"*/ == (System_String_o *)0x0 ||
         (pSVar12 = System_String__Remove
                              (pSVar12,iVar2,(StringLiteral_18943/*"img_"*/->fields)._stringLength,
                               (MethodInfo *)0x0), pSVar12 == (System_String_o *)0x0))))))
    goto LAB_035a16f8;
    bVar1 = System_String__Contains(pSVar12,StringLiteral_4465/*"Coins"*/,(MethodInfo *)0x0);
    if (bVar1) {
      pMVar10 = (MethodInfo *)0x0;
      bVar1 = System_String__EndsWith(pSVar12,StringLiteral_16223/*"_sale"*/,(MethodInfo *)0x0);
      if (bVar1) {
        pSVar12 = Nekki_SF2_GUI_Map_MapButton__HEPKJDDDIOC
                            ((Nekki_SF2_GUI_Map_MapButton_o *)0x1,pSVar12,pMVar10);
      }
    }
    pNVar6 = (__this->fields)._Image;
    method_03 = (MethodInfo_27FC88C *)FUN_01bab718(string___TypeInfo,4);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (method_03 == (MethodInfo_27FC88C *)0x0))
    goto LAB_035a16f8;
    if (*(int *)&method_03->name == 0) {
LAB_035a16fc:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    method_03->klass = (System_Nullable_T__c *)(pFVar11->fields).MEONABNPAPF;
    thunk_FUN_01c20e04(&method_03->klass);
    if (*(uint *)&method_03->name < 2) goto LAB_035a16fc;
    method_03->return_type = StringLiteral_12931/*"Textures/buttons/map/"*/;
    thunk_FUN_01c20e04();
    if ((SF2Paths_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar8 = SF2Paths__AAHKIHMHJDP((MethodInfo *)0x0);
    if (*(uint *)&method_03->name < 3) goto LAB_035a16fc;
    method_03->parameters = (Il2CppType **)pSVar8;
    thunk_FUN_01c20e04(&method_03->parameters,pSVar8);
    pIVar9 = (Il2CppRGCTXData *)SF2Paths__OPLAHNAJGAJ((MethodInfo *)0x0);
    if (*(uint *)&method_03->name < 4) goto LAB_035a16fc;
    method_03->rgctx_data = pIVar9;
    thunk_FUN_01c20e04();
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
    bVar1 = Nekki_SF2_GUI_ResolutionImage__TryImageWithPaths
                      ((Nekki_SF2_GUI_ResolutionImage_o *)pNVar6,pSVar12,
                       (System_Collections_Generic_IEnumerable_string__o *)method_03,
                       (MethodInfo *)0x0);
    if (bVar1) {
      pNVar6 = (__this->fields)._Image;
      if ((__this->fields).LKNPLNODCGF <= 0.0) {
        if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
        (*(pNVar6->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar6,(pNVar6->klass->vtable)._45_SetNativeSize.method);
        pMVar10 = extraout_x1_02;
      }
      else {
        if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
        (*(pNVar6->klass->vtable)._89_SetNativeSize.methodPtr)
                  (pNVar6,(pNVar6->klass->vtable)._89_SetNativeSize.method);
        pMVar10 = extraout_x1_00;
      }
    }
    else {
      pFVar11 = (__this->fields).AEPNEAIEKOL;
      if (pFVar11 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a16f8;
      method_03 = StringLiteral_304/*" Path: "*/;
      pSVar12 = System_String__Concat
                          (StringLiteral_8821/*"MapButton::RefreshImage: can't find corresponding; Image: "*/,(pFVar11->fields).KPDPJONADPJ,
                           (System_String_o *)StringLiteral_304/*" Path: "*/,(pFVar11->fields).MEONABNPAPF,
                           (MethodInfo *)0x0);
      if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar12,(MethodInfo *)0x0);
      pMVar10 = extraout_x1_01;
    }
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,pMVar10);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_anchorMin
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).FKICEICKCOG.fields,(MethodInfo *)0x0)
    ;
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_00);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_anchorMax
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).CCEKJNEFJKP.fields,(MethodInfo *)0x0)
    ;
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_01);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_pivot
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).LNBKBMNLJNG.fields,(MethodInfo *)0x0)
    ;
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if (pFVar11 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a16f8;
    bVar1 = Util__DJAEMCOEKOI((double)(pFVar11->fields).MJNNMHHINEF,1.0,1.000000013351432e-10,
                              (MethodInfo *)0x0);
    pMVar10 = method_02;
    if (!bVar1) {
      pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,method_02);
      pFVar11 = (__this->fields).AEPNEAIEKOL;
      if (pFVar11 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a16f8;
      UnityEngine_TransformExtensions__SetLocalScale
                ((UnityEngine_Transform_o *)pUVar5,(pFVar11->fields).MJNNMHHINEF,(MethodInfo *)0x0);
      pMVar10 = extraout_x1_03;
    }
    pUVar5 = Nekki_SF2_GUI_Map_MapButton__get_RectTransform(__this,pMVar10);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) || (pUVar5 == (UnityEngine_RectTransform_o *)0x0))
    goto LAB_035a16f8;
    UnityEngine_RectTransform__set_anchoredPosition
              (pUVar5,(UnityEngine_Vector2_o)(pFVar11->fields).BEKOHBPEEKP.fields,(MethodInfo *)0x0)
    ;
    pMVar10 = extraout_x1_04;
  }
  else {
    pUVar4 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_GameObject_o *)0x0) goto LAB_035a16f8;
    UnityEngine_GameObject__SetActive(pUVar4,true,(MethodInfo *)0x0);
    pFVar11 = (__this->fields).AEPNEAIEKOL;
    if ((pFVar11 == (FKNCNNOOOIO_o *)0x0) ||
       (pNVar3 = (__this->fields)._CompositeImage, pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0))
    goto LAB_035a16f8;
    Nekki_SF2_GUI_CompositeImage__set_Data
              (pNVar3,(IGNEHHMICKB_o *)(pFVar11->fields).JHFAAGIPDAJ,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._CompositeImage;
    if ((pNVar3 == (Nekki_SF2_GUI_CompositeImage_o *)0x0) ||
       (pUVar5 = Nekki_SF2_GUI_CompositeImage__get_RectTransform(pNVar3,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035a16f8;
    UVar14 = UnityEngine_RectTransform__get_sizeDelta(pUVar5,(MethodInfo *)0x0);
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035a16f8;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar5,0,UVar14.fields.x,(MethodInfo *)0x0)
    ;
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (pUVar5 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pNVar6,(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_RectTransform_o *)0x0)) goto LAB_035a16f8;
    UnityEngine_RectTransform__SetSizeWithCurrentAnchors(pUVar5,1,UVar14.fields.y,(MethodInfo *)0x0)
    ;
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (plVar7 = *(long **)&(pNVar6->fields).super.UseCacheForSingleSprites, plVar7 == (long *)0x0))
    goto LAB_035a16f8;
    (**(code **)(*plVar7 + 0x338))
              ((ulong)UVar14.fields & 0xffffffff,plVar7,*(undefined8 *)(*plVar7 + 0x340));
    pNVar6 = (__this->fields)._Image;
    if ((pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) ||
       (plVar7 = *(long **)&(pNVar6->fields).super.UseCacheForSingleSprites, plVar7 == (long *)0x0))
    goto LAB_035a16f8;
    (**(code **)(*plVar7 + 0x358))
              (CONCAT44(uVar13,UVar14.fields.y),plVar7,*(undefined8 *)(*plVar7 + 0x360));
    pNVar6 = (__this->fields)._Image;
    if (pNVar6 == (Nekki_SF2_GUI_ResolutionImageLE_o *)0x0) goto LAB_035a16f8;
    method_03 = (MethodInfo_27FC88C *)0x0;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pNVar6,false,(MethodInfo *)0x0);
    pMVar10 = extraout_x1;
  }
  pFVar11 = (__this->fields).AEPNEAIEKOL;
  if (pFVar11 != (FKNCNNOOOIO_o *)0x0) {
    if ((pFVar11->fields).OLBNFCKMBEL.fields.hasValue == false) {
      return;
    }
    __this_00 = (__this->fields)._indicator;
    if (__this_00 != (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
      pUVar5 = Nekki_SF2_GUI_Common_Indicator__get_RectTransform(__this_00,pMVar10);
      pFVar11 = (__this->fields).AEPNEAIEKOL;
      if (pFVar11 != (FKNCNNOOOIO_o *)0x0) {
        __this_01.fields.value.fields.y = (float)Method_System_Nullable<Vector2>_get_Value__;
        __this_01.fields._0_8_ = &(pFVar11->fields).OLBNFCKMBEL;
        UVar14 = System_Nullable<Vector2>__get_Value(__this_01,method_03);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UVar14.fields.y = (float)((ulong)UVar14.fields >> 0x20);
          UnityEngine_RectTransform__set_anchoredPosition(pUVar5,UVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_035a16f8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void MPHBBKIMAFB()  [RVA 0x34A1700]
// Nekki.SF2.GUI.Map.MapButton$$MPHBBKIMAFB @ RVA 0x34A1700

void Nekki_SF2_GUI_Map_MapButton__MPHBBKIMAFB
               (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  undefined3 uVar1;
  undefined4 uVar2;
  bool bVar3;
  Nekki_SF2_GUI_TimerLabel_o *pNVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  LAMJOHEKJNJ_o *__this_02;
  LPEBBHNDFCG_o *pLVar5;
  UnityEngine_GameObject_o *__this_03;
  FKNCNNOOOIO_o *pFVar6;
  int64_t *piVar7;
  Roster_o *pAVar8;
  long lVar9;
  UnityEngine_Vector3_o value;
  
  if ((DAT_0456849d & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_167/*" "*/);
    FUN_01bab630(&StringLiteral_13795/*"TimeDaysShort"*/);
    FUN_01bab630(&StringLiteral_13800/*"TimeMinuteShort"*/);
    FUN_01bab630(&StringLiteral_13796/*"TimeHourShort"*/);
    FUN_01bab630(&StringLiteral_13805/*"TimeSecondsShort"*/);
    DAT_0456849d = 1;
  }
  if ((__this->fields).AEPNEAIEKOL == (FKNCNNOOOIO_o *)0x0) {
    return;
  }
  pNVar4 = (__this->fields)._Timer;
  if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
  __this_00 = UnityEngine_Component__get_transform
                        ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
  if ((__this->fields).UseEventTimerPos == false) {
    __this_01 = (__this->fields).TimerPos;
  }
  else {
    __this_01 = (__this->fields).EventTimerPos;
  }
  if ((__this_01 == (UnityEngine_RectTransform_o *)0x0) ||
     (value = UnityEngine_Transform__get_localPosition
                        ((UnityEngine_Transform_o *)__this_01,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto LAB_035a19c8;
  UnityEngine_Transform__set_localPosition(__this_00,value,(MethodInfo *)0x0);
  pFVar6 = (__this->fields).AEPNEAIEKOL;
  if (pFVar6 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a19c8;
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((pFVar6->fields).AOOKMODPLGM,(MethodInfo *)0x0);
  if (bVar3) {
    pFVar6 = (__this->fields).AEPNEAIEKOL;
    if (pFVar6 == (FKNCNNOOOIO_o *)0x0) goto LAB_035a19c8;
    piVar7 = &(pFVar6->fields).ALLCFABAGOB;
LAB_035a1870:
    lVar9 = *piVar7;
    if (lVar9 < 1) goto LAB_035a1998;
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_DaysStringAlias(pNVar4,StringLiteral_13795/*"TimeDaysShort"*/,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_HoursStringAlias(pNVar4,StringLiteral_13796/*"TimeHourShort"*/,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_MinutesStringAlias(pNVar4,StringLiteral_13800/*"TimeMinuteShort"*/,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    Nekki_SF2_GUI_TimerLabel__set_SecondsStringAlias(pNVar4,StringLiteral_13805/*"TimeSecondsShort"*/,(MethodInfo *)0x0);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    uVar1 = StringLiteral_167/*" "*/._1_3_;
    uVar2 = StringLiteral_167/*" "*/._4_4_;
    (pNVar4->fields).UseDaysDelimiter = (bool_conflict)(undefined1)StringLiteral_167/*" "*/;
    *(undefined3 *)&(pNVar4->fields).field_0x1f1 = uVar1;
    (pNVar4->fields).SegmentsDate = uVar2;
    thunk_FUN_01c20e04(&(pNVar4->fields).UseDaysDelimiter);
    pNVar4 = (__this->fields)._Timer;
    if (pNVar4 == (Nekki_SF2_GUI_TimerLabel_o *)0x0) goto LAB_035a19c8;
    *(undefined1 *)((long)&(pNVar4->fields).super._Alias + 4) = 1;
    *(undefined4 *)&(pNVar4->fields).super.field_0x1e4 = 2;
    *(undefined2 *)((long)&(pNVar4->fields).super._Alias + 7) = 0;
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b87 == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b87 = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    Nekki_SF2_GUI_TimerLabel__set_CurrentTime
              (pNVar4,lVar9 - NLPJLHOEAOE_TypeInfo->static_fields->CBPPFGLIODM,(MethodInfo *)0x0);
    bVar3 = true;
  }
  else {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar8 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (((pAVar8 == (Roster_o *)0x0) ||
        (pFVar6 = (__this->fields).AEPNEAIEKOL, pFVar6 == (FKNCNNOOOIO_o *)0x0)) ||
       (__this_02 = (pAVar8->fields)._DDGPMHMNKNA_k__BackingField, __this_02 == (LAMJOHEKJNJ_o *)0x0
       )) goto LAB_035a19c8;
    pLVar5 = LAMJOHEKJNJ__FENHANFAIND(__this_02,(pFVar6->fields).AOOKMODPLGM,(MethodInfo *)0x0);
    if (pLVar5 != (LPEBBHNDFCG_o *)0x0) {
      piVar7 = &(pLVar5->fields)._PGKPHJLHJCO_k__BackingField;
      goto LAB_035a1870;
    }
LAB_035a1998:
    bVar3 = false;
  }
  pNVar4 = (__this->fields)._Timer;
  if ((pNVar4 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) &&
     (__this_03 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
     __this_03 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_03,bVar3,(MethodInfo *)0x0);
    return;
  }
LAB_035a19c8:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Control(FBBNEILNOKK CJNHFNHJHPE)  [RVA 0x34A1064]
// Nekki.SF2.GUI.Map.MapButton$$set_Control @ RVA 0x34A1064

void Nekki_SF2_GUI_Map_MapButton__set_Control
               (Nekki_SF2_GUI_Map_MapButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._Control != CJNHFNHJHPE) {
    (__this->fields)._Control = CJNHFNHJHPE;
  }
  return;
}


// ===== public void set_ControlPriority(HHNIGLIDHLK CJNHFNHJHPE)  [RVA 0x34A1A94]
// Nekki.SF2.GUI.Map.MapButton$$set_ControlPriority @ RVA 0x34A1A94

void Nekki_SF2_GUI_Map_MapButton__set_ControlPriority
               (Nekki_SF2_GUI_Map_MapButton_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  if ((__this->fields)._ControlPriority != CJNHFNHJHPE) {
    (__this->fields)._ControlPriority = CJNHFNHJHPE;
  }
  return;
}


// ===== public override void OnPointerClick(PointerEventData OHNNFPGGEFK)  [RVA 0x34A1AA8]
// Nekki.SF2.GUI.Map.MapButton$$OnPointerClick @ RVA 0x34A1AA8

void Nekki_SF2_GUI_Map_MapButton__OnPointerClick
               (Nekki_SF2_GUI_Map_MapButton_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  FKNCNNOOOIO_o *pFVar3;
  
  if ((DAT_0456849e & 1) == 0) {
    FUN_01bab630(&StringLiteral_17971/*"eclipse"*/);
    DAT_0456849e = 1;
  }
  UnityEngine_UI_Button__OnPointerClick
            ((UnityEngine_UI_Button_o *)__this,OHNNFPGGEFK,(MethodInfo *)0x0);
  pFVar3 = (__this->fields).AEPNEAIEKOL;
  if (((pFVar3 != (FKNCNNOOOIO_o *)0x0) &&
      (pSVar2 = (pFVar3->fields).JIJLBFGKNJK, pSVar2 != (System_String_o *)0x0)) &&
     (pSVar2 = System_String__ToLower(pSVar2,(MethodInfo *)0x0), pSVar2 != (System_String_o *)0x0))
  {
    bVar1 = System_String__Contains(pSVar2,StringLiteral_17971/*"eclipse"*/,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    EDFDANKEBGF__NEOHABBBGKE(1.0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public FBBNEILNOKK get_Control()  [RVA 0x34A1B40]
// Nekki.SF2.GUI.Map.MapButton$$get_Control @ RVA 0x34A1B40

int32_t Nekki_SF2_GUI_Map_MapButton__get_Control
                  (Nekki_SF2_GUI_Map_MapButton_o *__this,MethodInfo *method)

{
  return (__this->fields)._Control;
}


// ===== public void set_NotificatorEnabled(bool CJNHFNHJHPE)  [RVA 0x34A0CE4]
// Nekki.SF2.GUI.Map.MapButton$$set_NotificatorEnabled @ RVA 0x34A0CE4

void Nekki_SF2_GUI_Map_MapButton__set_NotificatorEnabled
               (Nekki_SF2_GUI_Map_MapButton_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  Nekki_SF2_GUI_Common_Indicator_o *__this_00;
  
  __this_00 = (__this->fields)._indicator;
  if (__this_00 == (Nekki_SF2_GUI_Common_Indicator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((__this_00->fields).ONCKKFAODHL == -(uint)CJNHFNHJHPE) {
    return;
  }
  (__this_00->fields).ONCKKFAODHL = -(uint)CJNHFNHJHPE;
  Nekki_SF2_GUI_Common_Indicator__LPNCEHPFOAF(__this_00,(MethodInfo *)(ulong)CJNHFNHJHPE);
  return;
}


// ===== private string HEPKJDDDIOC(string HCAAAAMDCNO)  [RVA 0x34A19F0]
// Nekki.SF2.GUI.Map.MapButton$$HEPKJDDDIOC @ RVA 0x34A19F0

System_String_o *
Nekki_SF2_GUI_Map_MapButton__HEPKJDDDIOC
          (Nekki_SF2_GUI_Map_MapButton_o *__this,System_String_o *HCAAAAMDCNO,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if ((DAT_0456849f & 1) == 0) {
    FUN_01bab630(&BHEDGAKGKPO_TypeInfo);
    DAT_0456849f = 1;
  }
  if ((BHEDGAKGKPO_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = PCOEHCPGBBG__JLHMNJLHNBO
                    (HCAAAAMDCNO,
                     (System_Collections_Generic_IEnumerable_string__o *)
                     BHEDGAKGKPO_TypeInfo->static_fields->GCKGJOPNKFD,(MethodInfo *)0x0);
  if (bVar1) {
    if (HCAAAAMDCNO != (System_String_o *)0x0) {
      iVar2 = System_String__LastIndexOf(HCAAAAMDCNO,0x5f,(MethodInfo *)0x0);
      pSVar3 = System_String__Remove(HCAAAAMDCNO,iVar2 + -2,2,(MethodInfo *)0x0);
      return pSVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return HCAAAAMDCNO;
}

