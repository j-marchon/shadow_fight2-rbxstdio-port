// TypeDefIndex 1482
// Namespace: Nekki.SF2.Core.Fights.Renders.Model
// public class MeshRender : MonoBehaviour
// Fields:
//   private Color KBNCFNICOOG; // 0x20
//   protected HHLPEJCDCBH KMFFEHGLKOC; // 0x30
//   private Mesh BMEKEGAGFGD; // 0x38
//   private static Shader JEPNKCGABFJ; // 0x0
//   private static Material IOJMKLLNMNJ; // 0x8
//   private MeshRenderer GJCLPALBJDG; // 0x40

// ===== private void Start()  [RVA 0x31978F4]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$Start @ RVA 0x31978F4

void Nekki_SF2_Core_Fights_Renders_Model_MeshRender__Start
               (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Shader_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  UnityEngine_Material_o **ppUVar4;
  UnityEngine_Mesh_o *__this_00;
  UnityEngine_Mesh_o **ppUVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_MeshFilter_o *__this_01;
  UnityEngine_MeshRenderer_o *pUVar7;
  UnityEngine_Renderer_o *__this_02;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  UnityEngine_MeshRenderer_o **ppUVar8;
  
  if ((DAT_04566a85 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<MeshFilter>__);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<MeshRenderer>__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo);
    FUN_01bab630(&UnityEngine_Mesh_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_8987/*"Mesh/Colored"*/);
    DAT_04566a85 = 1;
    method = extraout_x1;
  }
  x = (UnityEngine_Object_o *)
      Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo->static_fields->JEPNKCGABFJ;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = UnityEngine_Shader__Find(StringLiteral_8987/*"Mesh/Colored"*/,(MethodInfo *)0x0);
    Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo->static_fields->JEPNKCGABFJ = pUVar2;
    thunk_FUN_01c20e04(Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo->static_fields,pUVar2
                      );
    pUVar2 = Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo->static_fields->JEPNKCGABFJ;
    pUVar3 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(pUVar3,pUVar2,(MethodInfo *)0x0);
    ppUVar4 = &Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo->static_fields->IOJMKLLNMNJ;
    *ppUVar4 = pUVar3;
    thunk_FUN_01c20e04(ppUVar4,pUVar3);
  }
  __this_00 = (UnityEngine_Mesh_o *)thunk_FUN_01bda818(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(__this_00,(MethodInfo *)0x0);
  ppUVar5 = &(__this->fields).BMEKEGAGFGD;
  *ppUVar5 = __this_00;
  thunk_FUN_01c20e04(ppUVar5,__this_00);
  pUVar6 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar6 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_01 = (UnityEngine_MeshFilter_o *)
                  UnityEngine_GameObject__AddComponent<object>
                            (pUVar6,Method_UnityEngine_GameObject_AddComponent<MeshFilter>__),
     __this_01 != (UnityEngine_MeshFilter_o *)0x0)) {
    UnityEngine_MeshFilter__set_mesh(__this_01,(__this->fields).BMEKEGAGFGD,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = (UnityEngine_MeshRenderer_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (pUVar6,Method_UnityEngine_GameObject_AddComponent<MeshRenderer>__);
      ppUVar8 = &(__this->fields).GJCLPALBJDG;
      *ppUVar8 = pUVar7;
      thunk_FUN_01c20e04(ppUVar8,pUVar7);
      if ((UnityEngine_Renderer_o *)*ppUVar8 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial
                  ((UnityEngine_Renderer_o *)*ppUVar8,
                   Nekki_SF2_Core_Fights_Renders_Model_MeshRender_TypeInfo->static_fields->
                   IOJMKLLNMNJ,(MethodInfo *)0x0);
        if (((UnityEngine_Renderer_o *)*ppUVar8 != (UnityEngine_Renderer_o *)0x0) &&
           (pUVar3 = UnityEngine_Renderer__get_material
                               ((UnityEngine_Renderer_o *)*ppUVar8,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Material_o *)0x0)) {
          UnityEngine_Material__set_color
                    (pUVar3,(UnityEngine_Color_o)(__this->fields).KBNCFNICOOG.fields,
                     (MethodInfo *)0x0);
          __this_02 = (UnityEngine_Renderer_o *)(__this->fields).GJCLPALBJDG;
          if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
            UnityEngine_Renderer__set_shadowCastingMode(__this_02,0,(MethodInfo *)0x0);
            if ((UnityEngine_Renderer_o *)*ppUVar8 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_receiveShadows
                        ((UnityEngine_Renderer_o *)*ppUVar8,false,(MethodInfo *)0x0);
              if ((UnityEngine_Renderer_o *)*ppUVar8 != (UnityEngine_Renderer_o *)0x0) {
                UnityEngine_Renderer__set_lightProbeUsage
                          ((UnityEngine_Renderer_o *)*ppUVar8,0,(MethodInfo *)0x0);
                if ((UnityEngine_Renderer_o *)*ppUVar8 != (UnityEngine_Renderer_o *)0x0) {
                  UnityEngine_Renderer__set_reflectionProbeUsage
                            ((UnityEngine_Renderer_o *)*ppUVar8,0,(MethodInfo *)0x0);
                  Nekki_SF2_Core_Fights_Renders_Model_MeshRender__GIENGNEGHPJ(__this,method_00);
                  return;
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


// ===== private void GIENGNEGHPJ()  [RVA 0x3197B54]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$GIENGNEGHPJ @ RVA 0x3197B54

void Nekki_SF2_Core_Fights_Renders_Model_MeshRender__GIENGNEGHPJ
               (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  HHLPEJCDCBH_o *pHVar1;
  UnityEngine_Mesh_o *pUVar2;
  
  pHVar1 = (__this->fields).KMFFEHGLKOC;
  if (pHVar1 != (HHLPEJCDCBH_o *)0x0) {
    HHLPEJCDCBH__GIENGNEGHPJ(pHVar1,(MethodInfo *)0x0);
    pHVar1 = (__this->fields).KMFFEHGLKOC;
    if ((pHVar1 != (HHLPEJCDCBH_o *)0x0) &&
       (pUVar2 = (__this->fields).BMEKEGAGFGD, pUVar2 != (UnityEngine_Mesh_o *)0x0)) {
      UnityEngine_Mesh__set_vertices(pUVar2,(pHVar1->fields).GNIBJEOJOBO,(MethodInfo *)0x0);
      pHVar1 = (__this->fields).KMFFEHGLKOC;
      if ((pHVar1 != (HHLPEJCDCBH_o *)0x0) &&
         (pUVar2 = (__this->fields).BMEKEGAGFGD, pUVar2 != (UnityEngine_Mesh_o *)0x0)) {
        UnityEngine_Mesh__set_triangles(pUVar2,(pHVar1->fields).KIDEMGIBKHC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== private void Update()  [RVA 0x3197BAC]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$Update @ RVA 0x3197BAC

void Nekki_SF2_Core_Fights_Renders_Model_MeshRender__Update
               (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  HHLPEJCDCBH_o *pHVar1;
  UnityEngine_Mesh_o *pUVar2;
  
  pHVar1 = (__this->fields).KMFFEHGLKOC;
  if (pHVar1 == (HHLPEJCDCBH_o *)0x0) {
    return;
  }
  HHLPEJCDCBH__BDHAMOEKNNK(pHVar1,(MethodInfo *)0x0);
  pHVar1 = (__this->fields).KMFFEHGLKOC;
  if ((pHVar1 != (HHLPEJCDCBH_o *)0x0) &&
     (pUVar2 = (__this->fields).BMEKEGAGFGD, pUVar2 != (UnityEngine_Mesh_o *)0x0)) {
    UnityEngine_Mesh__set_vertices(pUVar2,(pHVar1->fields).GNIBJEOJOBO,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).BMEKEGAGFGD;
    if (pUVar2 != (UnityEngine_Mesh_o *)0x0) {
      UnityEngine_Mesh__RecalculateBounds(pUVar2,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3197C00]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$.ctor @ RVA 0x3197C00

void Nekki_SF2_Core_Fights_Renders_Model_MeshRender___ctor
               (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  HHLPEJCDCBH_o *__this_00;
  HHLPEJCDCBH_o **ppHVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566a86 & 1) == 0) {
    FUN_01bab630(&HHLPEJCDCBH_TypeInfo);
    DAT_04566a86 = 1;
    method = extraout_x1;
  }
  (__this->fields).KBNCFNICOOG.fields.b = 0.0;
  (__this->fields).KBNCFNICOOG.fields.a = 1.0;
  (__this->fields).KBNCFNICOOG.fields.r = 0.0;
  (__this->fields).KBNCFNICOOG.fields.g = 0.0;
  __this_00 = (HHLPEJCDCBH_o *)thunk_FUN_01bda818(HHLPEJCDCBH_TypeInfo,method);
  HHLPEJCDCBH___ctor(__this_00,(MethodInfo *)0x0);
  ppHVar1 = &(__this->fields).KMFFEHGLKOC;
  *ppHVar1 = __this_00;
  thunk_FUN_01c20e04(ppHVar1,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public HHLPEJCDCBH get_Base()  [RVA 0x3197C78]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$get_Base @ RVA 0x3197C78

HHLPEJCDCBH_o *
Nekki_SF2_Core_Fights_Renders_Model_MeshRender__get_Base
          (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  return (__this->fields).KMFFEHGLKOC;
}


// ===== public void set_Color(Color CJNHFNHJHPE)  [RVA 0x3197C80]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$set_Color @ RVA 0x3197C80

void Nekki_SF2_Core_Fights_Renders_Model_MeshRender__set_Color
               (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,
               UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Renderer_o *__this_00;
  UnityEngine_Material_o *__this_01;
  MethodInfo *extraout_x1;
  UnityEngine_Object_o *x;
  
  if ((DAT_04566a87 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566a87 = 1;
    method = extraout_x1;
  }
  (__this->fields).KBNCFNICOOG.fields.r = CJNHFNHJHPE.fields.r;
  (__this->fields).KBNCFNICOOG.fields.g = CJNHFNHJHPE.fields.g;
  (__this->fields).KBNCFNICOOG.fields.b = CJNHFNHJHPE.fields.b;
  (__this->fields).KBNCFNICOOG.fields.a = CJNHFNHJHPE.fields.a;
  x = (UnityEngine_Object_o *)(__this->fields).GJCLPALBJDG;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (UnityEngine_Renderer_o *)(__this->fields).GJCLPALBJDG;
    if ((__this_00 != (UnityEngine_Renderer_o *)0x0) &&
       (__this_01 = UnityEngine_Renderer__get_material(__this_00,(MethodInfo *)0x0),
       __this_01 != (UnityEngine_Material_o *)0x0)) {
      UnityEngine_Material__set_color
                (__this_01,(UnityEngine_Color_o)(__this->fields).KBNCFNICOOG.fields,
                 (MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}


// ===== public Color get_Color()  [RVA 0x3197D48]
// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$get_Color @ RVA 0x3197D48

UnityEngine_Color_o
Nekki_SF2_Core_Fights_Renders_Model_MeshRender__get_Color
          (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  return (UnityEngine_Color_o)(__this->fields).KBNCFNICOOG.fields;
}

