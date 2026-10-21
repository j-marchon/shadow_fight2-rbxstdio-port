// Nekki.SF2.GUI.Dialogs.Raids.LinkAccountDialog$$Init @ RVA 0x3170A38

void Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog__Init
               (Nekki_SF2_GUI_Dialogs_Raids_LinkAccountDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  byte bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_GameObject_o *__this_00;
  NCJBDBGIPNF_o *pNVar3;
  
  if ((DAT_0456691c & 1) == 0) {
    FUN_01bab630(&NCJBDBGIPNF_TypeInfo);
    FUN_01bab630(&StringLiteral_9679);
    FUN_01bab630(&StringLiteral_3640);
    FUN_01bab630(&StringLiteral_7001);
    DAT_0456691c = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    bVar1 = (NCJBDBGIPNF_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (IMMNELPBGIF->klass->_2).naturalAligment) {
      if ((IMMNELPBGIF->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)NCJBDBGIPNF_TypeInfo) {
        IMMNELPBGIF = (Il2CppObject *)0x0;
      }
      goto LAB_03270ae0;
    }
  }
  IMMNELPBGIF = (Il2CppObject *)0x0;
LAB_03270ae0:
  (__this->fields).super.GIAMLPMHEDN = (NCJBDBGIPNF_o *)IMMNELPBGIF;
  thunk_FUN_01c20e04(&(__this->fields).super.GIAMLPMHEDN);
  Nekki_SF2_GUI_Dialogs_BaseDialog__GIENGNEGHPJ
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(System_String_o *)0x0,StringLiteral_9679,
             StringLiteral_3640,3,(MethodInfo *)0x0);
  pNVar3 = (__this->fields).super.GIAMLPMHEDN;
  if ((pNVar3 != (NCJBDBGIPNF_o *)0x0) &&
     (pNVar2 = (__this->fields).super.super._header, pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,(pNVar3->fields).DONLEDMPGCF,(MethodInfo *)0x0);
    pNVar3 = (__this->fields).super.GIAMLPMHEDN;
    if ((pNVar3 != (NCJBDBGIPNF_o *)0x0) &&
       (pNVar2 = (__this->fields).super._message, pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0)) {
      (*(pNVar2->klass->vtable)._75_set_text.methodPtr)
                (pNVar2,(pNVar3->fields).FDLJAOACNIP,(pNVar2->klass->vtable)._75_set_text.method);
      pNVar2 = (__this->fields).super._error;
      if ((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
        pNVar2 = (__this->fields).super._error;
        if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,StringLiteral_7001,(MethodInfo *)0x0);
          pNVar2 = (__this->fields).super._error;
          if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03270bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                      (0x3f800000,0,0,0x3f800000,pNVar2,(pNVar2->klass->vtable)._23_set_color.method
                      );
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

