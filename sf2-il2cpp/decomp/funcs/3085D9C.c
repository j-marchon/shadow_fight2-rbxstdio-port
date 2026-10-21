// Nekki.SF2.GUI.Fight.ActivePerkItem$$ILDINJDFELD @ RVA 0x3085D9C

void Nekki_SF2_GUI_Fight_ActivePerkItem__ILDINJDFELD
               (Nekki_SF2_GUI_Fight_ActivePerkItem_o *__this,MethodInfo *method)

{
  int iVar1;
  float fVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  byte bVar4;
  OCAJCDIOMKB_StaticFields *pOVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Vector3_o value;
  
  if ((__this->fields)._HKOKBFOCJID_k__BackingField < 1) {
    return;
  }
  if (DAT_045660f7 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo);
    DAT_045660f7 = '\x01';
    method = extraout_x1;
  }
  pOVar5 = OCAJCDIOMKB_TypeInfo->static_fields;
  fVar10 = pOVar5->_IDJGFJJAADF_k__BackingField;
  if (DAT_045660f8 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
    DAT_045660f8 = '\x01';
    pOVar5 = OCAJCDIOMKB_TypeInfo->static_fields;
    method = extraout_x1_00;
  }
  fVar11 = (pOVar5->_GCNJFEKMABG_k__BackingField).fields.x;
  fVar12 = (pOVar5->_GCNJFEKMABG_k__BackingField).fields.y;
  if (DAT_045660f9 == '\0') {
    FUN_01bab630(&OCAJCDIOMKB_TypeInfo,method);
    DAT_045660f9 = '\x01';
    pOVar5 = OCAJCDIOMKB_TypeInfo->static_fields;
  }
  fVar7 = (pOVar5->_MKEOMKHIEHM_k__BackingField).fields.x;
  fVar8 = (pOVar5->_MKEOMKHIEHM_k__BackingField).fields.y;
  bVar4 = (__this->fields)._MOEOPCDNOGP_k__BackingField;
  iVar6 = (__this->fields)._IBLEFCPJBJI_k__BackingField;
  fVar9 = fVar10;
  fVar2 = fVar8;
  if ((bool_conflict)bVar4 != false) {
    fVar9 = 1.0;
    fVar2 = fVar7;
  }
  iVar1 = -0x80000000;
  if (fVar2 != INFINITY) {
    iVar1 = (int)fVar2;
  }
  if (iVar1 < iVar6) {
    iVar6 = 0;
    bVar4 = bVar4 ^ 1;
    (__this->fields)._MOEOPCDNOGP_k__BackingField = (bool_conflict)bVar4;
    (__this->fields)._IBLEFCPJBJI_k__BackingField = 0;
  }
  if (iVar6 <= iVar1) {
    fVar9 = (float)iVar6;
    if (bVar4 == 0) {
      fVar9 = fVar10 - ((fVar10 + -1.0) / fVar8) *
                       ((1.0 - fVar12) * fVar9 + (fVar12 * fVar9 * fVar9) / fVar8);
      if (fVar9 <= 1.0) {
        (__this->fields)._HKOKBFOCJID_k__BackingField =
             (__this->fields)._HKOKBFOCJID_k__BackingField + -1;
      }
    }
    else {
      fVar9 = ((fVar10 + -1.0) / fVar7) *
              ((1.0 - fVar11) * fVar9 + (fVar11 * fVar9 * fVar9) / fVar7) + 1.0;
    }
  }
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
    UnityEngine_Transform__get_localScale(pUVar3,(MethodInfo *)0x0);
    pUVar3 = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      value.fields.y = fVar9;
      value.fields.x = fVar9;
      value.fields.z = 0.0;
      UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
      (__this->fields)._IBLEFCPJBJI_k__BackingField =
           (__this->fields)._IBLEFCPJBJI_k__BackingField + 1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

