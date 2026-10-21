// KBECBDOOHCO$$BDHAMOEKNNK @ RVA 0x358F410

void KBECBDOOHCO__BDHAMOEKNNK(KBECBDOOHCO_o *__this,MethodInfo *method)

{
  undefined1 auVar1 [12];
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  CNDPAJOLKFN_o *pCVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector3_o value;
  
  pUVar2 = (__this->fields).LDAKOINICNJ;
  if ((pUVar2 != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0),
     pUVar3 != (UnityEngine_Transform_o *)0x0)) {
    UVar8 = UnityEngine_Transform__get_localPosition(pUVar3,(MethodInfo *)0x0);
    value.fields.z = UVar8.fields.z;
    pCVar4 = (__this->fields).PCGIENAHMFK;
    if ((pCVar4 != (CNDPAJOLKFN_o *)0x0) &&
       (pUVar2 = (__this->fields).LDAKOINICNJ, pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      fVar6 = (pCVar4->fields).super.OHHDBINAJCB;
      fVar7 = (pCVar4->fields).super.JOLEIODMLFL;
      pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        value.fields.x = UVar8.fields.x + fVar6;
        value.fields.y = UVar8.fields.y + fVar7;
        UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
        pCVar4 = (__this->fields).PCGIENAHMFK;
        if (pCVar4 != (CNDPAJOLKFN_o *)0x0) {
          fVar6 = (pCVar4->fields).super.JOLEIODMLFL + 0.2;
          (pCVar4->fields).super.JOLEIODMLFL = fVar6;
          pUVar2 = (__this->fields).LDAKOINICNJ;
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            fVar7 = (pCVar4->fields).super.OHHDBINAJCB;
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
              fVar5 = atanf(-fVar6 / fVar7);
              fVar6 = -90.0;
              if (0.0 <= fVar7) {
                fVar6 = 90.0;
              }
              auVar1._4_8_ = 0;
              auVar1._0_4_ = -(((fVar5 / 3.1415927) * 180.0 - fVar6) + 180.0);
              UnityEngine_Transform__set_eulerAngles
                        (pUVar3,(UnityEngine_Vector3_o)(auVar1 << 0x40),(MethodInfo *)0x0);
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

