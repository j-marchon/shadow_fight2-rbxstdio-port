// Nekki.SF2.GUI.Map.MapScene$$EMFECCBKKGD @ RVA 0x35868AC

void Nekki_SF2_GUI_Map_MapScene__EMFECCBKKGD
               (Nekki_SF2_GUI_Map_MapScene_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_Map_RaidMapContainer_o **ppNVar2;
  Nekki_SF2_GUI_Map_RaidMapContainer_o *pNVar3;
  
  if ((DAT_04568d17 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568d17 = 1;
    method = extraout_x1;
  }
  ppNVar2 = &(__this->fields).OPPIFBJOLBI;
  pNVar3 = *ppNVar2;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (*ppNVar2 == (Nekki_SF2_GUI_Map_RaidMapContainer_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)*ppNVar2,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
  }
  pNVar3 = Nekki_SF2_GUI_Map_MapScene__CJIKOBCFOOF(__this,(__this->fields).KFKABLNIFDP,false,in_x3);
  (__this->fields).OPPIFBJOLBI = pNVar3;
  thunk_FUN_01c20e04(ppNVar2,pNVar3);
  return;
}

