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
    FUN_01bab630(&StringLiteral_12317);
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
    shader = UnityEngine_Shader__Find(StringLiteral_12317,(MethodInfo *)0x0);
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

