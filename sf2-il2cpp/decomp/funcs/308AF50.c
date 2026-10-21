// LabelButton$$get_ButtonColor @ RVA 0x308AF50

/* WARNING: Type propagation algorithm not settling */

int32_t LabelButton__get_ButtonColor(LabelButton_o *__this,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  System_String_array *pSVar3;
  UnityEngine_UI_Graphic_o *x;
  ulong uVar4;
  UnityEngine_Events_UnityAction_o *a;
  
  if ((DAT_04566050 & 1) == 0) {
    FUN_01bab630(&LabelButton_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_ResolutionImage_TypeInfo);
    DAT_04566050 = 1;
    method = extraout_x1;
  }
  x = (__this->fields).super.super.super.super.m_TargetGraphic;
  if (x != (UnityEngine_UI_Graphic_o *)0x0) {
    bVar1 = (Nekki_SF2_GUI_ResolutionImage_TypeInfo->_2).naturalAligment;
    if (bVar1 <= (x->klass->_2).naturalAligment) {
      if ((x->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)Nekki_SF2_GUI_ResolutionImage_TypeInfo) {
        x = (UnityEngine_UI_Graphic_o *)0x0;
      }
      goto LAB_0318afe4;
    }
  }
  x = (UnityEngine_UI_Graphic_o *)0x0;
LAB_0318afe4:
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
LAB_0318b090:
    uVar4 = 1;
LAB_0318b094:
    return (int32_t)uVar4;
  }
  uVar4 = 0;
  do {
    if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pSVar3 = LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ;
    if (pSVar3 == (System_String_array *)0x0) {
LAB_0318b0a8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    if ((long)(int)pSVar3->max_length <= (long)uVar4) goto LAB_0318b090;
    if (x == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_0318b0a8;
    a = x[1].fields.m_OnDirtyLayoutCallback;
    if ((LabelButton_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
      pSVar3 = LabelButton_TypeInfo->static_fields->JMKEDHMEOAJ;
      if (pSVar3 == (System_String_array *)0x0) goto LAB_0318b0a8;
    }
    if ((uint)pSVar3->max_length <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01bab8d0();
    }
    bVar2 = System_String__op_Equality
                      ((System_String_o *)a,pSVar3->m_Items[uVar4],(MethodInfo *)0x0);
    if (bVar2) goto LAB_0318b094;
    uVar4 = uVar4 + 1;
  } while( true );
}

