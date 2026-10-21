// HBOAEOEEDEN$$LLCONNGHGKD @ RVA 0x311F358

void HBOAEOEEDEN__LLCONNGHGKD(HBOAEOEEDEN_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  ACBCKKIEOCE_o *pAVar2;
  FCJBEKHDLAF_o *pFVar3;
  NHBBOEHHEKG_o *pNVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  UnityEngine_Vector3_o UVar9;
  UnityEngine_Color_o UVar10;
  UnityEngine_Color_o value;
  UnityEngine_Color_o value_00;
  
  pFVar3 = (__this->fields).super._CKOGELANOLD_k__BackingField;
  if ((pFVar3 != (FCJBEKHDLAF_o *)0x0) &&
     (pAVar2 = (__this->fields).EOKBEEIMNAF, pAVar2 != (ACBCKKIEOCE_o *)0x0)) {
    pNVar4 = (pFVar3->fields).CNHHLPPHNCO;
    (__this->fields).super._ILHGDFFOGHP_k__BackingField = (pAVar2->fields).EPBLDDIIKFF;
    if (pNVar4 != (NHBBOEHHEKG_o *)0x0) {
      fVar7 = (pAVar2->fields).EGOKMNOIJBP;
      fVar8 = (pAVar2->fields).JAAGMIKHEPA;
      pUVar1 = (__this->fields).PBFDBGBMIKF;
      fVar5 = (__this->fields).super._BEEGDJFPEHO_k__BackingField * 0.5;
      fVar6 = (pNVar4->fields).NMFKJBOAOLK * 0.5;
      (__this->fields).super._FLIJNAGNIMB_k__BackingField = (fVar7 - fVar5) + fVar6;
      (__this->fields).super._OHGCPINODPO_k__BackingField = fVar7 + fVar5 + fVar6;
      if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).PBFDBGBMIKF;
        if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).PBFDBGBMIKF;
          if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
             (__this_02 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
             __this_02 != (UnityEngine_Transform_o *)0x0)) {
            UVar9 = UnityEngine_Transform__get_localPosition(__this_02,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Transform_o *)0x0) {
              UVar9.fields.x = fVar7;
              UVar9.fields.z = 0.0;
              UnityEngine_Transform__set_localPosition(__this_01,UVar9,(MethodInfo *)0x0);
              pUVar1 = (__this->fields).PBFDBGBMIKF;
              if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
                UVar10 = UnityEngine_SpriteRenderer__get_color(pUVar1,(MethodInfo *)0x0);
                value.fields.b = UVar10.fields.b;
                pUVar1 = (__this->fields).PBFDBGBMIKF;
                if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
                  fVar8 = fVar8 / 255.0;
                  value.fields.a = fVar8;
                  value.fields.r = (float)(int)UVar10.fields._0_8_;
                  value.fields.g = (float)(int)((ulong)UVar10.fields._0_8_ >> 0x20);
                  UnityEngine_SpriteRenderer__set_color(pUVar1,value,(MethodInfo *)0x0);
                  pUVar1 = (__this->fields).LAEBGENCMPB;
                  if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    UVar10 = UnityEngine_SpriteRenderer__get_color(pUVar1,(MethodInfo *)0x0);
                    value_00.fields.b = UVar10.fields.b;
                    pUVar1 = (__this->fields).LAEBGENCMPB;
                    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
                      value_00.fields.a = fVar8;
                      value_00.fields.r = (float)(int)UVar10.fields._0_8_;
                      value_00.fields.g = (float)(int)((ulong)UVar10.fields._0_8_ >> 0x20);
                      UnityEngine_SpriteRenderer__set_color(pUVar1,value_00,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
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

