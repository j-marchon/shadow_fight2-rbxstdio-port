// LJLLAKHOFFF$$JAEOMHIAHJB @ RVA 0x32EAD30

void LJLLAKHOFFF__JAEOMHIAHJB
               (UnityEngine_UI_Button_o *LGHOMHOPNEP,int32_t CJPDDDECBPD,bool IHKMBHOELIL,
               MethodInfo *method)

{
  bool value;
  
  if (CJPDDDECBPD != 3) {
    if (CJPDDDECBPD == 2) {
      if (LGHOMHOPNEP == (UnityEngine_UI_Button_o *)0x0) goto LAB_033ead88;
      value = false;
    }
    else {
      if (CJPDDDECBPD != 0) {
        return;
      }
      if (LGHOMHOPNEP == (UnityEngine_UI_Button_o *)0x0) goto LAB_033ead88;
      value = true;
    }
    UnityEngine_UI_Selectable__set_interactable
              ((UnityEngine_UI_Selectable_o *)LGHOMHOPNEP,value,(MethodInfo *)0x0);
    return;
  }
  if (LGHOMHOPNEP != (UnityEngine_UI_Button_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033ead68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(LGHOMHOPNEP->klass->vtable)._38_Select.methodPtr)
              (LGHOMHOPNEP,(LGHOMHOPNEP->klass->vtable)._38_Select.method);
    return;
  }
LAB_033ead88:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(LGHOMHOPNEP,CJPDDDECBPD,IHKMBHOELIL);
}

