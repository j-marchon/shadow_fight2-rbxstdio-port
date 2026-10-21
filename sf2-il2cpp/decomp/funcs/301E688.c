// Nekki.SF2.GUI.Dialogs.SimpleDialog$$Start @ RVA 0x301E688

void Nekki_SF2_GUI_Dialogs_SimpleDialog__Start
               (Nekki_SF2_GUI_Dialogs_SimpleDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  System_String_o *CJNHFNHJHPE;
  MethodInfo *in_x3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  UnityEngine_UI_Toggle_o *pUVar4;
  
  if ((DAT_04565c30 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565c30 = 1;
  }
  Nekki_SF2_GUI_Dialogs_BaseDialog__Start
            ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,(MethodInfo *)0x0);
  pNVar3 = (__this->fields)._label;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._label;
    if (pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) goto LAB_0311e7e4;
    CJNHFNHJHPE = (__this->fields).DHHJFNPJFLF;
    if ((__this->fields).ENHHJMDENNI == false) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,CJNHFNHJHPE,(pNVar3->klass->vtable)._75_set_text.method);
    }
    else {
      Nekki_SF2_GUI_LabelAlias__set_Alias(pNVar3,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
  }
  pUVar4 = (__this->fields)._checkBox;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar4 = (__this->fields)._checkBox;
    if ((pUVar4 == (UnityEngine_UI_Toggle_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0311e7e4;
    UnityEngine_GameObject__SetActive
              (pUVar2,(__this->fields)._ANLOMDKGOND_k__BackingField,(MethodInfo *)0x0);
  }
  pNVar3 = (__this->fields)._checkBoxLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pNVar3 = (__this->fields)._checkBoxLabel;
    if ((pNVar3 == (Nekki_SF2_GUI_LabelAlias_o *)0x0) ||
       (pUVar2 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
       pUVar2 == (UnityEngine_GameObject_o *)0x0)) {
LAB_0311e7e4:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    UnityEngine_GameObject__SetActive
              (pUVar2,(__this->fields)._ANLOMDKGOND_k__BackingField,(MethodInfo *)0x0);
  }
  if ((__this->fields)._ANLOMDKGOND_k__BackingField != false) {
    Nekki_SF2_GUI_Dialogs_SimpleDialog__BAFEFLKGNPG
              (__this,(__this->fields).PKGLLMLHGPC,(__this->fields).JKBAACEKGJF,in_x3);
  }
                    /* WARNING: Could not recover jumptable at 0x0311e7e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._36_FMJHHEJDAKI.methodPtr)
            (__this,(__this->klass->vtable)._36_FMJHHEJDAKI.method);
  return;
}

