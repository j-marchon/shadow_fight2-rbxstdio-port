// OPNFCOGALLI$$MINCEEOFBNG @ RVA 0x310A000

UnityEngine_Vector3_o
OPNFCOGALLI__MINCEEOFBNG
          (float AFPEODJFNID,UnityEngine_Vector3_o EKEMKOCPHPO,UnityEngine_Vector3_o KJIKOOEABPG,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o UVar3;
  float local_8;
  float fStack_4;
  
  fVar1 = EKEMKOCPHPO.fields.x - KJIKOOEABPG.fields.x;
  fVar2 = EKEMKOCPHPO.fields.y - KJIKOOEABPG.fields.y;
  sincosf(AFPEODJFNID * 0.017453292,&fStack_4,&local_8);
  UVar3.fields.y = KJIKOOEABPG.fields.y + fStack_4 * fVar1 + local_8 * fVar2;
  UVar3.fields.x = KJIKOOEABPG.fields.x + (local_8 * fVar1 - fStack_4 * fVar2);
  UVar3.fields.z = 0.0;
  return (UnityEngine_Vector3_o)UVar3.fields;
}

