// Nekki.SF2.GUI.Dialogs.StoryDialog$$DCGKJKKNCEP @ RVA 0x32BE54C

void Nekki_SF2_GUI_Dialogs_StoryDialog__DCGKJKKNCEP
               (Nekki_SF2_GUI_Dialogs_StoryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_LabelAlias_o *pNVar3;
  
  if ((DAT_045674ba & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_2086);
    FUN_01bab630(&StringLiteral_1);
    DAT_045674ba = 1;
    method = extraout_x1;
  }
  pNVar3 = (__this->fields)._timeLabel;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields).JJDLGLNKNBB != false)) {
    pSVar2 = Nekki_SF2_GUI_TimerLabel__GetTimeString
                       ((__this->fields).MBLMCOMELHB,true,true,true,true,false,true,
                        StringLiteral_2086,StringLiteral_1,true,true,true,true,true,StringLiteral_1,
                        StringLiteral_1,StringLiteral_1,3,(MethodInfo *)0x0);
    pNVar3 = (__this->fields)._timeLabel;
    if (pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
      (*(pNVar3->klass->vtable)._75_set_text.methodPtr)
                (pNVar3,pSVar2,(pNVar3->klass->vtable)._75_set_text.method);
      pNVar3 = (__this->fields)._timeLabel;
      if ((pNVar3 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar3,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
        Nekki_SF2_GUI_Dialogs_StoryDialog__KJMBGJFCHOA(__this,(__this->fields)._timeLabel,method_00)
        ;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

