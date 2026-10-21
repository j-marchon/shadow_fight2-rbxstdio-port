// TypeDefIndex 3323
// Namespace: Nekki.SF2.Core.Fights.Renders.Model
// public sealed class CapsuleRender : MonoBehaviour
// Fields:
//   private Color EEKNEMEIBOJ; // 0x20
//   private static Material NIEFPLBBEHD; // 0x0
//   public Capsule Base; // 0x30
//   private LineRenderer GKFFMLDIAJK; // 0x38
//   private float GLKAIFDHFFG; // 0x40

// ===== public void .ctor()  [RVA 0x3529EA0]
// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$.ctor @ RVA 0x3529EA0

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender___ctor
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,MethodInfo *method)

{
  (__this->fields).GLKAIFDHFFG = 1.0;
  (__this->fields).EEKNEMEIBOJ.fields.b = 9.0;
  (__this->fields).EEKNEMEIBOJ.fields.a = 1.0;
  (__this->fields).EEKNEMEIBOJ.fields.r = 40.0;
  (__this->fields).EEKNEMEIBOJ.fields.g = 20.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void Render()  [RVA 0x3529EBC]
// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$Render @ RVA 0x3529EBC

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Render
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,MethodInfo *method)

{
  bool bVar1;
  Capsule_o *pJVar2;
  Vector3f_o *pCVar3;
  Vector3f_o *pCVar4;
  UnityEngine_Object_o *x;
  UnityEngine_LineRenderer_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  
  if ((DAT_04568a17 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a17 = 1;
  }
  pJVar2 = (__this->fields).Base;
  if (pJVar2 == (Capsule_o *)0x0) {
    return;
  }
  bVar1 = Vector3f__LCAEEPKOHMN
                    ((pJVar2->fields).PBMIHHHBAFI,(Vector3f_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pJVar2 = (__this->fields).Base;
  if (pJVar2 != (Capsule_o *)0x0) {
    bVar1 = Vector3f__LCAEEPKOHMN
                      ((pJVar2->fields).BFBNMPMNABM,(Vector3f_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    x = (UnityEngine_Object_o *)(__this->fields).GKFFMLDIAJK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pJVar2 = (__this->fields).Base;
    if (((pJVar2 != (Capsule_o *)0x0) &&
        (pCVar3 = (pJVar2->fields).BFBNMPMNABM, pCVar3 != (Vector3f_o *)0x0)) &&
       (pCVar4 = (pJVar2->fields).PBMIHHHBAFI, pCVar4 != (Vector3f_o *)0x0)) {
      fVar10 = (pCVar3->fields).super.OHHDBINAJCB;
      fVar11 = (pCVar3->fields).super.JOLEIODMLFL;
      fVar7 = (pCVar4->fields).super.OHHDBINAJCB;
      fVar8 = (pCVar4->fields).super.JOLEIODMLFL;
      fVar12 = (pJVar2->fields).MHJPFONADDM;
      fVar9 = (pJVar2->fields).MEKAEJEAAGJ;
      fVar6 = (__this->fields).GLKAIFDHFFG;
      fVar13 = (pJVar2->fields).ADOKPILEFJH;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (0.001 < ABS(fVar6 - fVar13)) {
        pJVar2 = (__this->fields).Base;
        if (pJVar2 == (Capsule_o *)0x0) goto LAB_0362a090;
        fVar6 = (pJVar2->fields).ADOKPILEFJH;
        pUVar5 = (__this->fields).GKFFMLDIAJK;
        (__this->fields).GLKAIFDHFFG = fVar6;
        if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_0362a090;
        UnityEngine_LineRenderer__set_endWidth(pUVar5,fVar6,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_startWidth(pUVar5,fVar6,(MethodInfo *)0x0);
      }
      pUVar5 = (__this->fields).GKFFMLDIAJK;
      if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
        fVar10 = fVar10 - fVar7;
        fVar11 = fVar11 - fVar8;
        position.fields.x = fVar7 + fVar10 * fVar12;
        position.fields.y = fVar8 + fVar11 * fVar12;
        position.fields.z = 0.0;
        UnityEngine_LineRenderer__SetPosition(pUVar5,0,position,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).GKFFMLDIAJK;
        if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
          fVar9 = 1.0 - fVar9;
          position_00.fields.x = fVar7 + fVar10 * fVar9;
          position_00.fields.y = fVar8 + fVar11 * fVar9;
          position_00.fields.z = 0.0;
          UnityEngine_LineRenderer__SetPosition(pUVar5,1,position_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0362a090:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private static Material DOHPICEPCBF()  [RVA 0x352A094]
// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$DOHPICEPCBF @ RVA 0x352A094

UnityEngine_Material_o *
Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__DOHPICEPCBF(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Shader_o *shader;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *__this;
  
  if ((DAT_04568a18 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_TypeInfo);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_12317/*"Sprites/Default"*/);
    DAT_04568a18 = 1;
  }
  x = (UnityEngine_Object_o *)
      Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_TypeInfo->static_fields->NIEFPLBBEHD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_TypeInfo->static_fields->NIEFPLBBEHD;
  }
  else {
    shader = UnityEngine_Shader__Find(StringLiteral_12317/*"Sprites/Default"*/,(MethodInfo *)0x0);
    __this = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(__this,shader,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Material_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_Material__set_enableInstancing(__this,true,(MethodInfo *)0x0);
    Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_TypeInfo->static_fields->NIEFPLBBEHD = __this;
    thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_TypeInfo->static_fields,
                       __this);
  }
  return __this;
}


// ===== public void set_Color(Color CJNHFNHJHPE)  [RVA 0x352A1B0]
// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$set_Color @ RVA 0x352A1B0

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__set_Color
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,
               UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Renderer_o *pUVar2;
  UnityEngine_Material_o *__this_00;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *pUVar3;
  
  if ((DAT_04568a19 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a19 = 1;
    method = extraout_x1;
  }
  (__this->fields).EEKNEMEIBOJ.fields.r = CJNHFNHJHPE.fields.r;
  (__this->fields).EEKNEMEIBOJ.fields.g = CJNHFNHJHPE.fields.g;
  (__this->fields).EEKNEMEIBOJ.fields.b = CJNHFNHJHPE.fields.b;
  (__this->fields).EEKNEMEIBOJ.fields.a = CJNHFNHJHPE.fields.a;
  pUVar3 = (UnityEngine_Object_o *)(__this->fields).GKFFMLDIAJK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pUVar2 = (UnityEngine_Renderer_o *)(__this->fields).GKFFMLDIAJK;
  if (pUVar2 != (UnityEngine_Renderer_o *)0x0) {
    pUVar3 = (UnityEngine_Object_o *)UnityEngine_Renderer__get_material(pUVar2,(MethodInfo *)0x0);
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pUVar2 = (UnityEngine_Renderer_o *)(__this->fields).GKFFMLDIAJK;
    if ((pUVar2 != (UnityEngine_Renderer_o *)0x0) &&
       (__this_00 = UnityEngine_Renderer__get_material(pUVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Material_o *)0x0)) {
      UnityEngine_Material__set_color
                (__this_00,(UnityEngine_Color_o)(__this->fields).EEKNEMEIBOJ.fields,
                 (MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x352A2B4]
// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$Update @ RVA 0x352A2B4

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Update
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,MethodInfo *method)

{
  bool bVar1;
  Capsule_o *pJVar2;
  Vector3f_o *pCVar3;
  Vector3f_o *pCVar4;
  UnityEngine_Object_o *x;
  UnityEngine_LineRenderer_o *pUVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  
  if ((DAT_04568a17 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a17 = 1;
  }
  pJVar2 = (__this->fields).Base;
  if (pJVar2 == (Capsule_o *)0x0) {
    return;
  }
  bVar1 = Vector3f__LCAEEPKOHMN
                    ((pJVar2->fields).PBMIHHHBAFI,(Vector3f_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pJVar2 = (__this->fields).Base;
  if (pJVar2 != (Capsule_o *)0x0) {
    bVar1 = Vector3f__LCAEEPKOHMN
                      ((pJVar2->fields).BFBNMPMNABM,(Vector3f_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    x = (UnityEngine_Object_o *)(__this->fields).GKFFMLDIAJK;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pJVar2 = (__this->fields).Base;
    if (((pJVar2 != (Capsule_o *)0x0) &&
        (pCVar3 = (pJVar2->fields).BFBNMPMNABM, pCVar3 != (Vector3f_o *)0x0)) &&
       (pCVar4 = (pJVar2->fields).PBMIHHHBAFI, pCVar4 != (Vector3f_o *)0x0)) {
      fVar10 = (pCVar3->fields).super.OHHDBINAJCB;
      fVar11 = (pCVar3->fields).super.JOLEIODMLFL;
      fVar7 = (pCVar4->fields).super.OHHDBINAJCB;
      fVar8 = (pCVar4->fields).super.JOLEIODMLFL;
      fVar12 = (pJVar2->fields).MHJPFONADDM;
      fVar9 = (pJVar2->fields).MEKAEJEAAGJ;
      fVar6 = (__this->fields).GLKAIFDHFFG;
      fVar13 = (pJVar2->fields).ADOKPILEFJH;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      if (0.001 < ABS(fVar6 - fVar13)) {
        pJVar2 = (__this->fields).Base;
        if (pJVar2 == (Capsule_o *)0x0) goto LAB_0362a090;
        fVar6 = (pJVar2->fields).ADOKPILEFJH;
        pUVar5 = (__this->fields).GKFFMLDIAJK;
        (__this->fields).GLKAIFDHFFG = fVar6;
        if (pUVar5 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_0362a090;
        UnityEngine_LineRenderer__set_endWidth(pUVar5,fVar6,(MethodInfo *)0x0);
        UnityEngine_LineRenderer__set_startWidth(pUVar5,fVar6,(MethodInfo *)0x0);
      }
      pUVar5 = (__this->fields).GKFFMLDIAJK;
      if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
        fVar10 = fVar10 - fVar7;
        fVar11 = fVar11 - fVar8;
        position.fields.x = fVar7 + fVar10 * fVar12;
        position.fields.y = fVar8 + fVar11 * fVar12;
        position.fields.z = 0.0;
        UnityEngine_LineRenderer__SetPosition(pUVar5,0,position,(MethodInfo *)0x0);
        pUVar5 = (__this->fields).GKFFMLDIAJK;
        if (pUVar5 != (UnityEngine_LineRenderer_o *)0x0) {
          fVar9 = 1.0 - fVar9;
          position_00.fields.x = fVar7 + fVar10 * fVar9;
          position_00.fields.y = fVar8 + fVar11 * fVar9;
          position_00.fields.z = 0.0;
          UnityEngine_LineRenderer__SetPosition(pUVar5,1,position_00,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0362a090:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Start()  [RVA 0x352A2B8]
// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$Start @ RVA 0x352A2B8

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Start
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_01;
  Capsule_o *pJVar3;
  UnityEngine_LineRenderer_o **ppUVar4;
  UnityEngine_Renderer_o *__this_01;
  float value;
  
  if ((DAT_04568a1a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    DAT_04568a1a = 1;
  }
  pJVar3 = (__this->fields).Base;
  if (pJVar3 != (Capsule_o *)0x0) {
    (__this->fields).GLKAIFDHFFG = (pJVar3->fields).ADOKPILEFJH;
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = (UnityEngine_LineRenderer_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this_00,Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
      ppUVar4 = &(__this->fields).GKFFMLDIAJK;
      *ppUVar4 = pUVar1;
      thunk_FUN_01c20e04(ppUVar4,pUVar1);
      if (*ppUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_numCapVertices(*ppUVar4,9,(MethodInfo *)0x0);
        pUVar1 = (__this->fields).GKFFMLDIAJK;
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          value = (__this->fields).GLKAIFDHFFG;
          UnityEngine_LineRenderer__set_endWidth(pUVar1,value,(MethodInfo *)0x0);
          UnityEngine_LineRenderer__set_startWidth(pUVar1,value,(MethodInfo *)0x0);
          if (*ppUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_useWorldSpace(*ppUVar4,false,(MethodInfo *)0x0);
            __this_01 = (UnityEngine_Renderer_o *)*ppUVar4;
            pUVar2 = Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__DOHPICEPCBF(method_00);
            if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial(__this_01,pUVar2,(MethodInfo *)0x0);
              if ((UnityEngine_Renderer_o *)*ppUVar4 != (UnityEngine_Renderer_o *)0x0) {
                UnityEngine_Renderer__set_shadowCastingMode
                          ((UnityEngine_Renderer_o *)*ppUVar4,0,(MethodInfo *)0x0);
                if ((UnityEngine_Renderer_o *)*ppUVar4 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_receiveShadows
                            ((UnityEngine_Renderer_o *)*ppUVar4,false,(MethodInfo *)0x0);
                  if (*ppUVar4 != (UnityEngine_LineRenderer_o *)0x0) {
                    UnityEngine_LineRenderer__set_alignment(*ppUVar4,1,(MethodInfo *)0x0);
                    if (((UnityEngine_Renderer_o *)*ppUVar4 != (UnityEngine_Renderer_o *)0x0) &&
                       (pUVar2 = UnityEngine_Renderer__get_material
                                           ((UnityEngine_Renderer_o *)*ppUVar4,(MethodInfo *)0x0),
                       pUVar2 != (UnityEngine_Material_o *)0x0)) {
                      UnityEngine_Material__set_color
                                (pUVar2,(UnityEngine_Color_o)(__this->fields).EEKNEMEIBOJ.fields,
                                 (MethodInfo *)0x0);
                      Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Render(__this,method_01);
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

