// Nekki.SF2.GUI.Dialogs.StoryDialog$$GBHBDMMKPLO @ RVA 0x32C1578

void Nekki_SF2_GUI_Dialogs_StoryDialog__GBHBDMMKPLO
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,System_String_o *NONPLOOOOAG,
               MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_LabelAlias_o *pNVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *method_00;
  Nekki_SF2_GUI_TimerLabel_o *pNVar4;
  UnityEngine_Vector3_o value;
  
  if ((DAT_045674cc & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045674cc = 1;
  }
  pNVar2 = (__this->fields)._text;
  if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar2,NONPLOOOOAG,(MethodInfo *)0x0);
    pNVar2 = (__this->fields)._text;
    if (pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      pUVar3 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0);
      if (DAT_0455fa77 == '\0') {
        FUN_01bab630(&UnityEngine_Vector3_TypeInfo);
        DAT_0455fa77 = '\x01';
      }
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_localPosition
                  (pUVar3,(UnityEngine_Vector3_o)
                          (UnityEngine_Vector3_TypeInfo->static_fields->zeroVector).fields,
                   (MethodInfo *)0x0);
        if ((__this->fields).FKDKFGIFBIJ != false) {
          Nekki_SF2_GUI_Dialogs_StoryDialog__KJMBGJFCHOA(__this,(__this->fields)._text,method_00);
        }
        pNVar4 = (__this->fields)._timerLabel;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (!bVar1) {
LAB_033c16c8:
          (*(__this->klass->vtable)._34_DCGKJKKNCEP.methodPtr)
                    (__this,(__this->klass->vtable)._34_DCGKJKKNCEP.method);
          (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
                    (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
          (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
                    (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
          (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
                    (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
                    /* WARNING: Could not recover jumptable at 0x033c1730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._50_NDGMODGKNEG.methodPtr)
                    (__this,(__this->klass->vtable)._50_NDGMODGKNEG.method);
          return;
        }
        pNVar4 = (__this->fields)._timerLabel;
        if (pNVar4 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0);
          pNVar2 = (__this->fields)._text;
          if (((pNVar2 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
              (__this_00 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
              __this_00 != (UnityEngine_Transform_o *)0x0)) &&
             (value = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0),
             pUVar3 != (UnityEngine_Transform_o *)0x0)) {
            UnityEngine_Transform__set_localPosition(pUVar3,value,(MethodInfo *)0x0);
            pNVar4 = (__this->fields)._timerLabel;
            if ((pNVar4 != (Nekki_SF2_GUI_TimerLabel_o *)0x0) &&
               (__this_01 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pNVar4,(MethodInfo *)0x0),
               __this_01 != (UnityEngine_GameObject_o *)0x0)) {
              UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
              (__this->fields).JBKOKFGICDL = true;
              goto LAB_033c16c8;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

