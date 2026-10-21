// Nekki.SF2.GUI.SFScrollRect$$DCGOIAMJDEE @ RVA 0x323DB6C

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector2_o
Nekki_SF2_GUI_SFScrollRect__DCGOIAMJDEE
          (Nekki_SF2_GUI_SFScrollRect_o *__this,UnityEngine_Vector2_o GBLKICMLIHH,MethodInfo *method
          )

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector2_o UVar9;
  
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
    DAT_0455fa75 = '\x01';
  }
  fVar1 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.x;
  fVar2 = (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields.y;
  if ((__this->fields).m_MovementType != 0) {
    if ((__this->fields).m_Horizontal != false) {
      fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.x;
      fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.x;
      fVar5 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.x;
      fVar6 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.x;
      fVar7 = GBLKICMLIHH.fields.x + (fVar3 - fVar4);
      fVar8 = fVar5 - fVar6;
      if (fVar7 <= fVar8) {
        fVar3 = GBLKICMLIHH.fields.x + fVar3 + fVar4;
        fVar5 = fVar5 + fVar6;
        if (fVar3 < fVar5) {
          fVar1 = fVar5 - fVar3;
        }
      }
      else {
        fVar1 = fVar8 - fVar7;
      }
    }
    if ((__this->fields).m_Vertical != false) {
      fVar3 = (__this->fields).GOOOAGHGBPJ.fields.m_Center.fields.y;
      fVar4 = (__this->fields).GOOOAGHGBPJ.fields.m_Extents.fields.y;
      fVar5 = (__this->fields).JOKCKGCCNNP.fields.m_Center.fields.y;
      fVar6 = (__this->fields).JOKCKGCCNNP.fields.m_Extents.fields.y;
      fVar7 = GBLKICMLIHH.fields.y + fVar3 + fVar4;
      fVar8 = fVar5 + fVar6;
      if (fVar8 <= fVar7) {
        fVar3 = GBLKICMLIHH.fields.y + (fVar3 - fVar4);
        fVar5 = fVar5 - fVar6;
        if (fVar5 < fVar3) {
          fVar2 = fVar5 - fVar3;
        }
      }
      else {
        fVar2 = fVar8 - fVar7;
      }
    }
  }
  UVar9.fields.y = fVar2;
  UVar9.fields.x = fVar1;
  return (UnityEngine_Vector2_o)UVar9.fields;
}

