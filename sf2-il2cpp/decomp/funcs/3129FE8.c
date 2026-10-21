// CPAJCJHOLEJ$$LLCONNGHGKD @ RVA 0x3129FE8

void CPAJCJHOLEJ__LLCONNGHGKD
               (CPAJCJHOLEJ_o *__this,OLKKAIFGGAK_o *BCKBBGCOMJD,
               UnityEngine_GameObject_o *PBDIPLHDHHD,MethodInfo *method)

{
  int32_t iVar1;
  CNDPAJOLKFN_o *PHCOHKNFGLE;
  UnityEngine_Transform_o *pUVar2;
  IEFEBEDLHNN_o *pIVar3;
  IEFEBEDLHNN_o *pIVar4;
  float fVar5;
  float fVar6;
  float __x;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Vector3_o value;
  UnityEngine_Quaternion_o value_00;
  float local_28;
  float fStack_24;
  
  CPAJCJHOLEJ__JOIJDAIICIP(__this,BCKBBGCOMJD,(MethodInfo *)PBDIPLHDHHD);
  pIVar3 = (__this->fields).NLCJBEOFPKD;
  if ((pIVar3 == (IEFEBEDLHNN_o *)0x0) ||
     (pIVar4 = (__this->fields).GMAKBKOBGPK, pIVar4 == (IEFEBEDLHNN_o *)0x0)) {
    return;
  }
  PHCOHKNFGLE = CNDPAJOLKFN__MPOCFELGHDK
                          ((pIVar3->fields).CNMHHKAMGPI,(pIVar4->fields).CNMHHKAMGPI,
                           (MethodInfo *)0x0);
  UVar11 = CNDPAJOLKFN__ALBJPLAPOBO(PHCOHKNFGLE,(MethodInfo *)0x0);
  fVar8 = UVar11.fields.y;
  fVar7 = UVar11.fields.x;
  if (BCKBBGCOMJD != (OLKKAIFGGAK_o *)0x0) {
    fVar9 = (__this->fields).MFHFOFFEDJB.fields.x;
    fVar5 = (__this->fields).MFHFOFFEDJB.fields.y;
    iVar1 = OLKKAIFGGAK__MALPGCALHNK(BCKBBGCOMJD,(MethodInfo *)0x0);
    if (DAT_04560001 == '\0') {
      FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
      DAT_04560001 = '\x01';
    }
    fVar10 = (UnityEngine_Vector2_TypeInfo->static_fields->rightVector).fields.x;
    fVar6 = (UnityEngine_Vector2_TypeInfo->static_fields->rightVector).fields.y;
    if (DAT_045602fb == '\0') {
      FUN_01bab630(&System_Math_TypeInfo);
      DAT_045602fb = '\x01';
    }
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __x = atan2f(fVar8,fVar7);
    sincosf(__x,&fStack_24,&local_28);
    pIVar3 = (__this->fields).GMAKBKOBGPK;
    if (pIVar3 != (IEFEBEDLHNN_o *)0x0) {
      UVar11 = CNDPAJOLKFN__ALBJPLAPOBO((pIVar3->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      if ((PBDIPLHDHHD != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar2 = UnityEngine_GameObject__get_transform(PBDIPLHDHHD,(MethodInfo *)0x0),
         pUVar2 != (UnityEngine_Transform_o *)0x0)) {
        fVar8 = SQRT(fVar7 * fVar7 + fVar8 * fVar8);
        fVar7 = fVar5 * (float)iVar1 + fVar8 * fVar6;
        fVar9 = fVar9 + fVar8 * fVar10;
        value.fields.y = fVar9 * fStack_24 + fVar7 * local_28 + UVar11.fields.y;
        value.fields.x = (fVar9 * local_28 - fVar7 * fStack_24) + UVar11.fields.x;
        value.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(pUVar2,value,(MethodInfo *)0x0);
        fVar7 = (__this->fields).DLBNEPHLCOO;
        if (DAT_0455fb9d == '\0') {
          FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
          DAT_0455fb9d = '\x01';
        }
        value_00 = UnityEngine_Quaternion__AngleAxis
                             (__x * 57.29578 + fVar7,
                              (UnityEngine_Vector3_o)
                              (UnityEngine_Vector3_TypeInfo->static_fields->forwardVector).fields,
                              (MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(PBDIPLHDHHD,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localRotation(pUVar2,value_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

