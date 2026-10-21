// Nekki.SF2.GUI.Common.Hints.HintGroup$$IMIMOLCJELD @ RVA 0x34FB570

int32_t Nekki_SF2_GUI_Common_Hints_HintGroup__IMIMOLCJELD
                  (Nekki_SF2_GUI_Common_Hints_HintGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  UnityEngine_Object_o *x;
  
  if ((DAT_0456882a & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponentInParent<HintList>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456882a = 1;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Component__GetComponentInParent<object>
                ((UnityEngine_Component_o *)__this,
                 Method_UnityEngine_Component_GetComponentInParent<HintList>__);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_Object_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    iVar2 = *(int32_t *)&x[2].monitor;
  }
  else {
    iVar2 = -1;
  }
  return iVar2;
}

