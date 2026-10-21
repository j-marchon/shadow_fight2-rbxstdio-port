// DCEAMLCCDHH$$.ctor @ RVA 0x31BFF5C

void DCEAMLCCDHH___ctor(DCEAMLCCDHH_o *__this,System_String_o *KGLJICLJHEL,
                       System_String_o *AAIHDEKMIJG,System_Nullable_Vector3__o BLEOKMIDGIK,
                       float BIMDFEIIHBH,System_Nullable_Vector3__o JKOJPEKLBCI,
                       System_Nullable_Color__o *EFJKPCADGJH,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  UnityEngine_Vector3_StaticFields *pUVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  if ((DAT_04566c13 & 1) == 0) {
    FUN_01bab630(&MGENAMAJALB_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Vector3>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Vector3>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    DAT_04566c13 = 1;
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar2 = &(__this->fields)._COIPKAKHDFP_k__BackingField;
  *ppSVar2 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar2,KGLJICLJHEL);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(AAIHDEKMIJG,(MethodInfo *)0x0);
  if (bVar1) {
    if ((MGENAMAJALB_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    AAIHDEKMIJG = MGENAMAJALB__AAHKIHMHJDP((MethodInfo *)0x0);
  }
  (__this->fields)._MLEPHDNBABJ_k__BackingField = AAIHDEKMIJG;
  thunk_FUN_01c20e04(&__this->fields,AAIHDEKMIJG);
  if ((BLEOKMIDGIK.fields._0_8_ & 0xff) == 0) {
    if (DAT_0455fa77 == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa77 = '\x01';
    }
    pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar7._0_4_ = (pUVar3->zeroVector).fields.x;
    uVar7._4_4_ = (pUVar3->zeroVector).fields.y;
    fVar4 = (pUVar3->zeroVector).fields.z;
  }
  else {
    fVar4 = BLEOKMIDGIK.fields.value.fields.z;
    uVar7 = BLEOKMIDGIK.fields.value.fields._0_8_;
  }
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.x = (float)(int)uVar7;
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.y = (float)(int)((ulong)uVar7 >> 0x20);
  (__this->fields)._ABODODGIMOO_k__BackingField.fields.z = fVar4;
  (__this->fields)._HBNMFCBCBMD_k__BackingField = BIMDFEIIHBH;
  if ((JKOJPEKLBCI.fields._0_8_ & 0xff) == 0) {
    if (DAT_0455fa7f == '\0') {
      FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    pUVar3 = UnityEngine_Vector3_TypeInfo->static_fields;
    uVar8._0_4_ = (pUVar3->oneVector).fields.x;
    uVar8._4_4_ = (pUVar3->oneVector).fields.y;
    fVar4 = (pUVar3->oneVector).fields.z;
  }
  else {
    fVar4 = JKOJPEKLBCI.fields.value.fields.z;
    uVar8 = JKOJPEKLBCI.fields.value.fields._0_8_;
  }
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.x = (float)(int)uVar8;
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.y = (float)(int)((ulong)uVar8 >> 0x20);
  (__this->fields)._POODCHFIIJJ_k__BackingField.fields.z = fVar4;
  bVar1 = (EFJKPCADGJH->fields).hasValue != false;
  fVar4 = 1.0;
  if (bVar1) {
    fVar4 = (EFJKPCADGJH->fields).value.fields.a;
  }
  fVar6 = 1.0;
  if (bVar1) {
    fVar6 = (EFJKPCADGJH->fields).value.fields.b;
  }
  fVar9 = 1.0;
  if (bVar1) {
    fVar9 = (EFJKPCADGJH->fields).value.fields.g;
  }
  fVar5 = 1.0;
  if (bVar1) {
    fVar5 = (EFJKPCADGJH->fields).value.fields.r;
  }
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.r = fVar5;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.g = fVar9;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.b = fVar6;
  (__this->fields)._BFEKLJGLHEH_k__BackingField.fields.a = fVar4;
  return;
}

