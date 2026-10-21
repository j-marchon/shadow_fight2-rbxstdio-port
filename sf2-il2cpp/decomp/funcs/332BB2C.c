// Nekki.SF2.GUI.Fight.ComboModel$$MoveTo @ RVA 0x332BB2C

bool Nekki_SF2_GUI_Fight_ComboModel__MoveTo
               (Nekki_SF2_GUI_Fight_ComboModel_o *__this,
               Nekki_SF2_GUI_Fight_ComboItem_o *ANGBPBINHBL,UnityEngine_Vector2_o PNAINFFCAJP,
               float DLFJMHJOMII,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  float local_4c;
  float local_48;
  
  if ((ANGBPBINHBL == (Nekki_SF2_GUI_Fight_ComboItem_o *)0x0) ||
     (pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0),
     pUVar1 == (UnityEngine_Transform_o *)0x0)) goto LAB_0342bc6c;
  UVar8 = UnityEngine_Transform__get_localPosition(pUVar1,(MethodInfo *)0x0);
  local_4c = UVar8.fields.y;
  local_48 = UVar8.fields.x;
  fVar7 = -PNAINFFCAJP.fields.x;
  if ((__this->fields).NKKPNCHMEHC != 1) {
    fVar7 = PNAINFFCAJP.fields.x;
  }
  fVar6 = PNAINFFCAJP.fields.y;
  fVar3 = fVar7 - local_48;
  fVar2 = DLFJMHJOMII;
  if (fVar6 <= local_4c) {
    fVar2 = -DLFJMHJOMII;
  }
  fVar4 = fVar6 - local_4c;
  if ((fVar3 == 0.0) || (NAN(fVar3))) {
    if ((fVar4 == 0.0) || (NAN(fVar4))) goto LAB_0342bc2c;
LAB_0342bbf0:
    fVar3 = fVar6 - local_4c;
    local_4c = local_4c + fVar2;
    if (ABS(fVar3) <= ABS(DLFJMHJOMII)) {
      local_4c = fVar6;
    }
  }
  else {
    fVar5 = DLFJMHJOMII;
    if (fVar7 <= local_48) {
      fVar5 = -DLFJMHJOMII;
    }
    local_48 = local_48 + fVar5;
    if (ABS(fVar3) <= ABS(DLFJMHJOMII)) {
      local_48 = fVar7;
    }
    if ((fVar4 != 0.0) && (!NAN(fVar4))) goto LAB_0342bbf0;
  }
  pUVar1 = UnityEngine_Component__get_transform
                     ((UnityEngine_Component_o *)ANGBPBINHBL,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar8.fields.y = local_4c;
    UVar8.fields.x = local_48;
    UVar8.fields.z = 0.0;
    UnityEngine_Transform__set_localPosition(pUVar1,UVar8,(MethodInfo *)0x0);
LAB_0342bc2c:
    return (local_48 - fVar7) * (local_48 - fVar7) + (local_4c - fVar6) * (local_4c - fVar6) <
           9.9999994e-11;
  }
LAB_0342bc6c:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

