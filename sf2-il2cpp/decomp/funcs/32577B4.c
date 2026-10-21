// Nekki.SF2.GUI.Map.MoveableMapPanel$$ACMFPMGPPEE @ RVA 0x32577B4

void Nekki_SF2_GUI_Map_MoveableMapPanel__ACMFPMGPPEE
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,0.0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).AIMIDDHDIAG;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x033577e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

