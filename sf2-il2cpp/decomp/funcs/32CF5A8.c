// CJCCEHEKBPD$$CCCADFPJGJI @ RVA 0x32CF5A8

void CJCCEHEKBPD__CCCADFPJGJI(CJCCEHEKBPD_o *__this,float AIKEBBOIPIL,MethodInfo *method)

{
  CocosAnimation_o *pCVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  FCJBEKHDLAF_o *pFVar2;
  NHBBOEHHEKG_o *pNVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  
  pFVar2 = (__this->fields).super._CKOGELANOLD_k__BackingField;
  if ((pFVar2 != (FCJBEKHDLAF_o *)0x0) &&
     (pNVar3 = (pFVar2->fields).CNHHLPPHNCO, pNVar3 != (NHBBOEHHEKG_o *)0x0)) {
    fVar5 = (pNVar3->fields).NMFKJBOAOLK;
    pCVar1 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
    fVar4 = (__this->fields).super._BEEGDJFPEHO_k__BackingField * 0.5;
    (__this->fields).super._FLIJNAGNIMB_k__BackingField = AIKEBBOIPIL - fVar4;
    (__this->fields).super._OHGCPINODPO_k__BackingField = fVar4 + AIKEBBOIPIL;
    if ((pCVar1 != (CocosAnimation_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
      if (pCVar1 != (CocosAnimation_o *)0x0) {
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._CIDLMIOMOFF_k__BackingField;
        if ((pCVar1 != (CocosAnimation_o *)0x0) &&
           (__this_02 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar1,(MethodInfo *)0x0),
           __this_02 != (UnityEngine_Transform_o *)0x0)) {
          UVar6 = UnityEngine_Transform__get_localPosition(__this_02,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            UVar6.fields.x = AIKEBBOIPIL + fVar5 * -0.5;
            UVar6.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition(__this_01,UVar6,(MethodInfo *)0x0);
            (__this->fields).super._ILHGDFFOGHP_k__BackingField = true;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

