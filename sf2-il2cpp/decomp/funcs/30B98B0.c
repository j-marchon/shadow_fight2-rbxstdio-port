// Nekki.SF2.GUI.TextPic$$add_OnRendered @ RVA 0x30B98B0

void Nekki_SF2_GUI_TextPic__add_OnRendered
               (Nekki_SF2_GUI_TextPic_o *__this,System_Action_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  System_Delegate_o *pSVar2;
  System_Delegate_o *a;
  
  if ((DAT_04566216 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    DAT_04566216 = 1;
  }
  a = *(System_Delegate_o **)&(__this->fields)._FONMBPGDLBL_k__BackingField;
  while ((pSVar2 = System_Delegate__Combine(a,(System_Delegate_o *)CJNHFNHJHPE,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 ||
         ((System_Action_c *)pSVar2->klass == System_Action_TypeInfo))) {
    pSVar2 = (System_Delegate_o *)
             FUN_01c07368(&(__this->fields)._FONMBPGDLBL_k__BackingField,pSVar2,a);
    bVar1 = a == pSVar2;
    a = pSVar2;
    if (bVar1) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01babc64(pSVar2);
}

