// Nekki.SF2.Core.Fights.Controls.Stick$$OKLGCJMHEHI @ RVA 0x306986C

int32_t Nekki_SF2_Core_Fights_Controls_Stick__OKLGCJMHEHI
                  (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,UnityEngine_Vector2_o EKEMKOCPHPO,
                  MethodInfo *method)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = EKEMKOCPHPO.fields.y;
  fVar7 = EKEMKOCPHPO.fields.x;
  if ((__this->fields).JFCALENOAKP <= fVar7 * fVar7 + fVar4 * fVar4) {
    fVar6 = (__this->fields).ADFFHMIGKMD;
    fVar8 = (__this->fields).EJBINLNPDJN;
    fVar5 = fVar7 * fVar6 + fVar4 * fVar8;
    fVar7 = fVar4 * fVar6 - fVar7 * fVar8;
    if ((fVar5 < 0.0) || (fVar7 < 0.0)) {
      if ((0.0 <= fVar7) || (fVar5 < 0.0)) {
        if ((0.0 <= fVar5) || (0.0 <= fVar7)) {
          if (fVar7 < 0.0 || fVar5 >= 0.0) {
            uVar2 = 0xffffffff;
            fVar7 = 0.0;
            fVar4 = 0.0;
          }
          else {
            fVar4 = ABS(fVar7);
            fVar7 = ABS(fVar5);
            uVar2 = 3;
          }
        }
        else {
          fVar4 = ABS(fVar5);
          fVar7 = ABS(fVar7);
          uVar2 = 2;
        }
      }
      else {
        fVar4 = ABS(fVar7);
        fVar7 = ABS(fVar5);
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
      fVar4 = ABS(fVar5);
      fVar7 = ABS(fVar7);
    }
    if (((__this->fields).POPGDHFBMGG == 90.0) || (fVar7 <= fVar4 * (__this->fields).JMBOIACABNF)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    switch(uVar2) {
    case 0:
      iVar3 = 1;
      break;
    case 1:
      iVar3 = 3;
      break;
    case 2:
      iVar3 = 5;
      break;
    case 3:
      iVar3 = 7;
      break;
    default:
      goto switchD_03169984_default;
    }
    if (bVar1) {
      iVar3 = iVar3 + 1;
    }
    return iVar3;
  }
switchD_03169984_default:
  return 0;
}

