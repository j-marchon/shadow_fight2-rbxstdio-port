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
    FUN_01bab630(&StringLiteral_8987);
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
    pUVar2 = UnityEngine_Shader__Find(StringLiteral_8987,(MethodInfo *)0x0);
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

