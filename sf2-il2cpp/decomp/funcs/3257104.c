// Nekki.SF2.GUI.Map.MoveableMapPanel$$EEJALNEPFIL @ RVA 0x3257104

void Nekki_SF2_GUI_Map_MoveableMapPanel__EEJALNEPFIL
               (Nekki_SF2_GUI_Map_MoveableMapPanel_o *__this,MethodInfo *method)

{
  System_Action_o *pSVar1;
  
  Nekki_SF2_GUI_Map_MoveableMapPanel__FHHDIIMNKNJ(__this,method);
  UnityEngine_TransformExtensions__SetAnchoredPositionY
            ((__this->fields).KFADFKDCDGM,1200.0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).ODENJKGAALC;
  if (pSVar1 != (System_Action_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0335713c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(pSVar1->fields).super.super.invoke_impl)
              ((pSVar1->fields).super.super.method_code,(pSVar1->fields).super.super.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

