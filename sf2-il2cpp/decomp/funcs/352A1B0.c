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

