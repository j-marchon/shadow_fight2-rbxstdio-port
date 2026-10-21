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

