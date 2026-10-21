// Nekki.SF2.Core.Fights.Renders.Model.CapsuleRender$$Start @ RVA 0x352A2B8

void Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender__Start
               (Nekki_SF2_Core_Fights_Renders_Model_CapsuleRender_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar1;
  MethodInfo *method_00;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_01;
  JGHEMMGMLND_o *pJVar3;
  UnityEngine_LineRenderer_o **ppUVar4;
  UnityEngine_Renderer_o *__this_01;
  float value;
  
  if ((DAT_04568a1a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    DAT_04568a1a = 1;
  }
  pJVar3 = (__this->fields).Base;
  if (pJVar3 != (JGHEMMGMLND_o *)0x0) {
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

