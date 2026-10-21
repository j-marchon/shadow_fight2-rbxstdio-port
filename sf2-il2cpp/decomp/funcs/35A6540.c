// Nekki.SF2.GUI.TextDebugger.PMOEINNJDPK$$.ctor @ RVA 0x35A6540

/* WARNING: Type propagation algorithm not settling */

void Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK___ctor
               (Nekki_SF2_GUI_TextDebugger_PMOEINNJDPK_o *__this,UnityEngine_Bounds_o *ENGIOBJKJPM,
               float BMIPOAFLAPO,UnityEngine_Color_o EFJKPCADGJH,float CJJFPABAAFB,
               MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).GNCALAHEPCG = BMIPOAFLAPO;
  (__this->fields).BANIDGFENDE.fields.r = EFJKPCADGJH.fields.r;
  (__this->fields).BANIDGFENDE.fields.g = EFJKPCADGJH.fields.g;
  (__this->fields).BANIDGFENDE.fields.b = EFJKPCADGJH.fields.b;
  (__this->fields).BANIDGFENDE.fields.a = EFJKPCADGJH.fields.a;
  fVar6 = (ENGIOBJKJPM->fields).m_Center.fields.x;
  fVar7 = (ENGIOBJKJPM->fields).m_Center.fields.y;
  fVar2 = (ENGIOBJKJPM->fields).m_Extents.fields.y;
  fVar3 = (ENGIOBJKJPM->fields).m_Extents.fields.z;
  *(undefined8 *)&(__this->fields).DMFBEEPHANB.fields.m_Center.fields.z =
       *(undefined8 *)&(ENGIOBJKJPM->fields).m_Center.fields.z;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Center.fields.x = fVar6;
  (pUVar1->fields).m_Center.fields.y = fVar7;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  uVar4 = (pUVar1->fields).m_Center.fields.x;
  uVar5 = (pUVar1->fields).m_Center.fields.y;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Extents.fields.y = fVar2;
  (pUVar1->fields).m_Extents.fields.z = fVar3;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  uVar8 = (pUVar1->fields).m_Extents.fields.x;
  uVar9 = (pUVar1->fields).m_Extents.fields.y;
  fVar7 = (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z;
  fVar6 = (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Center.fields.x = (float)uVar4 + 0.0;
  (pUVar1->fields).m_Center.fields.y = (float)uVar5 + 0.0;
  (__this->fields).DMFBEEPHANB.fields.m_Center.fields.z = fVar7 + CJJFPABAAFB;
  pUVar1 = &(__this->fields).DMFBEEPHANB;
  (pUVar1->fields).m_Extents.fields.x = ((float)uVar8 + (float)uVar8) * 0.5;
  (pUVar1->fields).m_Extents.fields.y = ((float)uVar9 + (float)uVar9) * 0.5;
  (__this->fields).DMFBEEPHANB.fields.m_Extents.fields.z = (fVar6 + fVar6) * 0.5;
  return;
}

