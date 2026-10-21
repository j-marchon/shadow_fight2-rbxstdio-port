// OMANDMDCGMF$$PMNCECHABEA @ RVA 0x329A35C

void OMANDMDCGMF__PMNCECHABEA
               (UnityEngine_Bounds_o *IHEPHBIPLPM,UnityEngine_Color_o CJDCMKEBBNK,float BMIPOAFLAPO,
               UnityEngine_UI_VertexHelper_o *NLKOFFFAFHM,MethodInfo *method)

{
  UnityEngine_Vector3_o IHEPHBIPLPM_00;
  UnityEngine_Vector3_o IHEPHBIPLPM_01;
  UnityEngine_Vector3_o IHEPHBIPLPM_02;
  UnityEngine_Vector3_o IHEPHBIPLPM_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o FMPJLBLNHMC;
  UnityEngine_Vector3_o FMPJLBLNHMC_00;
  UnityEngine_Vector3_o FMPJLBLNHMC_01;
  UnityEngine_Vector3_o FMPJLBLNHMC_02;
  
  fVar7 = (IHEPHBIPLPM->fields).m_Center.fields.x;
  fVar6 = (IHEPHBIPLPM->fields).m_Center.fields.y;
  fVar5 = (IHEPHBIPLPM->fields).m_Center.fields.z;
  fVar2 = (IHEPHBIPLPM->fields).m_Extents.fields.x;
  fVar8 = (IHEPHBIPLPM->fields).m_Extents.fields.y;
  fVar1 = (IHEPHBIPLPM->fields).m_Extents.fields.z;
  fVar9 = fVar7 - fVar2;
  fVar3 = fVar6 + fVar8;
  fVar4 = fVar5 + 0.0;
  FMPJLBLNHMC_00.fields.z = fVar5 + fVar1;
  fVar5 = fVar5 - fVar1;
  fVar7 = fVar7 + fVar2;
  fVar6 = fVar6 - fVar8;
  IHEPHBIPLPM_00.fields.y = fVar3;
  IHEPHBIPLPM_00.fields.x = fVar7;
  IHEPHBIPLPM_00.fields.z = FMPJLBLNHMC_00.fields.z;
  FMPJLBLNHMC.fields.y = fVar3;
  FMPJLBLNHMC.fields.x = fVar9;
  FMPJLBLNHMC.fields.z = fVar4;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC,IHEPHBIPLPM_00,BMIPOAFLAPO,NLKOFFFAFHM,
             (MethodInfo *)NLKOFFFAFHM);
  IHEPHBIPLPM_01.fields.y = fVar6;
  IHEPHBIPLPM_01.fields.x = fVar7;
  IHEPHBIPLPM_01.fields.z = fVar4;
  FMPJLBLNHMC_00.fields.y = fVar3;
  FMPJLBLNHMC_00.fields.x = fVar7;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC_00,IHEPHBIPLPM_01,BMIPOAFLAPO,NLKOFFFAFHM,method_00);
  IHEPHBIPLPM_02.fields.y = fVar6;
  IHEPHBIPLPM_02.fields.x = fVar9;
  IHEPHBIPLPM_02.fields.z = fVar5;
  FMPJLBLNHMC_01.fields.y = fVar6;
  FMPJLBLNHMC_01.fields.x = fVar7;
  FMPJLBLNHMC_01.fields.z = fVar4;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC_01,IHEPHBIPLPM_02,BMIPOAFLAPO,NLKOFFFAFHM,method_01);
  IHEPHBIPLPM_03.fields.y = fVar3;
  IHEPHBIPLPM_03.fields.x = fVar9;
  IHEPHBIPLPM_03.fields.z = fVar4;
  FMPJLBLNHMC_02.fields.y = fVar6;
  FMPJLBLNHMC_02.fields.x = fVar9;
  FMPJLBLNHMC_02.fields.z = fVar5;
  OMANDMDCGMF__AJMLPDCFOEK
            (CJDCMKEBBNK,FMPJLBLNHMC_02,IHEPHBIPLPM_03,BMIPOAFLAPO,NLKOFFFAFHM,method_02);
  return;
}

