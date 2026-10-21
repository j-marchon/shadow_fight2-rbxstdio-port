// Nekki.SF2.GUI.Dialogs.Raids.BuyConsContainerCell$$DBPCHLNOOBP @ RVA 0x34A623C

void Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell__DBPCHLNOOBP
               (Nekki_SF2_GUI_Dialogs_Raids_BuyConsContainerCell_o *__this,MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  undefined8 uVar2;
  UnityEngine_Transform_o *__this_00;
  undefined1 auVar3 [16];
  
  pNVar1 = (__this->fields)._consumableCountText;
  uVar2 = 0;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    auVar3 = (*(pNVar1->klass->vtable)._23_set_color.methodPtr)
                       ((__this->fields).GKOENMEMANO.fields.r,(__this->fields).GKOENMEMANO.fields.g,
                        (__this->fields).GKOENMEMANO.fields.b,(__this->fields).GKOENMEMANO.fields.a,
                        pNVar1,(pNVar1->klass->vtable)._23_set_color.method);
    __this_00 = (__this->fields).PJINIFIOINE;
    if (DAT_0455fa7f == '\0') {
      auVar3 = FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
      DAT_0455fa7f = '\x01';
    }
    method = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      UnityEngine_Transform__set_localScale
                (__this_00,
                 (UnityEngine_Vector3_o)
                 (UnityEngine_Vector3_TypeInfo->static_fields->oneVector).fields,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(uVar2,method);
}

