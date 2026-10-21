// Nekki.SF2.GUI.Dialogs.BaseRewardCell$$ENEJJGDDBGI @ RVA 0x35663D8

void Nekki_SF2_GUI_Dialogs_BaseRewardCell__ENEJJGDDBGI
               (Nekki_SF2_GUI_Dialogs_BaseRewardCell_o *__this,System_String_o *OOKEKJMFKPE,
               System_String_o *HCAAAAMDCNO,bool LECNADPGFOM,float JKOJPEKLBCI,MethodInfo *method)

{
  undefined1 auVar1 [12];
  bool bVar2;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  UnityEngine_Transform_o *pUVar4;
  uint uVar5;
  BCOICIIDFPD_o *pBVar6;
  UnityEngine_Quaternion_StaticFields *pUVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Quaternion_o UVar12;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04568bfa & 1) == 0) {
    FUN_01bab630(&StringLiteral_14870);
    FUN_01bab630(&StringLiteral_11017);
    DAT_04568bfa = 1;
  }
  pNVar3 = (__this->fields).SlotImage;
  if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03666628;
  pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0)
  ;
  if (LECNADPGFOM) {
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03666628;
    UnityEngine_Transform__set_localScale
              (pUVar4,(UnityEngine_Vector3_o)ZEXT812(0x3f2666663f266666),(MethodInfo *)0x0);
    pNVar3 = (__this->fields).SlotImage;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03666628;
    uVar5 = 0x42700000;
  }
  else {
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03666628;
    UnityEngine_Transform__set_localScale
              (pUVar4,(UnityEngine_Vector3_o)ZEXT812(0x4000000040000000),(MethodInfo *)0x0);
    pNVar3 = (__this->fields).SlotImage;
    if ((pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) ||
       (pUVar4 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar4 == (UnityEngine_Transform_o *)0x0)) goto LAB_03666628;
    uVar5 = 0x42a00000;
  }
  auVar1._4_8_ = 0;
  auVar1._0_4_ = uVar5;
  UnityEngine_Transform__set_localPosition
            (pUVar4,(UnityEngine_Vector3_o)(auVar1 << 0x20),(MethodInfo *)0x0);
  pBVar6 = (__this->fields).RewardData;
  if (pBVar6 == (BCOICIIDFPD_o *)0x0) goto LAB_03666628;
  bVar2 = System_String__op_Equality
                    ((pBVar6->fields)._JHGGGMJEENP_k__BackingField,StringLiteral_14870,
                     (MethodInfo *)0x0);
  if (bVar2) {
LAB_03666500:
    pNVar3 = (__this->fields).SlotImage;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03666628;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    UVar12 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Vector3_o)(ZEXT412(0x3f860a92) << 0x40),(MethodInfo *)0x0);
    fVar11 = UVar12.fields.w;
    fVar10 = UVar12.fields.z;
    fVar9 = UVar12.fields.y;
    fVar8 = UVar12.fields.x;
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03666628;
  }
  else {
    pBVar6 = (__this->fields).RewardData;
    if (pBVar6 == (BCOICIIDFPD_o *)0x0) goto LAB_03666628;
    bVar2 = System_String__op_Equality
                      ((pBVar6->fields)._JHGGGMJEENP_k__BackingField,StringLiteral_11017,
                       (MethodInfo *)0x0);
    if (bVar2) goto LAB_03666500;
    pNVar3 = (__this->fields).SlotImage;
    if (pNVar3 == (Nekki_SF2_GUI_ResolutionImage_o *)0x0) goto LAB_03666628;
    pUVar4 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0);
    if (DAT_0455fa79 == '\0') {
      FUN_01bab630(&UnityEngine_Quaternion_TypeInfo);
      DAT_0455fa79 = '\x01';
    }
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto LAB_03666628;
    pUVar7 = UnityEngine_Quaternion_TypeInfo->static_fields;
    fVar10 = (pUVar7->identityQuaternion).fields.z;
    fVar11 = (pUVar7->identityQuaternion).fields.w;
    fVar8 = (pUVar7->identityQuaternion).fields.x;
    fVar9 = (pUVar7->identityQuaternion).fields.y;
  }
  UVar12.fields.y = fVar9;
  UVar12.fields.x = fVar8;
  UVar12.fields.w = fVar11;
  UVar12.fields.z = fVar10;
  UnityEngine_Transform__set_localRotation(pUVar4,UVar12,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).SlotImage;
  if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
    *(System_String_o **)&(pNVar3->fields).super.m_PixelsPerUnitMultiplier = OOKEKJMFKPE;
    thunk_FUN_01c20e04(&(pNVar3->fields).super.m_PixelsPerUnitMultiplier,OOKEKJMFKPE);
    pNVar3 = (__this->fields).SlotImage;
    if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
      Nekki_SF2_GUI_ResolutionImage__set_SpriteName(pNVar3,HCAAAAMDCNO,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).SlotImage;
      if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        (*(pNVar3->klass->vtable)._45_SetNativeSize.methodPtr)
                  (pNVar3,(pNVar3->klass->vtable)._45_SetNativeSize.method);
        if (JKOJPEKLBCI == 0.0) {
          return;
        }
        pNVar3 = (__this->fields).SlotImage;
        if ((pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
           (pUVar4 = UnityEngine_Component__get_transform
                               ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
           pUVar4 != (UnityEngine_Transform_o *)0x0)) {
          value.fields.y = JKOJPEKLBCI;
          value.fields.x = JKOJPEKLBCI;
          value.fields.z = 0.0;
          UnityEngine_Transform__set_localScale(pUVar4,value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03666628:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

