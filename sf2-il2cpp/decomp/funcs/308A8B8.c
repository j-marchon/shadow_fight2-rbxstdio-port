// LabelButton$$set_Opacity @ RVA 0x308A8B8

void LabelButton__set_Opacity(LabelButton_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  UnityEngine_UI_Graphic_o *pUVar3;
  Nekki_SF2_GUI_LabelAlias_o *pNVar4;
  float fVar5;
  float in_s1;
  float in_s2;
  
  if ((DAT_0456604d & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_0456604d = 1;
  }
  pUVar3 = (__this->fields).super.super.super.super.m_TargetGraphic;
  (__this->fields).MFCHJFPDLGC = CJNHFNHJHPE;
  if (pUVar3 != (UnityEngine_UI_Graphic_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if ((bVar1 <= (pUVar3->klass->_2).naturalAligment) &&
       ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo)) {
      (*(pUVar3->klass->vtable)._22_get_color.methodPtr)
                (pUVar3,(pUVar3->klass->vtable)._22_get_color.method);
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,(pUVar3->klass->vtable)._23_set_color.method);
      pNVar4 = (__this->fields).Label;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      pNVar4 = (__this->fields).Label;
      if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
        fVar5 = (float)(*(pNVar4->klass->vtable)._22_get_color.methodPtr)
                                 (pNVar4,(pNVar4->klass->vtable)._22_get_color.method);
        pNVar4 = (__this->fields).Label;
        if (pNVar4 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
          (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                    (pNVar4,(pNVar4->klass->vtable)._23_set_color.method);
          (__this->fields).EGMBJLELLPB.fields.r = fVar5;
          (__this->fields).EGMBJLELLPB.fields.g = in_s1;
          (__this->fields).EGMBJLELLPB.fields.b = in_s2;
          (__this->fields).EGMBJLELLPB.fields.a = CJNHFNHJHPE;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

