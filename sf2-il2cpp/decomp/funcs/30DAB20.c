// Nekki.SF2.GUI.TableView$$ReusableCellForRow @ RVA 0x30DAB20

Nekki_SF2_GUI_TableViewCell_o *
Nekki_SF2_GUI_TableView__ReusableCellForRow
          (Nekki_SF2_GUI_TableView_o *__this,int32_t JDEFJPHCNMM,MethodInfo *method)

{
  bool bVar1;
  IKGDKGBHEFN_o *__this_00;
  Nekki_SF2_GUI_TableViewCell_o *pNVar2;
  MethodInfo *method_00;
  
  if ((DAT_0456634f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456634f = 1;
  }
  __this_00 = (__this->fields).MKCAEDADDII;
  if (__this_00 == (IKGDKGBHEFN_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  pNVar2 = IKGDKGBHEFN__AJPALGCGEHB(__this_00,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar2 = Nekki_SF2_GUI_TableView__KLAGNKHFMCE(__this,JDEFJPHCNMM,method_00);
    return pNVar2;
  }
  return pNVar2;
}

