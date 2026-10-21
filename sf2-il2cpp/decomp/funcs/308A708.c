// Nekki.SF2.GUI.LabelAliasLE$$set_text @ RVA 0x308A708

void Nekki_SF2_GUI_LabelAliasLE__set_text
               (Nekki_SF2_GUI_LabelAliasLE_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method
               )

{
  bool bVar1;
  int32_t iVar2;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  long *plVar3;
  
  if ((DAT_04566049 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566049 = 1;
  }
  Nekki_SF2_GUI_LabelAlias__set_text
            ((Nekki_SF2_GUI_LabelAlias_o *)__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  x = *(UnityEngine_Object_o **)&(__this->fields).super._ToUpperCase;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    plVar3 = *(long **)&(__this->fields).super._ToUpperCase;
    iVar2 = Nekki_SF2_GUI_LabelAliasLE__FKKCJGFKKBO(__this,method_00);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0318a7ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x338))((float)iVar2,plVar3,*(undefined8 *)(*plVar3 + 0x340));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

