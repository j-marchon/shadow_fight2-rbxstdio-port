// CocosAnimation$$Render @ RVA 0x33F7B48

void CocosAnimation__Render(CocosAnimation_o *__this,float BLENDMCELBE,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  float fVar3;
  float fVar4;
  
  if (((__this->fields)._JJCDMHFHJAB_k__BackingField != false) &&
     ((__this->fields).CAOKGHKPFAE != (BMNKDDCJACM_o *)0x0)) {
    fVar4 = (__this->fields)._PPEGDOHGLJJ_k__BackingField;
    fVar3 = (__this->fields).BJIKPLGMOMI + BLENDMCELBE;
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar3) && !NAN(fVar4)) {
      bVar1 = fVar3 < fVar4;
      bVar2 = false;
    }
    while ((__this->fields).BJIKPLGMOMI = fVar3, bVar1 == bVar2) {
      CocosAnimation__NKCPDMKJNII(__this,method);
      fVar4 = (__this->fields)._PPEGDOHGLJJ_k__BackingField;
      fVar3 = (__this->fields).BJIKPLGMOMI - fVar4;
      bVar2 = NAN(fVar3) || NAN(fVar4);
      method = extraout_x1;
      bVar1 = fVar3 < fVar4;
    }
  }
  return;
}

