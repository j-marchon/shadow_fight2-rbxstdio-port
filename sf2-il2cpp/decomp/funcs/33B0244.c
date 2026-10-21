// RaidPlayerEquipmentImage$$NIAAAOEHCDD @ RVA 0x33B0244

void RaidPlayerEquipmentImage__NIAAAOEHCDD(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_01;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar3;
  System_String_o *DIHAKADKIKM;
  HOOAAGABMBL_o *pHVar4;
  SFButton_o *__this_02;
  UnityEngine_Vector3_StaticFields *pUVar5;
  UnityEngine_GameObject_o *DKIDCBPNMPD;
  UnityEngine_Vector3_array *x;
  UnityEngine_Object_o *y;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o HHPABFGHALF;
  UnityEngine_Vector3_o value;
  
  if ((DAT_04567d47 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_18784);
    DAT_04567d47 = 1;
  }
  pHVar4 = (__this->fields).POBPDIIEOMG;
  if ((pHVar4 == (HOOAAGABMBL_o *)0x0) ||
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD
                        ((pHVar4->fields)._GPEFIOMJHNN_k__BackingField,(MethodInfo *)0x0), bVar1)) {
    return;
  }
  DKIDCBPNMPD = (__this->fields)._hintPrefab;
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
    pUVar2 = UnityEngine_Transform__get_parent(pUVar2,(MethodInfo *)0x0);
    __this_02 = (__this->fields)._button;
    if ((__this_02 != (SFButton_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      HHPABFGHALF.fields.z = UVar7.fields.z + 0.0;
      HHPABFGHALF.fields.x = UVar7.fields.x + (__this->fields)._hintOffset.fields.x;
      HHPABFGHALF.fields.y = UVar7.fields.y + (__this->fields)._hintOffset.fields.y;
      __this_01 = Nekki_SF2_GUI_HintBoxAutoKilled__Build
                            (DKIDCBPNMPD,pUVar2,HHPABFGHALF,10.0,-1.0,-1.0,(MethodInfo *)0x0);
      if ((__this_01 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0) &&
         ((pNVar3 = (__this_01->fields).super._Arrow,
          pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0 &&
          (pUVar2 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
          pUVar2 != (UnityEngine_Transform_o *)0x0)))) {
        UVar7 = UnityEngine_Transform__get_position(pUVar2,(MethodInfo *)0x0);
        if (DAT_0455fffd == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fffd = '\x01';
        }
        fVar6 = (__this->fields)._arrowOffsetX;
        pUVar5 = UnityEngine_Vector3_TypeInfo->static_fields;
        value.fields.x = UVar7.fields.x + (pUVar5->rightVector).fields.x * fVar6;
        value.fields.y = UVar7.fields.y + (pUVar5->rightVector).fields.y * fVar6;
        value.fields.z = UVar7.fields.z + (pUVar5->rightVector).fields.z * fVar6;
        UnityEngine_Transform__set_position(pUVar2,value,(MethodInfo *)0x0);
        pNVar3 = (__this->fields)._image;
        if (pNVar3 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          x = (pNVar3->fields).super.super.m_Corners;
          y = (UnityEngine_Object_o *)(__this->fields)._defaultSprite;
          if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          bVar1 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x,y,(MethodInfo *)0x0);
          DIHAKADKIKM = StringLiteral_18784;
          if (!bVar1) {
            pHVar4 = (__this->fields).POBPDIIEOMG;
            if (pHVar4 == (HOOAAGABMBL_o *)0x0) goto LAB_034b0438;
            DIHAKADKIKM = (pHVar4->fields)._COIPKAKHDFP_k__BackingField;
          }
          Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias(__this_01,DIHAKADKIKM,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_034b0438:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

