// Nekki.SF2.GUI.Fight.ValueLine$$EILGKEOFAJE @ RVA 0x30DEE40

void Nekki_SF2_GUI_Fight_ValueLine__EILGKEOFAJE
               (Nekki_SF2_GUI_Fight_ValueLine_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  Nekki_SF2_GUI_Fight_IconAndText_o *pNVar2;
  
                    /* try { // try from 031dee5c to 032dee67 has its CatchHandler @ 031dea20 */
  if ((DAT_0456638a & 1) == 0) {
                    /* try { // try from 031dee68 to 032dee6f has its CatchHandler @ 031dee70 */
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031dedf4 with catch @ 031dee70
                       catch(type#2 @ 00000000) { ... } // from try @ 031dee68 with catch @ 031dee70
                        */
    DAT_0456638a = 1;
    method = extraout_x1;
  }
  pNVar2 = (__this->fields).valueLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = (__this->fields).valueLabel;
    if ((pNVar2 != (Nekki_SF2_GUI_Fight_IconAndText_o *)0x0) &&
       (__this_00 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

