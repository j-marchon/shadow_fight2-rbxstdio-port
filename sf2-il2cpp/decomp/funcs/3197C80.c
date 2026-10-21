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

