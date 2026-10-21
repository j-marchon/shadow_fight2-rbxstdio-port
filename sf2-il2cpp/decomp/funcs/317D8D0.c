// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$HEDOCGMPGKM @ RVA 0x317D8D0

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__HEDOCGMPGKM
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Renderer_o *__this_02;
  UnityEngine_LineRenderer_o **ppUVar2;
  
  if ((DAT_04566998 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&StringLiteral_12317);
    DAT_04566998 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = (UnityEngine_LineRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    ppUVar2 = &(__this->fields).ICLKKKJNGGO;
    *ppUVar2 = pUVar1;
    thunk_FUN_01c20e04(ppUVar2,pUVar1);
    if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_positionCount
                (*ppUVar2,(__this->fields).DBGJIDKBHAG + 1,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_Renderer_o *)(__this->fields).ICLKKKJNGGO;
      shader = UnityEngine_Shader__Find(StringLiteral_12317,(MethodInfo *)0x0);
      __this_01 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
      UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
      if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_material(__this_02,__this_01,(MethodInfo *)0x0);
        if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__set_useWorldSpace(*ppUVar2,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

