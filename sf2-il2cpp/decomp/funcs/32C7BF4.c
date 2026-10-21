// Nekki.SF2.GUI.Dialogs.Raids.PlayerInfoHeaderView$$OCFFFLNEKHD @ RVA 0x32C7BF4

void Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView__OCFFFLNEKHD
               (Nekki_SF2_GUI_Dialogs_Raids_PlayerInfoHeaderView_o *__this,
               OJEHKJHEBID_o *PBNPKBJKFHE,System_String_o *BKJJFPJOCGP,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  Nekki_SF2_GUI_ResolutionImage_o *__this_00;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  
  pNVar1 = (__this->fields)._clanName;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,BKJJFPJOCGP,(pNVar1->klass->vtable)._75_set_text.method);
    __this_00 = (__this->fields)._clanEmptyImage;
    if ((__this_00 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_GameObject_o *)0x0)) {
      if (PBNPKBJKFHE == (OJEHKJHEBID_o *)0x0) {
        UnityEngine_GameObject__SetActive(pUVar2,true,(MethodInfo *)0x0);
        return;
      }
      UnityEngine_GameObject__SetActive(pUVar2,false,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._clanLogoMount;
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
        UnityEngine_TransformExtensions__DeleteAllChildrenObjects(pUVar3,(MethodInfo *)0x0);
        pUVar2 = (__this->fields)._clanLogoMount;
        if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
          pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
                    /* try { // try from 033c7c80 to 034c7ca7 has its CatchHandler @ 033c85a8 */
          KFCFGKEHPNK__LEIGOOFFFPE(pUVar3,PBNPKBJKFHE,false,1.3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

